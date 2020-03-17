#include <vector>
#include <iostream>

#include <CGAL/Mesh_triangulation_3.h>
#include <CGAL/Mesh_complex_3_in_triangulation_3.h>
#include <CGAL/Mesh_criteria_3.h>

#include <CGAL/make_mesh_3.h>
#include <CGAL/Image_3.h>

/// [Domain definition]
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Mesh_domain_with_polyline_features_3.h>
#include <CGAL/Labeled_mesh_domain_3.h>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef CGAL::Labeled_mesh_domain_3<K> Image_domain;
typedef CGAL::Mesh_domain_with_polyline_features_3<Image_domain> Mesh_domain;
/// [Domain definition]

#ifdef CGAL_CONCURRENT_MESH_3
typedef CGAL::Parallel_tag Concurrency_tag;
#else
typedef CGAL::Sequential_tag Concurrency_tag;
#endif

// Triangulation
typedef CGAL::Mesh_triangulation_3<Mesh_domain,CGAL::Default,Concurrency_tag>::type Tr;

typedef CGAL::Mesh_complex_3_in_triangulation_3<Tr> C3t3;

// Criteria
typedef CGAL::Mesh_criteria_3<Tr> Mesh_criteria;


typedef CGAL::Triangulation_cell_base_3<Tr>	Cell_Base;
typedef CGAL::Mesh_complex_3_in_triangulation_3<Tr>::Vertices_in_complex_iterator Complex_Vertex_Iterator;
typedef typename Tr::Finite_vertices_iterator Finite_vertices_iterator;
typedef typename Tr::Vertex_handle Vertex_handle;
typedef typename Tr::Point Point_3;
typedef typename Tr::Segment Segment_3;

#include <map>

// To avoid verbose function and named parameters call
using namespace CGAL::parameters;

/// [Add 1D features]
#include "read_polylines.h"
#include <CGAL/Mesh_3/polylines_to_protect.h> // undocumented header

// Protect the intersection of the object with the box of the image,
// by declaring 1D-features. Note that `CGAL::polylines_to_protect` is
// not documented.
bool add_1D_features(const CGAL::Image_3& image,
                     Mesh_domain& domain,
                     const char* lines_fname)
{
  typedef K::Point_3 Point_3;
  typedef unsigned char Word_type;

  std::vector<std::vector<Point_3> > features_inside;
  if(!read_polylines(lines_fname, features_inside)) // see file "read_polylines.h"
  {
    std::cerr << "Error: Cannot read file " <<  lines_fname << std::endl;
    return false;
  }

  std::vector<std::vector<Point_3> > polylines_on_bbox;
  CGAL::polylines_to_protect<Point_3, Word_type>(image, polylines_on_bbox,
                                                 features_inside.begin(),
                                                 features_inside.end());

  domain.add_features(polylines_on_bbox.begin(), polylines_on_bbox.end());

  // It is very important that the polylines from the file `lines_fname`
  // contain only polylines in the inside of the box of the image.
  domain.add_features(features_inside.begin(), features_inside.end());
  return true;
}
/// [Add 1D features]



void parcoursPoly(std::vector< C3t3::Edge >& polyLine, std::vector<bool>& used, std::vector< C3t3::Edge >& V, int lineNum, int point, C3t3& c3t3) {
    Vertex_handle p1 = V[lineNum].first->vertex(V[lineNum].second);
    Vertex_handle p2 = V[lineNum].first->vertex(V[lineNum].third);
    used[lineNum] = true;
    polyLine.push_back(V[lineNum]);
    C3t3::Vertex_handle vertex;
    if (point == 2) {
        if (c3t3.in_dimension(V[lineNum].first->vertex(V[lineNum].third)) == 0)
            return;
        vertex = V[lineNum].first->vertex(V[lineNum].second);
    }
    else if (point == 3) {
        if (c3t3.in_dimension(V[lineNum].first->vertex(V[lineNum].second)) == 0)
            return;
        vertex = V[lineNum].first->vertex(V[lineNum].second);
    }
    for (int i = 0; i < V.size(); i++) {
        if ((V[i].first->vertex(V[i].second)) == vertex && used[i] == false)
            parcoursPoly(polyLine, used, V, i, 2, c3t3);
        else if ((V[i].first->vertex(V[i].third)) == vertex && used[i] == false)
            parcoursPoly(polyLine, used, V, i, 3, c3t3);
    }
}


int main(int argc, char* argv[])
{
  const char* fname = (argc>1)?argv[1]:"data/420.inr";
  // Loads image
  CGAL::Image_3 image;
  if(!image.read(fname)){
    std::cerr << "Error: Cannot read file " <<  fname << std::endl;
    return EXIT_FAILURE;
  }

  // Domain
  Mesh_domain domain = Mesh_domain::create_labeled_image_mesh_domain(image);

  /// Declare 1D-features, see above [Call add_1D_features]
  const char* lines_fname = (argc>2)?argv[2]:"data/420.polylines.txt";

  if(!add_1D_features(image, domain, lines_fname)) {
    return EXIT_FAILURE;
  }
  /// [Call add_1D_features]

  /// Note that `edge_size` is needed with 1D-features [Mesh criteria]
  Mesh_criteria criteria(edge_size=6,
                         facet_angle=30, facet_size=6, facet_distance=4,
                         cell_radius_edge_ratio=3, cell_size=8);
  /// [Mesh criteria]

  // Meshing
  C3t3 c3t3 = CGAL::make_mesh_3<C3t3>(domain, criteria);


  Tr t = c3t3.triangulation();
  int i = 0;

  //std::map<C3t3::Edge, int> V;
  std::vector< C3t3::Edge > V;
  for (C3t3::Edges_in_complex_iterator it = c3t3.edges_in_complex_begin(); it != c3t3.edges_in_complex_end(); ++it)
  {
      // add the current Point_3 to the map with its current index
      C3t3::Edge edge = *it;
      V.push_back(edge);
      Point_3 p1 = edge.first->vertex(edge.second)->point();
      Point_3 p2 = edge.first->vertex(edge.third)->point();
      //std::cout << "Curve #" << i << " : " << 
      //    "\tvertex 1 : " << p1 << "\t\t\tdim : " << c3t3.in_dimension(edge.first->vertex(edge.second))
      //    << "\t\t\tVertex 2 : " << p2 << "\t\t\tdim : " << c3t3.in_dimension(edge.first->vertex(edge.third))
      //    << std::endl;
      ++i;
  }


  std::vector<bool> used;
  for (int i = 0; i < V.size(); i++)
      used.push_back(false);

  std::vector< std::vector< C3t3::Edge > > polyLines;
  for (int i = 0; i < V.size(); i++) {
      if (c3t3.in_dimension(V[i].first->vertex(V[i].second)) == 0 && used[i] == false) {
          std::vector< C3t3::Edge > tempPolyLine;
          parcoursPoly(tempPolyLine, used, V, i, 2, c3t3);
          polyLines.push_back(tempPolyLine);
      }
      else if (c3t3.in_dimension(V[i].first->vertex(V[i].third)) == 0 && used[i] == false) {
          std::vector< C3t3::Edge > tempPolyLine;
          parcoursPoly(tempPolyLine, used, V, i, 3, c3t3);
          polyLines.push_back(tempPolyLine);
      }
  }

  std::cout << "POLYLINES" << std::endl;
  for (int i = 0; i < polyLines.size(); i++) {
      std::cout << std::endl << "Polyline #" << i << " : ";
      for (int j = 0; j < polyLines[i].size(); j++) {
          Vertex_handle p1 = polyLines[i][j].first->vertex(polyLines[i][j].second);
          Vertex_handle p2 = polyLines[i][j].first->vertex(polyLines[i][j].third);
          std::cout << "Curve #" << j << " : " <<
              "\tvertex 1 : " << p1->point() << "\t\t\tdim : " << c3t3.in_dimension(p1)
              << "\t\t\tVertex 2 : " << p2->point() << "\t\t\tdim : " << c3t3.in_dimension(p2)
              << std::endl;
      }
  }

  // Output
  std::ofstream medit_file("out.mesh");
  c3t3.output_to_medit(medit_file);

  return 0;
}

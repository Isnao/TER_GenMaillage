#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>

#include <CGAL/Mesh_triangulation_3.h>
#include <CGAL/Mesh_complex_3_in_triangulation_3.h>
#include <CGAL/Mesh_criteria_3.h>

#include <CGAL/Labeled_image_mesh_domain_3.h>
#include <CGAL/make_mesh_3.h>
#include <CGAL/Image_3.h>
#include <CGAL/Mesh_domain_with_polyline_features_3.h>

#include <CGAL/Mesh_3/Mesh_global_optimizer.h>

// Domain
struct K: public CGAL::Exact_predicates_inexact_constructions_kernel {};
typedef K::Point_3 Point;
typedef CGAL::Image_3 Image;
typedef CGAL::Labeled_image_mesh_domain_3<Image,K> Image_domain;
typedef CGAL::Mesh_domain_with_polyline_features_3<Image_domain> Mesh_domain;

// Triangulation
typedef CGAL::Mesh_triangulation_3<Mesh_domain>::type Tr;
typedef CGAL::Mesh_complex_3_in_triangulation_3<Tr> C3t3;

// Mesh Criteria
typedef CGAL::Mesh_criteria_3<Tr> Mesh_criteria;
typedef Mesh_criteria::Facet_criteria    Facet_criteria;
typedef Mesh_criteria::Cell_criteria     Cell_criteria;

// Polyline
typedef std::vector<Point>        Polyline_3;
typedef std::list<Polyline_3>       Polylines;

typedef int Subdomain_index;


using namespace CGAL::parameters;

int main(int argc, char** argv)
{
  
  Image image;   image.read("Patrick8.inr");       // Loads image
  Mesh_domain domain(image, 1e-9); // Domain

  // Mesh criteria
  Facet_criteria facet_criteria(20,  5,   100); // angle, size, approximation
  Cell_criteria cell_criteria(0,   0); // radius-edge ratio, size
  Mesh_criteria criteria(facet_criteria, cell_criteria);
 

  // Meshing
  C3t3 c3t3 = CGAL::make_mesh_3<C3t3>(domain, criteria, no_exude(), no_perturb());
  CGAL::lloyd_optimize_mesh_3(c3t3, domain, time_limit = 30);

  // Polyline
  Polylines polylines(1);
  Polyline_3& polyline = polylines.front();
  
  for (int i = 0; i < image.size(); i++)
  {
      Point p(image.vx(), image.vy(), image.vz());
      if (c3t3.in_dimension(p))
        polyline.push_back(p);
  }
  polyline.push_back(polyline.front());
  domain.add_features(polylines.begin(), polylines.end());

  // Meshing bis
  c3t3 = CGAL::make_mesh_3<C3t3>(domain, criteria, no_exude(), no_perturb());
  CGAL::lloyd_optimize_mesh_3(c3t3, domain, time_limit = 30);
  

  // Output
  std::ofstream off_file("Patrick.off");
  c3t3.output_facets_in_complex_to_off(off_file);
  std::ofstream salut("Patrickmesh.mesh");
  c3t3.output_to_medit(salut);
  
    return 0;
}

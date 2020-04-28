#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>

#include <CGAL/Triangulation_3.h>
#include <CGAL/Mesh_triangulation_3.h>
#include <CGAL/Mesh_complex_3_in_triangulation_3.h>
#include <CGAL/Mesh_criteria_3.h>

#include <map>
#include <iostream>
//#include <CGAL/Labeled_mesh_domain_3.h>
#include <CGAL/Labeled_image_mesh_domain_3.h>
#include <CGAL/make_mesh_3.h>
#include <CGAL/Image_3.h>

#include <CGAL/Mesh_3/Mesh_global_optimizer.h>
#include <CGAL/Mesh_domain_with_polyline_features_3.h>
#include <CGAL/circulator.h>

#include "include.hpp"

using namespace CGAL::parameters;

int main(int argc, char **argv)
{
  Image image;
  image.read("../data/Patrick_t001.inr"); // Loads image
  Mesh_domain domain(image, 1e-9);        // Domain
  //Mesh_domain domain = Mesh_domain::create_labeled_image_mesh_domain(image);

  // Mesh criteria
  Edge_criteria edge_criteria(6);
  Facet_criteria facet_criteria(30, 10, 1); // angle, size, approximation
  Cell_criteria cell_criteria(0, 0);        // radius-edge ratio, size
  Mesh_criteria criteria(facet_criteria, cell_criteria);

  // Meshing
  C3t3 c3t3bis = CGAL::make_mesh_3<C3t3>(domain, criteria, no_exude(), no_perturb());

  ///
  Image image2;
  image2.read("../data/Patrick_t002.inr");
  Mesh_domain domain2(image2, 1e-9); // Domain
  //Mesh_domain domain2 = Mesh_domain::create_labeled_image_mesh_domain(image);

  Edge_criteria edge_criteria2(6);
  Facet_criteria facet_criteria2(30, 10, 1); // angle, size, approximation
  Cell_criteria cell_criteria2(0, 0);        // radius-edge ratio, size
  Mesh_criteria criteria2(facet_criteria2, cell_criteria2);

  C3t3 c3t32 = CGAL::make_mesh_3<C3t3>(domain2, criteria2, no_exude(), no_perturb());

  /////try save and load

  c3t3_out("../data/Patoche.mesh", c3t3bis);
  C3t3 c3t3;
  c3t3 = c3t3_in("../data/Patoche.mesh");

  /////////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////////////////////

  // remplissage des dimensions c3t3 + remplissages des egdes caracteristiques
  std::vector<C3t3::Edge> CaracEdge;
    Tr& t=c3t3.triangulation();
  c3t3Param(c3t3,CaracEdge);
  // remplissage des dimensions c3t32 + remplissages des egdes caracteristiques
  std::vector<C3t3::Edge> CaracEdge2;
  Tr& t2=c3t32.triangulation();
  c3t3Param(c3t32,CaracEdge2);

  //////////////////////////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////

  std::cout << std::endl;

  //test comparaisons
  typedef CGAL::Mesh_complex_3_in_triangulation_3<Tr>::Vertices_in_complex_iterator Complex_Vertex_Iterator;

  // vertex ***************************

  std::cout << "C3T3 Number of cells : " << c3t3.number_of_cells() << std::endl;
  int i = 0;
  std::map<C3t3::Vertex_handle, int> V;
  for (Complex_Vertex_Iterator it = c3t3.vertices_in_complex_begin(); it != c3t3.vertices_in_complex_end(); ++it)
  {
    if (c3t3.in_dimension(it) == 0)
    {
      V[it] = i;
      //std::cout << "Vertex #" << i << " : " << it->point() << " Dimension : " << c3t3.in_dimension(it) << std::endl;
    }
    i++;
  }
  std::cout << "Taille V : " << V.size() << " (nombre de vertex de dimension 0 dans c3t3)" << std::endl;

  std::cout << "C3T32 Number of cells : " << c3t32.number_of_cells() << std::endl;
  i = 0;
  std::map<C3t3::Vertex_handle, int> V2;
  for (Complex_Vertex_Iterator it = c3t32.vertices_in_complex_begin(); it != c3t32.vertices_in_complex_end(); ++it)
  {
    if (c3t32.in_dimension(it) == 0)
    {
      V2[it] = i;
      //std::cout << "Vertex #" << i << " : " << it->point() << " Dimension : " << c3t32.in_dimension(it) << std::endl;
    }
    i++;
  }
  std::cout << "Taille V2 : " << V2.size() << " (nombre de vertex de dimension 0 dans c3t32)" << std::endl;

  //****************************************

  std::cout << std::endl;

  ///////////////////////////////////////////////
  // edges ****************************************

  i = 0;
  std::map<C3t3::Edge, int> V_e;
  for (C3t3::Edges_in_complex_iterator it = c3t3.edges_in_complex_begin(); it != c3t3.edges_in_complex_end(); ++it)
  {
    // add the current Point_3 to the map with its current index
    C3t3::Edge edge = *it;
    V_e[edge] = i;
    Point_3 p1 = edge.first->vertex(edge.second)->point();
    Point_3 p2 = edge.first->vertex(edge.third)->point();
    //std::cout << "Curve #" << i << " : " <<
    //  "\tvertex 1 : " << p1 << "\t\t\tdim : " << c3t3.in_dimension(edge.first->vertex(edge.second))
    //<< "\n\t\tVertex 2 : " << p2 << "\t\t\tdim : " << c3t3.in_dimension(edge.first->vertex(edge.third))
    //<< std::endl;
    ++i;
  }
  std::cout << "Taille V_e : " << V_e.size() << "(nombre d'edge caractéristiques dans c3t3)" << std::endl;

  i = 0;
  std::map<C3t3::Edge, int> V2_e;
  for (C3t3::Edges_in_complex_iterator it = c3t32.edges_in_complex_begin(); it != c3t32.edges_in_complex_end(); ++it)
  {
    // add the current Point_3 to the map with its current index
    C3t3::Edge edge = *it;
    V2_e[edge] = i;
    Point_3 p1 = edge.first->vertex(edge.second)->point();
    Point_3 p2 = edge.first->vertex(edge.third)->point();
    //std::cout << "Curve #" << i << " : " <<
    //  "\tvertex 1 : " << p1 << "\t\t\tdim : " << c3t32.in_dimension(edge.first->vertex(edge.second))
    //<< "\n\t\tVertex 2 : " << p2 << "\t\t\tdim : " << c3t32.in_dimension(edge.first->vertex(edge.third))
    //<< std::endl;
    ++i;
  }

  std::cout << "Taille V2_e : " << V2_e.size() << "(nombre d'edge caractéristiques dans c3t32)" << std::endl;

  //**********************************************

  std::cout << std::endl;

  //////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////

  //polylignes

    //c3t3
    int curveNum_c3t3=1;
  std::vector<bool> used;
  for (unsigned int i = 0; i < CaracEdge.size(); i++){
    used.push_back(false);
  }
  std::vector<std::vector<C3t3::Edge>> polyLines;
  for (unsigned int i = 0; i < CaracEdge.size(); i++){
    if(used[i]==false){
      std::vector<C3t3::Edge> tempPolyLine;
      parcoursPoly(tempPolyLine, used, CaracEdge, i, c3t3,curveNum_c3t3);
      polyLines.push_back(tempPolyLine);
      curveNum_c3t3++;  
   }  
  }
  /*
   std::cout << "POLYLINES c3t3 :" << std::endl;
  for (int i = 0; i < polyLines.size(); i++) {
      std::cout << std::endl << "Polyline #" << i << " : "<<std::endl;
      for (int j = 0; j < polyLines[i].size(); j++) {
          C3t3::Vertex_handle p1 = polyLines[i][j].first->vertex(polyLines[i][j].second);
          C3t3::Vertex_handle p2 = polyLines[i][j].first->vertex(polyLines[i][j].third);
          std::cout << "Curve #" << j << " : " <<
              "\tvertex 1 : " << p1->point() << "\tdim : " << c3t3.in_dimension(p1)
              << " , \tVertex 2 : " << p2->point() << "\tdim : " << c3t3.in_dimension(p2)
              << " csi : "<<c3t3.curve_segment_index(polyLines[i][j])<< std::endl;
      }
  }
  */
  std::cout<<"Nombre de polylignes de c3t3 : "<<polyLines.size()<<std::endl;

  //c3t32
  int curveNum_c3t32=1;
  std::vector<bool> used2;
  for (unsigned int i = 0; i < CaracEdge2.size(); i++){
    used2.push_back(false);
  }
  std::vector<std::vector<C3t3::Edge>> polyLines2;
  for (unsigned int i = 0; i < CaracEdge2.size(); i++){
    if(used2[i] == false){
      std::vector<C3t3::Edge> tempPolyLine2;
      parcoursPoly(tempPolyLine2, used2, CaracEdge2, i, c3t32,curveNum_c3t32);
      polyLines2.push_back(tempPolyLine2);
    }
  }

  
  /*
   std::cout << "POLYLINES c3t32 :" << std::endl;
  for (int i = 0; i < polyLines2.size(); i++) {
      std::cout << std::endl << "Polyline #" << i+1 << " : "<<std::endl;
      for (int j = 0; j < polyLines2[i].size(); j++) {
          C3t3::Vertex_handle p1 = polyLines2[i][j].first->vertex(polyLines2[i][j].second);
          C3t3::Vertex_handle p2 = polyLines2[i][j].first->vertex(polyLines2[i][j].third);
          std::cout << "Curve #" << j << " : " <<
              "\tvertex 1 : " << p1->point() << "\tdim : " << c3t32.in_dimension(p1)
              << " , \tVertex 2 : " << p2->point() << "\tdim : " << c3t32.in_dimension(p2)
              << ",\t csi : "<<c3t32.curve_segment_index(polyLines2[i][j])<< std::endl;
      }
  }
  */
  std::cout<<"Nombre de polylignes de c3t32 : "<<polyLines2.size()<<std::endl;

  /////////////////////////////////////////
    //stockages de chaques polylignes avec memes sous domaines

  std::vector<std::vector<std::vector<C3t3::Edge>>> groupPolyLines;
  getGroupPolyline(c3t3,t,polyLines,groupPolyLines);

    ///////////////////////////////////////////////////////
    ////////////////////////////////////////////////////
  //correspondances de polylignes

  std::vector<std::vector<std::vector<C3t3::Edge>>> samePolyLines;
  for(unsigned int i=0;i<groupPolyLines.size();i++){
    std::vector<std::vector<C3t3::Edge>> temp;
    getSamePolylines(c3t3,t,c3t32,t2,groupPolyLines[i][0][0],polyLines2,temp);
    samePolyLines.push_back(temp);
    
    std::cout<<"////////////////////////////////////"<<std::endl<<"GROUP OF POLYLINES N° "<<i+1<<std::endl<<std::endl;
    for(unsigned int j=0;j<groupPolyLines[i].size();j++){
     printPolyligne(groupPolyLines[i][j]);
     std::cout<<std::endl;
    }
  std::cout<<"Polylignes associées à "<<i+1<<" :"<<std::endl;
    for(unsigned int j=0;j<samePolyLines[i].size();j++){
      std::cout<<std::endl<<j+1<<")"<<std::endl;
      printPolyligne(samePolyLines[i][j]);
    }
    
  }

  ///////////////////////////////////////////////////
  //correspondance points
/*
  std::vector<std::vector<C3t3::Vertex_handle>> samePoints;
  for(int i =0;i<polyLines.size();i++){
    samePoints.push_back(findPoint(polyLines[i],samePolyLines[i],c3t3,c3t32));

    std::cout<<std::endl<<"Correspondances polylignes "<<i+1<<" :"<<std::endl;
    int j;
    for(j=0;j<polyLines[i].size();j++){
      std::cout<<"\tVertex 1 : "<<
      polyLines[i][j].first->vertex(polyLines[i][j].second)->point()
        <<"\tVertex 2 : "<<(samePoints[i][j])->point()<<std::endl;
    }
    std::cout<<"\tVertex 1 : "<<
    polyLines[i][j-1].first->vertex(polyLines[i][j-1].third)->point()
    <<"\tVertex 2 : "<<(samePoints[i][j])->point()<<std::endl;
  }
*/

/*
  ///////// test poly of domain
  std::vector<int> polyDom;
  getDomPoly(c3t3, 6, polyLines, polyDom);
  std::cout << "Polylignes autour du domaine 6 :" << std::endl;
  for (int i = 0; i < polyDom.size(); i++){
      std::cout << polyDom[i] << std::endl;
  }
  */


  // Output
  std::ofstream off_file("../Patrick.off");
  c3t3.output_facets_in_complex_to_off(off_file);

  std::ofstream off_file2("../Patrick2.mesh");
  c3t32.output_to_medit(off_file2);

  return 0;
}

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

// Domain
struct K: public CGAL::Exact_predicates_inexact_constructions_kernel {};
typedef CGAL::Image_3 Image;
//typedef CGAL::Labeled_mesh_domain_3<K> Image_domain;
typedef CGAL::Labeled_image_mesh_domain_3<Image,K> Image_domain;
//typedef CGAL::Mesh_domain_with_polyline_features_3<Image_domain> Mesh_domain;
typedef CGAL::Labeled_image_mesh_domain_3<Image,K> Mesh_domain;

// Triangulation
typedef CGAL::Mesh_triangulation_3<Mesh_domain>::type Tr;
typedef CGAL::Mesh_complex_3_in_triangulation_3<Tr> C3t3;

// Mesh Criteria
typedef CGAL::Mesh_criteria_3<Tr> Mesh_criteria;
typedef Mesh_criteria::Edge_criteria    Edge_criteria;
typedef Mesh_criteria::Facet_criteria    Facet_criteria;
typedef Mesh_criteria::Cell_criteria     Cell_criteria;

typedef int Subdomain_index;
  typedef typename Tr::Point Point_3; 

using namespace CGAL::parameters;

bool edgeInVector(C3t3::Edge& edge, std::vector< C3t3::Edge >& tab){
    for (int i=0;i<tab.size();i++) {
      if ((edge.first->vertex(edge.second) == tab[i].first->vertex(tab[i].second) && edge.first->vertex(edge.third) == tab[i].first->vertex(tab[i].third)) || (edge.first->vertex(edge.second) == tab[i].first->vertex(tab[i].third) && edge.first->vertex(edge.third) == tab[i].first->vertex(tab[i].second)))
        return true;
    }
    return false;
}

void parcoursPoly(std::vector< C3t3::Edge >& polyLine, std::vector<bool>& used, std::vector< C3t3::Edge >& V, int lineNum, int point, C3t3& c3t3) {
    std::cout<<"yep2"<<std::endl;
    used[lineNum] = true;
    polyLine.push_back(V[lineNum]);
    C3t3::Vertex_handle vertex;
    if (point == 2) {
        if (c3t3.in_dimension(V[lineNum].first->vertex(V[lineNum].third)) == 0)
            return;
        vertex = V[lineNum].first->vertex(V[lineNum].third);
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

int main(int argc, char** argv)
{
  
  Image image;   image.read("../Patrick8.inr"); // Loads image
  Mesh_domain domain(image, 1e-9); // Domain
  //Mesh_domain domain = Mesh_domain::create_labeled_image_mesh_domain(image);

  // Mesh criteria
   Edge_criteria edge_criteria(6);  
  Facet_criteria facet_criteria(30,  10,   1); // angle, size, approximation
  Cell_criteria cell_criteria(0,   0); // radius-edge ratio, size
  Mesh_criteria criteria(facet_criteria, cell_criteria);
 
  // Meshing
  C3t3 c3t3 = CGAL::make_mesh_3<C3t3>(domain, criteria, no_exude(), no_perturb());
  

  ///
  Mesh_domain domain2(image, 1e-9); // Domain
  //Mesh_domain domain2 = Mesh_domain::create_labeled_image_mesh_domain(image); 

   //Edge_criteria edge_criteria(6);
  Facet_criteria facet_criteria2(30, 10, 10); // angle, size, approximation
  Cell_criteria cell_criteria2(0, 0); // radius-edge ratio, size
  Mesh_criteria criteria2(facet_criteria2, cell_criteria2);


  C3t3 c3t32 = CGAL::make_mesh_3<C3t3>(domain2, criteria2, no_exude(), no_perturb());

/////////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////////////////////

  // remplissage des dimensions
  Tr& t=c3t3.triangulation();
  for (Tr::All_vertices_iterator it = t.all_vertices_begin(); it != t.all_vertices_end(); ++it){
    int nb=0;
    std::vector<Tr::Cell_handle> cells;
    t.incident_cells(it,std::back_inserter(cells));
    for(int i=0;i<cells.size();i++){
      bool flag=true;
      for(int j=0;j<i;j++){
        if((int)(cells[i]->subdomain_index()) == (int)(cells[j]->subdomain_index())){
          flag=false;
          break;
        }
      }
      if(flag){
        nb++;
      }
    }

    if(nb==1){
      c3t3.set_dimension(it,3);
    }
    if(nb==2){
      c3t3.set_dimension(it,2);
    }
    if(nb>2){
      c3t3.set_dimension(it,1);
    }
  }

  std::vector<C3t3::Edge> CaracEdge;
  for (Tr::All_vertices_iterator it = t.all_vertices_begin(); it != t.all_vertices_end(); ++it){
    if(c3t3.in_dimension(it) == 1 || c3t3.in_dimension(it) == 0){
      int nb_edges=0;
      std::vector<C3t3::Edge> edges;
      t.incident_edges(it,std::back_inserter(edges));
      for(int i=0;i<edges.size();i++){
        if((c3t3.in_dimension(edges[i].first->vertex(edges[i].second)) == 1 || c3t3.in_dimension(edges[i].first->vertex(edges[i].second)) == 0) && (c3t3.in_dimension(edges[i].first->vertex(edges[i].third)) == 0 || c3t3.in_dimension(edges[i].first->vertex(edges[i].third)) == 1)){
          if(edgeInVector(edges[i],CaracEdge)){
            nb_edges++;
          }
          else{
            Tr::Cell_circulator c=t.incident_cells(edges[i]);
            Tr::Cell_circulator done=c;
            std::vector<int> domains;
            do{
              C3t3::Cell_handle cell=c;
              int n=(int)(cell->subdomain_index());
              if(std::find(domains.begin(), domains.end(), n) == domains.end()){
                domains.push_back(n);
              }
              c++;
            }while(c != done);
            if(domains.size()>2){
              CaracEdge.push_back(edges[i]);
              nb_edges++;
            }
          }
        }
      }
      if(nb_edges>2){
        c3t3.set_dimension(it,0);
      }
    }
  }

  std::cout<<"carac size : "<<CaracEdge.size()<<std::endl;
  
//////////////////////////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////

  std::cout<<std::endl;
  
  //test comparaisons
  typedef CGAL::Mesh_complex_3_in_triangulation_3<Tr>::Vertices_in_complex_iterator Complex_Vertex_Iterator;

// vertex ***************************

  std::cout << "C3T3 Number of cells : " << c3t3.number_of_cells() << std::endl;
  int i = 0;
  std::map<Tr::All_vertices_iterator, int> V;
  t = c3t3.triangulation();
  for (Tr::All_vertices_iterator it = t.all_vertices_begin(); it != t.all_vertices_end(); ++it) {
      if (c3t3.in_dimension(it) == 0) {
          V[it] = i;
          //std::cout << "Vertex #" << i << " : " << it->point() << " Dimension : " << c3t3.in_dimension(it) << std::endl;
      }
      i++;
  }
  std::cout << "Taille V : " << V.size() << " (nombre de vertex de dimension 0 dans c3t3)"<< std::endl;

 
  std::cout << "C3T32 Number of cells : " << c3t32.number_of_cells() << std::endl;
  i = 0;
  std::map<Tr::All_vertices_iterator, int> V2;
  Tr& t2 = c3t32.triangulation();
  for (Tr::All_vertices_iterator it = t2.all_vertices_begin(); it != t2.all_vertices_end(); ++it) {
      if (c3t32.in_dimension(it) == 0) {
          V2[it] = i;
          //std::cout << "Vertex #" << i << " : " << it->point() << " Dimension : " << c3t32.in_dimension(it) << std::endl;
      }
      i++;
  }
  std::cout << "Taille V2 : " << V2.size() << " (nombre de vertex de dimension 0 dans c3t32)"<< std::endl;

//****************************************

  std::cout<<std::endl;

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
      std::cout << "Curve #" << i << " : " <<
          "\tvertex 1 : " << p1 << "\t\t\tdim : " << c3t3.in_dimension(edge.first->vertex(edge.second))
          << "\n\t\tVertex 2 : " << p2 << "\t\t\tdim : " << c3t3.in_dimension(edge.first->vertex(edge.third))
          << std::endl;
      ++i;
  }
    std::cout << "Taille V_e : " << V_e.size() << "(nombre d'edge avec des points de dimension 0 dans c3t3)"<<std::endl;

 i = 0;
  std::map<C3t3::Edge, int> V2_e;
  for (C3t3::Edges_in_complex_iterator it = c3t32.edges_in_complex_begin(); it != c3t32.edges_in_complex_end(); ++it)
  {
      // add the current Point_3 to the map with its current index
      C3t3::Edge edge = *it;
      V2_e[edge] = i;
      Point_3 p1 = edge.first->vertex(edge.second)->point();
      Point_3 p2 = edge.first->vertex(edge.third)->point();
      std::cout << "Curve #" << i << " : " <<
          "\tvertex 1 : " << p1 << "\t\t\tdim : " << c3t32.in_dimension(edge.first->vertex(edge.second))
          << "\n\t\tVertex 2 : " << p2 << "\t\t\tdim : " << c3t32.in_dimension(edge.first->vertex(edge.third))
          << std::endl;
      ++i;
  }

    std::cout << "Taille V2_e : " << V2_e.size() <<"(nombre d'edge avec des points de dimension 0 dans c3t32)"<< std::endl;

  //**********************************************

    std::cout<<std::endl;

  //std::cout << "Points of domain 0 of c3t3:"<<std::endl;
  i = 0;
  std::map<int,int> domainsVertexMap_c3t3;
    std::map<Tr::All_vertices_iterator, int> P_of_d0_c3t3;
    for (Tr::All_vertices_iterator it = t.all_vertices_begin(); it != t.all_vertices_end(); ++it) {
      C3t3::Cell_handle it2=it->cell();
        if ((int)(it2->subdomain_index()) == 0){
            P_of_d0_c3t3[it] = i;
          //std::cout << "Vertex #" << i << " : " << it->point() << " Dimension : " << c3t3.in_dimension(it) << std::endl;
        }
        if(domainsVertexMap_c3t3.map::find((int)(it2->subdomain_index())) != domainsVertexMap_c3t3.end()){
          domainsVertexMap_c3t3[(int)(it2->subdomain_index())] += 1;
        }
        else{
          domainsVertexMap_c3t3[(int)(it2->subdomain_index())] =1;
        }
      i++;
  }
    //std::cout << "Taille P_of_d0_c3t3 : " << P_of_d0_c3t3.size() <<"(nombre de points dans la domaine 0 de c3t3)"<<std::endl;
    //std::cout<<"Dommaines de c3t3 avec leurs nombre de vertex :"<<std::endl;
  for(std::map<int,int>::iterator it=domainsVertexMap_c3t3.begin();it!=domainsVertexMap_c3t3.end();it++){
    //std::cout<<"Taille du dommaine "<<it->first<<" = "<<it->second<<std::endl;
  }


////////////////////////////

      //std::cout << "Points of domain 0 of c3t32:"<<std::endl;
  i = 0;
  std::map<int,int> domainsVertexMap_c3t32;
    std::map<Tr::All_vertices_iterator, int> P_of_d0_c3t32;
    for (Tr::All_vertices_iterator it = t2.all_vertices_begin(); it != t2.all_vertices_end(); ++it){
      C3t3::Cell_handle it2=it->cell();
        if ((int)(it2->subdomain_index()) == 0){
            P_of_d0_c3t32[it] = i;
          //std::cout << "Vertex #" << i << " : " << it->point() << " Dimension : " << c3t3.in_dimension(it) << std::endl;
        }
        if(domainsVertexMap_c3t32.map::find((int)(it2->subdomain_index())) != domainsVertexMap_c3t32.end()){
          domainsVertexMap_c3t32[(int)(it2->subdomain_index())] +=1;
        }
        else{
          domainsVertexMap_c3t32[(int)(it2->subdomain_index())] =1;
        }
      i++;
  }
    //std::cout << "Taille P_of_d0_c3t32 : " << P_of_d0_c3t32.size()<<"(nombre de points dans la domaine 0 de c3t32)" << std::endl;
    //std::cout<<"Dommaines de c3t32 avec leurs nombre de vertex :"<<std::endl; 
    for(std::map<int,int>::iterator it=domainsVertexMap_c3t32.begin();it!=domainsVertexMap_c3t32.end();it++){
    //std::cout<<"Taille du dommaine "<<it->first<<" = "<<it->second<<std::endl;
  }

  //////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////
  //polylignes

  std::vector<bool> used;
  for (int i = 0; i < CaracEdge.size(); i++){
    used.push_back(false);
  }
  std::vector<std::vector<C3t3::Edge>> polyLines;
  for (int i = 0; i < CaracEdge.size(); i++){
    std::cout<<"Deb for"<<std::endl;
    if ((int)(c3t3.in_dimension(CaracEdge[i].first->vertex(CaracEdge[i].second))) == 0 && used[i] == false){
      std::cout<<"if"<<std::endl;
      std::vector<C3t3::Edge> tempPolyLine;
      parcoursPoly(tempPolyLine, used, CaracEdge, i, 2, c3t3);
      polyLines.push_back(tempPolyLine);
    }
    else{
     if((int)(c3t3.in_dimension(CaracEdge[i].first->vertex(CaracEdge[i].third))) == 0 && used[i] == false){
      std::cout<<"else"<<std::endl;
      std::vector<C3t3::Edge> tempPolyLine;
      parcoursPoly(tempPolyLine, used, CaracEdge, i, 3, c3t3);
      polyLines.push_back(tempPolyLine);
      }
    }
    std::cout<<"pas 0"<<std::endl;
  }

  std::cout<<"C fini"<<std::endl;

   std::cout << "POLYLINES" << std::endl;
  for (int i = 0; i < polyLines.size(); i++) {
      std::cout << std::endl << "Polyline #" << i << " : ";
      for (int j = 0; j < polyLines[i].size(); j++) {
          C3t3::Vertex_handle p1 = polyLines[i][j].first->vertex(polyLines[i][j].second);
          C3t3::Vertex_handle p2 = polyLines[i][j].first->vertex(polyLines[i][j].third);
          std::cout << "Curve #" << j << " : " <<
              "\tvertex 1 : " << p1->point() << "\t\t\tdim : " << c3t3.in_dimension(p1)
              << "\t\t\tVertex 2 : " << p2->point() << "\t\t\tdim : " << c3t3.in_dimension(p2)
              << std::endl;
      }
  }

    ///////////////////////////////////////////////////////

  // Output
  std::ofstream off_file("../Patrick.mesh");
  c3t3.output_to_medit(off_file);

  std::ofstream off_file2("../Patrick2.mesh");
  c3t32.output_to_medit(off_file2);

    return 0;
}

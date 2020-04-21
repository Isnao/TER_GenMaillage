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

void getDomPoly(C3t3& c3t3, int dom, std::vector<std::vector<C3t3::Edge>>& PolyLines, std::vector<int>& res) {
    Tr& t = c3t3.triangulation();
    for (int i = 0; i < PolyLines.size(); i++) {
        Tr::Cell_circulator c = t.incident_cells(PolyLines[i][0]);
        Tr::Cell_circulator done = c;
        do {
            if ((int)(c->subdomain_index()) == dom) {
                res.push_back(c3t3.curve_segment_index(PolyLines[i][0]));
                break;
            }
            c++;
        } while (c != done);
    }
}

float distance3(Point_3 a, Point_3 b){
    //std::cout << (a.x() - b.x()) << "\n" << (a.x() - b.x()) * (a.x() - b.x()) << "\n" << 
    float c = std::sqrt(((a.x() - b.x()) * (a.x() - b.x())) + ((a.y() - b.y()) * (a.y() - b.y())) + ((a.z() - b.z()) * (a.z() - b.z())));
    return c;
}

//recupere le point le plus proche dans les polylignes
std::vector<C3t3::Vertex_handle> findPoint(std::vector<C3t3::Edge>& poly1,std::vector<std::vector<C3t3::Edge>>& polylignes, C3t3& c1, C3t3& c2){
    std::vector<C3t3::Vertex_handle> res;
    float min = 9999.9f;//ou infinity

    int dimP0=c1.in_dimension(poly1[0].first->vertex(poly1[0].second));
    C3t3::Vertex_handle tmp = nullptr;
    for(std::vector<C3t3::Edge> poly: polylignes){//on parcours toute les poly
        for(C3t3::Edge px : poly){//tout les edges de la poly
           	float t = distance3(poly1[0].first->vertex(poly1[0].second)->point(),px.first->vertex(px.second)->point());//distance p0 et un des point de l'edge
           	float v = distance3(poly1[0].first->vertex(poly1[0].second)->point(),px.first->vertex(px.third)->point());
           	if(t<v && min>t && c2.in_dimension(px.first->vertex(px.second)) == dimP0){ //si le second point est plus proche
           		min = t; 
           		tmp = px.first->vertex(px.second);
           	}
           	if(v<t && min>v && c2.in_dimension(px.first->vertex(px.third)) == dimP0){
           		min = v;
           		tmp = px.first->vertex(px.third);
           	}
       	}
   	}
   	res.push_back(tmp);

    for(C3t3::Edge px1 : poly1){
    	dimP0 = c1.in_dimension(px1.first->vertex(px1.third));
    	tmp = nullptr;
    	min = 9999.9f;
    	for(std::vector<C3t3::Edge> poly: polylignes){//on parcours toute les poly
        	for(C3t3::Edge px : poly){//tout les edges de la poly
            	float t = distance3(px1.first->vertex(px1.third)->point(),px.first->vertex(px.second)->point());//distance p0 et un des point de l'edge
            	float v = distance3(px1.first->vertex(px1.third)->point(),px.first->vertex(px.third)->point());
            	if(v<t && min>v && c2.in_dimension(px.first->vertex(px.second)) == dimP0){ //si le second point est plus proche
            		min = v; 
            		tmp = px.first->vertex(px.second);
            	}
            	if(t<v && min>t && c2.in_dimension(px.first->vertex(px.third)) == dimP0){
            		tmp = px.first->vertex(px.third);
            	}
        	}
    	}
    	res.push_back(tmp);
    }
    return res;
}

void printPolyligne(std::vector<C3t3::Edge>& polyLine){
	std::cout << "Polyline :" << std::endl;
    for (unsigned int j = 0; j < polyLine.size(); j++) {
      	C3t3::Vertex_handle p1 = polyLine[j].first->vertex(polyLine[j].second);
        C3t3::Vertex_handle p2 = polyLine[j].first->vertex(polyLine[j].third);
        std::cout<<"\tvertex 1 : " << p1->point()
        << " , \tVertex 2 : " << p2->point()<<std::endl;
    }
}

bool edgeInVector(C3t3::Edge& edge, std::vector< C3t3::Edge >& tab){
    for (unsigned int i=0;i<tab.size();i++) {
      if ((edge.first->vertex(edge.second) == tab[i].first->vertex(tab[i].second) && edge.first->vertex(edge.third) == tab[i].first->vertex(tab[i].third)) || (edge.first->vertex(edge.second) == tab[i].first->vertex(tab[i].third) && edge.first->vertex(edge.third) == tab[i].first->vertex(tab[i].second)))
        return true;
    }
    return false;
}

void getSamePolylines(C3t3& c3t31,Tr& t,C3t3& c3t32,Tr& t2,C3t3::Edge e,std::vector<std::vector<C3t3::Edge>>& polyLinesC3t32,std::vector<std::vector<C3t3::Edge>>& polyLines){ //c3t3,tr1,c3t32,tr2,e : one edge of the polyline in c3t3,polylignes of c3t32, the list of found polylines in c3t32 with same domains as v
	std::vector<int> domains;
	Tr::Cell_circulator c=t.incident_cells(e);
    Tr::Cell_circulator done=c;
    do{
  	    C3t3::Cell_handle cell=c;
        int n=(int)(cell->subdomain_index());
        if(std::find(domains.begin(), domains.end(), n) == domains.end()){
  	        domains.push_back(n);
        }
        c++;
    }while(c != done);

    for(unsigned int i=0;i<polyLinesC3t32.size();i++){
    	bool isSame=true;
    	for(unsigned int k=0;k<domains.size();k++){
    		c=t2.incident_cells(polyLinesC3t32[i][0]);
    		bool b=true;
    		done=c;
    		do{
    			C3t3::Cell_handle cell=c;
    			if((int)(cell->subdomain_index())==domains[k]){
    				b=false;
    				break;
    			}
    			c++;
    		}while(c != done);
    		if(b){
    			isSame=false;
    			break;
    		}
    	}
    	if(isSame){
    		polyLines.push_back(polyLinesC3t32[i]);
    	}
    }
}

void parcoursPoly(std::vector< C3t3::Edge >& polyLine, std::vector<bool>& used, std::vector< C3t3::Edge >& V, int lineNum, int point, C3t3& c3t3,int& curveNum) {
    used[lineNum] = true;
    polyLine.push_back(V[lineNum]);
    c3t3.remove_from_complex(V[lineNum]);
    c3t3.add_to_complex(V[lineNum],curveNum);
    C3t3::Vertex_handle vertex;
    if(point == 2){
        if(c3t3.in_dimension(V[lineNum].first->vertex(V[lineNum].third)) == 0){
        	curveNum++;
            return;
        }
        vertex = V[lineNum].first->vertex(V[lineNum].third);
    }
    else{
    	if(point == 3){
        	if(c3t3.in_dimension(V[lineNum].first->vertex(V[lineNum].second)) == 0){
        		curveNum++;
            	return;
        	}
        	vertex = V[lineNum].first->vertex(V[lineNum].second);
    	}
    }
    for (unsigned int i = 0; i < V.size(); i++){
        if((V[i].first->vertex(V[i].second)) == vertex && used[i] == false){
            parcoursPoly(polyLine, used, V, i, 2, c3t3,curveNum);
            return;
        }
       	else{ 
        	if((V[i].first->vertex(V[i].third)) == vertex && used[i] == false){
            parcoursPoly(polyLine, used, V, i, 3, c3t3,curveNum);
            return;
        	}
        }
    }
    //std::cout<<"aled ca marche pas :"<<curveNum<<std::endl;
    curveNum++;
}

int main(int argc, char** argv)
{
  
  Image image;   image.read("../data/Patrick_t001.inr"); // Loads image
  Mesh_domain domain(image, 1e-9); // Domain
  //Mesh_domain domain = Mesh_domain::create_labeled_image_mesh_domain(image);

  // Mesh criteria
  Edge_criteria edge_criteria(6);  
  Facet_criteria facet_criteria(30,10,1); // angle, size, approximation
  Cell_criteria cell_criteria(0,0); // radius-edge ratio, size
  Mesh_criteria criteria(facet_criteria, cell_criteria);
 
  // Meshing
  C3t3 c3t3bis = CGAL::make_mesh_3<C3t3>(domain, criteria, no_exude(), no_perturb());
  

  ///
  Image image2; image2.read("../data/Patrick_t002.inr");
  Mesh_domain domain2(image2, 1e-9); // Domain
  //Mesh_domain domain2 = Mesh_domain::create_labeled_image_mesh_domain(image); 

  Edge_criteria edge_criteria2(6);
  Facet_criteria facet_criteria2(30,10,1); // angle, size, approximation
  Cell_criteria cell_criteria2(0,0); // radius-edge ratio, size
  Mesh_criteria criteria2(facet_criteria2, cell_criteria2);


  C3t3 c3t32 = CGAL::make_mesh_3<C3t3>(domain2, criteria2, no_exude(), no_perturb());

  /////try save and load
  std::ofstream c3t3_out("../Patoche.mesh");
  c3t3_out << c3t3bis;
  std::ifstream c3t3_load("../Patoche.mesh");
  C3t3 c3t3;
  c3t3_load >> c3t3;


/////////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////////////////////

  // remplissage des dimensions c3t3
  Tr& t=c3t3.triangulation();
  int c3t3CornerIndex=0;
  for (Tr::All_vertices_iterator it = t.all_vertices_begin(); it != t.all_vertices_end(); ++it){
    int nb=0;
    std::vector<Tr::Cell_handle> cells;
    t.incident_cells(it,std::back_inserter(cells));
    for(unsigned int i=0;i<cells.size();i++){
      bool flag=true;
      for(unsigned int j=0;j<i;j++){
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

   // remplissage des dimensions c3t32
  Tr& t2=c3t32.triangulation();
  int c3t32CornerIndex=0;
  for (Tr::All_vertices_iterator it = t2.all_vertices_begin(); it != t2.all_vertices_end(); ++it){
    int nb=0;
    std::vector<Tr::Cell_handle> cells;
    t.incident_cells(it,std::back_inserter(cells));
    for(unsigned int i=0;i<cells.size();i++){
      bool flag=true;
      for(unsigned int j=0;j<i;j++){
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
      c3t32.set_dimension(it,3);
    }
    if(nb==2){
      c3t32.set_dimension(it,2);
    }
    if(nb>2){
      c3t32.set_dimension(it,1);
    }
  }


  /////////////////////////////////////////////////////
  // remplissages des egdes caracteristiques

  //c3t3

  std::vector<C3t3::Edge> CaracEdge;
  for (Tr::All_vertices_iterator it = t.all_vertices_begin(); it != t.all_vertices_end(); ++it){
    if(c3t3.in_dimension(it) == 1 || c3t3.in_dimension(it) == 0){
      int nb_edges=0;
      std::vector<C3t3::Edge> edges;
      t.incident_edges(it,std::back_inserter(edges));
      for(unsigned int i=0;i<edges.size();i++){
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
              c3t3.add_to_complex(edges[i],1);
              nb_edges++;
            }
          }
        }
      }
      if(nb_edges>2){
        c3t3.set_dimension(it,0);
        c3t3.add_to_complex(it,c3t3CornerIndex++);
      }
    }
  }

  std::cout<<"carac size of c3t3 : "<<CaracEdge.size()<<std::endl;

  //////////////////
  //c3t32

  std::vector<C3t3::Edge> CaracEdge2;
  for (Tr::All_vertices_iterator it = t2.all_vertices_begin(); it != t2.all_vertices_end(); ++it){
    if(c3t32.in_dimension(it) == 1 || c3t32.in_dimension(it) == 0){
      int nb_edges=0;
      std::vector<C3t3::Edge> edges;
      t.incident_edges(it,std::back_inserter(edges));
      for(unsigned int i=0;i<edges.size();i++){
        if((c3t32.in_dimension(edges[i].first->vertex(edges[i].second)) == 1 || c3t32.in_dimension(edges[i].first->vertex(edges[i].second)) == 0) && (c3t32.in_dimension(edges[i].first->vertex(edges[i].third)) == 0 || c3t32.in_dimension(edges[i].first->vertex(edges[i].third)) == 1)){
          if(edgeInVector(edges[i],CaracEdge2)){
            nb_edges++;
          }
          else{
            Tr::Cell_circulator c=t2.incident_cells(edges[i]);
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
              CaracEdge2.push_back(edges[i]);
              c3t32.add_to_complex(edges[i],1);
              nb_edges++;
            }
          }
        }
      }
      if(nb_edges>2){
        c3t32.set_dimension(it,0);
        c3t32.add_to_complex(it,c3t32CornerIndex++);
      }
    }
  }

  std::cout<<"carac size of c3t32 : "<<CaracEdge2.size()<<std::endl;
  
//////////////////////////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////

  std::cout<<std::endl;
  
  //test comparaisons
  typedef CGAL::Mesh_complex_3_in_triangulation_3<Tr>::Vertices_in_complex_iterator Complex_Vertex_Iterator;

// vertex ***************************

  std::cout << "C3T3 Number of cells : " << c3t3.number_of_cells() << std::endl;
  int i = 0;
  std::map<C3t3::Vertex_handle, int> V;
  for (Complex_Vertex_Iterator it = c3t3.vertices_in_complex_begin(); it != c3t3.vertices_in_complex_end(); ++it) {
      if (c3t3.in_dimension(it) == 0) {
          V[it] = i;
          //std::cout << "Vertex #" << i << " : " << it->point() << " Dimension : " << c3t3.in_dimension(it) << std::endl;
      }
      i++;
  }
  std::cout << "Taille V : " << V.size() << " (nombre de vertex de dimension 0 dans c3t3)"<< std::endl;

 
  std::cout << "C3T32 Number of cells : " << c3t32.number_of_cells() << std::endl;
  i = 0;
  std::map<C3t3::Vertex_handle, int> V2;
  for (Complex_Vertex_Iterator it = c3t32.vertices_in_complex_begin(); it != c3t32.vertices_in_complex_end(); ++it) {
      if (c3t32.in_dimension(it) == 0) {
          V2[it] = i;
          //std::cout << "Vertex #" << i << " : " << it->point() << " Dimension : " << c3t32.in_dimension(it) << std::endl;
      }
      i++;
  }
  std::cout << "Taille V2 : " << V2.size() << " (nombre de vertex de dimension 0 dans c3t32)"<< std::endl;

//****************************************

  std::cout<<std::endl;

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
    std::cout << "Taille V_e : " << V_e.size() << "(nombre d'edge caractéristiques dans c3t3)"<<std::endl;

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

    std::cout << "Taille V2_e : " << V2_e.size() <<"(nombre d'edge caractéristiques dans c3t32)"<< std::endl;

  //**********************************************

    std::cout<<std::endl;


/*
/////////////////////////////////////
//////////////////////////////////////

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
  */

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
    if ((int)(c3t3.in_dimension(CaracEdge[i].first->vertex(CaracEdge[i].second))) == 0 && used[i] == false){
      std::vector<C3t3::Edge> tempPolyLine;
      parcoursPoly(tempPolyLine, used, CaracEdge, i, 2, c3t3,curveNum_c3t3);
      polyLines.push_back(tempPolyLine);
    }
    else{
     if((int)(c3t3.in_dimension(CaracEdge[i].first->vertex(CaracEdge[i].third))) == 0 && used[i] == false){
      std::vector<C3t3::Edge> tempPolyLine;
      parcoursPoly(tempPolyLine, used, CaracEdge, i, 3, c3t3,curveNum_c3t3);
      polyLines.push_back(tempPolyLine);
      }
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
    if ((int)(c3t32.in_dimension(CaracEdge2[i].first->vertex(CaracEdge2[i].second))) == 0 && used2[i] == false){
      std::vector<C3t3::Edge> tempPolyLine2;
      parcoursPoly(tempPolyLine2, used2, CaracEdge2, i, 2, c3t32,curveNum_c3t32);
      polyLines2.push_back(tempPolyLine2);
    }
    else{
     if((int)(c3t32.in_dimension(CaracEdge2[i].first->vertex(CaracEdge2[i].third))) == 0 && used2[i] == false){
      std::vector<C3t3::Edge> tempPolyLine2;
      parcoursPoly(tempPolyLine2, used2, CaracEdge2, i, 3, c3t32,curveNum_c3t32);
      polyLines2.push_back(tempPolyLine2);
      }
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

    ///////////////////////////////////////////////////////
    ////////////////////////////////////////////////////
  //correspondances de polylignes

  std::vector<std::vector<std::vector<C3t3::Edge>>> samePolyLines;
  for(unsigned int i=0;i<polyLines.size();i++){
  	std::vector<std::vector<C3t3::Edge>> temp;
  	getSamePolylines(c3t3,t,c3t32,t2,polyLines[i][0],polyLines2,temp);
  	samePolyLines.push_back(temp);
  	std::cout<<"////////////////////////////////////"<<std::endl<<"POLYLINE N° "<<i+1<<std::endl<<std::endl;
  	printPolyligne(polyLines[i]);
  	std::cout<<std::endl;
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

  	for(C3t3::Facets_in_complex_iterator it=c3t3.facets_in_complex_begin(); it!=c3t3.facets_in_complex_end(); ++it){
  		std::cout<<"une face"<<std::endl;
	}

  // Output

  //std::ofstream c3t3_out("../Patrickc3t3.txt");
  //c3t3_out << c3t3;

  std::ofstream off_file("../Patrick.mesh");
  c3t3.output_to_medit(off_file);

  std::ofstream off_file2("../Patrick2.mesh");
  c3t32.output_to_medit(off_file2);
  
    return 0;
}

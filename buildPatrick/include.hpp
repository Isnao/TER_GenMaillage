#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>

#include <CGAL/Triangulation_3.h>
#include <CGAL/Mesh_triangulation_3.h>
#include <CGAL/Mesh_complex_3_in_triangulation_3.h>
#include <CGAL/Mesh_criteria_3.h>

#include <map>
#include <iostream>
#include <cfloat>
//#include <CGAL/Labeled_mesh_domain_3.h>
#include <CGAL/Labeled_image_mesh_domain_3.h>
#include <CGAL/make_mesh_3.h>
#include <CGAL/Image_3.h>

#include <CGAL/Mesh_3/Mesh_global_optimizer.h>
#include <CGAL/Mesh_domain_with_polyline_features_3.h>
#include <CGAL/circulator.h>

// Domain
struct K : public CGAL::Exact_predicates_inexact_constructions_kernel
{
};
typedef CGAL::Image_3 Image;
//typedef CGAL::Labeled_mesh_domain_3<K> Image_domain;
typedef CGAL::Labeled_image_mesh_domain_3<Image, K> Image_domain;
//typedef CGAL::Mesh_domain_with_polyline_features_3<Image_domain> Mesh_domain;
typedef CGAL::Labeled_image_mesh_domain_3<Image, K> Mesh_domain;

// Triangulation
typedef CGAL::Mesh_triangulation_3<Mesh_domain>::type Tr;
typedef CGAL::Mesh_complex_3_in_triangulation_3<Tr> C3t3;

// Mesh Criteria
typedef CGAL::Mesh_criteria_3<Tr> Mesh_criteria;
typedef Mesh_criteria::Edge_criteria Edge_criteria;
typedef Mesh_criteria::Facet_criteria Facet_criteria;
typedef Mesh_criteria::Cell_criteria Cell_criteria;

typedef int Subdomain_index;
typedef typename Tr::Point Point_3;

void getDomPoly(C3t3& c3t3, int dom, std::vector<std::vector<C3t3::Edge>>& PolyLines, std::vector<int>& res){
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

C3t3 c3t3_in(std::string path)
{
    std::cout << "Chargement C3t3" << std::endl;
    std::ifstream c3t3_load(path);
    C3t3 c;
    c3t3_load >> c;
    return c;
}

//out
void c3t3_out(std::string path, C3t3 &c3t3)
{
    std::cout << "Sauvegarde C3t3" << std::endl;
    std::ofstream c3t3_out(path);
    c3t3_out << c3t3;
}

float distance3(Point_3 a, Point_3 b)
{
    //std::cout << (a.x() - b.x()) << "\n" << (a.x() - b.x()) * (a.x() - b.x()) << "\n" <<
    float c = std::sqrt(((a.x() - b.x()) * (a.x() - b.x())) + ((a.y() - b.y()) * (a.y() - b.y())) + ((a.z() - b.z()) * (a.z() - b.z())));
    return c;
}

//recupere le point le plus proche dans les polylignes
std::vector<C3t3::Vertex_handle> findPoint(std::vector<C3t3::Edge> &poly1, std::vector<std::vector<C3t3::Edge>> &polylignes, C3t3 &c1, C3t3 &c2)
{
    std::vector<C3t3::Vertex_handle> res;
    float min = FLT_MAX;

    int dimP0 = c1.in_dimension(poly1[0].first->vertex(poly1[0].second));
    C3t3::Vertex_handle tmp = nullptr;
    for (std::vector<C3t3::Edge> poly : polylignes)
    { //on parcours toute les poly
        for (C3t3::Edge px : poly)
        {                                                                                                                //tout les edges de la poly
            float t = distance3(poly1[0].first->vertex(poly1[0].second)->point(), px.first->vertex(px.second)->point()); //distance p0 et un des point de l'edge
            float v = distance3(poly1[0].first->vertex(poly1[0].second)->point(), px.first->vertex(px.third)->point());
            if (t < v && min > t && c2.in_dimension(px.first->vertex(px.second)) == dimP0)
            { //si le second point est plus proche
                min = t;
                tmp = px.first->vertex(px.second);
            }
            if (v < t && min > v && c2.in_dimension(px.first->vertex(px.third)) == dimP0)
            {
                min = v;
                tmp = px.first->vertex(px.third);
            }
        }
    }
    res.push_back(tmp);

    for (C3t3::Edge px1 : poly1)
    {
        dimP0 = c1.in_dimension(px1.first->vertex(px1.third));
        tmp = nullptr;
        min = FLT_MAX;
        for (std::vector<C3t3::Edge> poly : polylignes)
        { //on parcours toute les poly
            for (C3t3::Edge px : poly)
            {                                                                                                     //tout les edges de la poly
                float t = distance3(px1.first->vertex(px1.third)->point(), px.first->vertex(px.second)->point()); //distance p0 et un des point de l'edge
                float v = distance3(px1.first->vertex(px1.third)->point(), px.first->vertex(px.third)->point());
                if (v < t && min > v && c2.in_dimension(px.first->vertex(px.second)) == dimP0)
                { //si le second point est plus proche
                    min = v;
                    tmp = px.first->vertex(px.second);
                }
                if (t < v && min > t && c2.in_dimension(px.first->vertex(px.third)) == dimP0)
                {
                    tmp = px.first->vertex(px.third);
                }
            }
        }
        res.push_back(tmp);
    }
    return res;
}

void printPolyligne(std::vector<C3t3::Edge> &polyLine)
{
    std::cout << "Polyline :" << std::endl;
    for (unsigned int j = 0; j < polyLine.size(); j++)
    {
        C3t3::Vertex_handle p1 = polyLine[j].first->vertex(polyLine[j].second);
        C3t3::Vertex_handle p2 = polyLine[j].first->vertex(polyLine[j].third);
        std::cout << "\tvertex 1 : " << p1->point()
                  << " , \tVertex 2 : " << p2->point() << std::endl;
    }
}

bool edgeInVector(C3t3::Edge &edge, std::vector<C3t3::Edge> &tab)
{
    for (unsigned int i = 0; i < tab.size(); i++)
    {
        if ((edge.first->vertex(edge.second) == tab[i].first->vertex(tab[i].second) && edge.first->vertex(edge.third) == tab[i].first->vertex(tab[i].third)) || (edge.first->vertex(edge.second) == tab[i].first->vertex(tab[i].third) && edge.first->vertex(edge.third) == tab[i].first->vertex(tab[i].second)))
            return true;
    }
    return false;
}

void getGroupPolyline(C3t3& c3t3,Tr& t,std::vector<std::vector<C3t3::Edge>>& polyLines,std::vector<std::vector<std::vector<C3t3::Edge>>>& res){
  std::vector<bool> used;
  for(unsigned int i=0;i<polyLines.size();i++){
    used.push_back(false);
  }

  for(unsigned int i=0;i<polyLines.size();i++){
    if(!used[i]){
      std::vector<std::vector<C3t3::Edge>> temp;
      std::vector<int> domains;
      Tr::Cell_circulator c=t.incident_cells(polyLines[i][0]);
      Tr::Cell_circulator done=c;
      do{
        C3t3::Cell_handle cell=c;
        int n=(int)(cell->subdomain_index());
        if(std::find(domains.begin(), domains.end(), n) == domains.end()){
          domains.push_back(n);
        }
        c++;
      }while(c != done);

      for(unsigned int j=i;j<polyLines.size();j++){
        if(!used[j]){
          bool isSame=true;
          for(unsigned int k=0;k<domains.size();k++){
            c=t.incident_cells(polyLines[j][0]);
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
            temp.push_back(polyLines[i]);
            used[j]=true;
          }
        }
      }

      res.push_back(temp);
    }
  }
}

void getSamePolylines(C3t3 &c3t31, Tr &t, C3t3 &c3t32, Tr &t2, C3t3::Edge e, std::vector<std::vector<C3t3::Edge>> &polyLinesC3t32, std::vector<std::vector<C3t3::Edge>> &polyLines)
{ //c3t3,tr1,c3t32,tr2,e : one edge of the polyline in c3t3,polylignes of c3t32, the list of found polylines in c3t32 with same domains as v
    std::vector<int> domains;
    Tr::Cell_circulator c = t.incident_cells(e);
    Tr::Cell_circulator done = c;
    do
    {
        C3t3::Cell_handle cell = c;
        int n = (int)(cell->subdomain_index());
        if (std::find(domains.begin(), domains.end(), n) == domains.end())
        {
            domains.push_back(n);
        }
        c++;
    } while (c != done);

    for (unsigned int i = 0; i < polyLinesC3t32.size(); i++)
    {
        bool isSame = true;
        for (unsigned int k = 0; k < domains.size(); k++)
        {
            c = t2.incident_cells(polyLinesC3t32[i][0]);
            bool b = true;
            done = c;
            do
            {
                C3t3::Cell_handle cell = c;
                if ((int)(cell->subdomain_index()) == domains[k])
                {
                    b = false;
                    break;
                }
                c++;
            } while (c != done);
            if (b)
            {
                isSame = false;
                break;
            }
        }
        if (isSame)
        {
            polyLines.push_back(polyLinesC3t32[i]);
        }
    }
}

/*
void parcoursPoly(std::vector<C3t3::Edge> &polyLine, std::vector<bool> &used, std::vector<C3t3::Edge> &V, int lineNum, int point, C3t3 &c3t3, int &curveNum)
{
    used[lineNum] = true;
    polyLine.push_back(V[lineNum]);
    c3t3.remove_from_complex(V[lineNum]);
    c3t3.add_to_complex(V[lineNum], curveNum);
    C3t3::Vertex_handle vertex;
    if (point == 2)
    {
        if (c3t3.in_dimension(V[lineNum].first->vertex(V[lineNum].third)) == 0)
        {
            curveNum++;
            return;
        }
        vertex = V[lineNum].first->vertex(V[lineNum].third);
    }
    else
    {
        if (point == 3)
        {
            if (c3t3.in_dimension(V[lineNum].first->vertex(V[lineNum].second)) == 0)
            {
                curveNum++;
                return;
            }
            vertex = V[lineNum].first->vertex(V[lineNum].second);
        }
    }
    for (unsigned int i = 0; i < V.size(); i++)
    {
        if ((V[i].first->vertex(V[i].second)) == vertex && used[i] == false)
        {
            parcoursPoly(polyLine, used, V, i, 2, c3t3, curveNum);
            return;
        }
        else
        {
            if ((V[i].first->vertex(V[i].third)) == vertex && used[i] == false)
            {
                parcoursPoly(polyLine, used, V, i, 3, c3t3, curveNum);
                return;
            }
        }
    }
    //std::cout<<"aled ca marche pas :"<<curveNum<<std::endl;
    curveNum++;
}
*/

void parcoursPoly(std::vector< C3t3::Edge >& polyLine, std::vector<bool>& used, std::vector< C3t3::Edge >& V, int lineNum, C3t3& c3t3, int curveNum) {
    used[lineNum] = true;
    polyLine.push_back(V[lineNum]);
    c3t3.remove_from_complex(V[lineNum]);
    c3t3.add_to_complex(V[lineNum], curveNum);
    for (unsigned int i = 0; i < V.size(); i++) {
        if (used[i] == false) {
            if (c3t3.in_dimension(V[lineNum].first->vertex(V[lineNum].second)) == 1) {
                if ((V[i].first->vertex(V[i].second)) == V[lineNum].first->vertex(V[lineNum].second) || (V[i].first->vertex(V[i].third)) == V[lineNum].first->vertex(V[lineNum].second)) {
                    parcoursPoly(polyLine, used, V, i, c3t3, curveNum);
                }
            }
            if (c3t3.in_dimension(V[lineNum].first->vertex(V[lineNum].third)) == 1) {
                if ((V[i].first->vertex(V[i].second)) == V[lineNum].first->vertex(V[lineNum].third) || (V[i].first->vertex(V[i].third)) == V[lineNum].first->vertex(V[lineNum].third)) {
                    parcoursPoly(polyLine, used, V, i, c3t3, curveNum);
                }
            }
        }
    }
}

void c3t3Param(C3t3 &c3t3, std::vector<C3t3::Edge> &CaracEdge)
{
    Tr &t = c3t3.triangulation();
    int c3t3CornerIndex = 0;
    for (Tr::All_vertices_iterator it = t.all_vertices_begin(); it != t.all_vertices_end(); ++it)
    {
        int nb = 0;
        std::vector<Tr::Cell_handle> cells;
        t.incident_cells(it, std::back_inserter(cells));
        for (unsigned int i = 0; i < cells.size(); i++)
        {
            bool flag = true;
            for (unsigned int j = 0; j < i; j++)
            {
                if ((int)(cells[i]->subdomain_index()) == (int)(cells[j]->subdomain_index()))
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                nb++;
            }
        }

        if (nb == 1)
        {
            c3t3.set_dimension(it, 3);
        }
        if (nb == 2)
        {
            c3t3.set_dimension(it, 2);
        }
        if (nb > 2)
        {
            c3t3.set_dimension(it, 1);
        }
    }
    for (Tr::All_vertices_iterator it = t.all_vertices_begin(); it != t.all_vertices_end(); ++it)
    {
        if (c3t3.in_dimension(it) == 1 || c3t3.in_dimension(it) == 0)
        {
            int nb_edges = 0;
            std::vector<C3t3::Edge> edges;
            t.incident_edges(it, std::back_inserter(edges));
            for (unsigned int i = 0; i < edges.size(); i++)
            {
                if ((c3t3.in_dimension(edges[i].first->vertex(edges[i].second)) == 1 || c3t3.in_dimension(edges[i].first->vertex(edges[i].second)) == 0) && (c3t3.in_dimension(edges[i].first->vertex(edges[i].third)) == 0 || c3t3.in_dimension(edges[i].first->vertex(edges[i].third)) == 1))
                {
                    if (edgeInVector(edges[i], CaracEdge))
                    {
                        nb_edges++;
                    }
                    else
                    {
                        Tr::Cell_circulator c = t.incident_cells(edges[i]);
                        Tr::Cell_circulator done = c;
                        std::vector<int> domains;
                        do
                        {
                            C3t3::Cell_handle cell = c;
                            int n = (int)(cell->subdomain_index());
                            if (std::find(domains.begin(), domains.end(), n) == domains.end())
                            {
                                domains.push_back(n);
                            }
                            c++;
                        } while (c != done);
                        if (domains.size() > 2)
                        {
                            CaracEdge.push_back(edges[i]);
                            c3t3.add_to_complex(edges[i], 1);
                            nb_edges++;
                        }
                    }
                }
            }
            if (nb_edges > 2)
            {
                c3t3.set_dimension(it, 0);
                c3t3.add_to_complex(it, c3t3CornerIndex++);
            }
        }
    }

    std::cout << "carac size of c3t3 : " << CaracEdge.size() << std::endl;
}
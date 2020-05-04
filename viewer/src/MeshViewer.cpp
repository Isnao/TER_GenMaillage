/****************************************************************************

 Copyright (C) 2002-2014 Gilles Debunne. All rights reserved.

 This file is part of the QGLViewer library version 2.7.2.

 http://www.libqglviewer.com - contact@libqglviewer.com

 This file may be used under the terms of the GNU General Public License
 versions 2.0 or 3.0 as published by the Free Software Foundation and
 appearing in the LICENSE file included in the packaging of this file.
 In addition, as a special exception, Gilles Debunne gives you certain
 additional rights, described in the file GPL_EXCEPTION in this package.

 libQGLViewer uses dual licensing. Commercial/proprietary software must
 purchase a libQGLViewer Commercial License.

 This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.

*****************************************************************************/

#include "MeshViewer.h"
#include "QGLViewer/manipulatedFrame.h"
#include <map>
#include <iostream>
#include <cfloat>

// To avoid verbose function and named parameters call
using namespace CGAL::parameters;

// edgeInVector :
bool edgeInVector(C3t3::Edge &edge, std::vector<C3t3::Edge> &tab)
{
    for (unsigned int i = 0; i < tab.size(); i++)
    {
        if ((edge.first->vertex(edge.second) == tab[i].first->vertex(tab[i].second) && edge.first->vertex(edge.third) == tab[i].first->vertex(tab[i].third)) || (edge.first->vertex(edge.second) == tab[i].first->vertex(tab[i].third) && edge.first->vertex(edge.third) == tab[i].first->vertex(tab[i].second)))
            return true;
    }
    return false;
}
// Fin edgeInVector

// c3t3Param :
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
// Fin c3t3Param

// parcoursPoly :
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
// Fin parcoursPoly

using namespace std;
using namespace qglviewer;

void Viewer::glFacet( const Facet & facet ){
    const Point_3 & pa = facet.first->vertex(m_indices[facet.second][0])->point();
    const Point_3 & pb = facet.first->vertex(m_indices[facet.second][1])->point();
    const Point_3 & pc = facet.first->vertex(m_indices[facet.second][2])->point();
    K::Vector_3 pac (pc.x() - pa.x(), pc.y() - pa.y(), pc.z() - pa.z());
    K::Vector_3 pab (pb.x() - pa.x(), pb.y() - pa.y(), pb.z() - pa.z());

    K::Vector_3 n = CGAL::cross_product( pac, pab );
    n = n / CGAL::sqrt(n*n);

    glNormal3d(n.x(),n.y(),n.z());

    glVertex3d(pa.x(),pa.y(),pa.z());
    glVertex3d(pb.x(),pb.y(),pb.z());
    glVertex3d(pc.x(),pc.y(),pc.z());

}

void Viewer::drawBoundaries(){

    glEnable(GL_LIGHTING);
    glBegin(GL_TRIANGLES);

    for (auto it = m_surface_indices.begin(); it != m_surface_indices.end(); ++it){
        Surface_index surface_index = *it;
        QColor color = m_subdomain_colors[it->second];
        glColor4f(color.redF(), color.greenF(), color.blueF(), 1.);

        for (C3t3::Facets_in_complex_iterator fit = m_c3t3.facets_in_complex_begin (surface_index) ; fit != m_c3t3.facets_in_complex_end (surface_index); ++fit ) {

            Facet facet = *fit;

            if( m_c3t3.subdomain_index(facet.first) != it->second )
                facet = m_c3t3.triangulation().mirror_facet(facet);

            glFacet(facet);

        }
    }
    glEnd();
}

void Viewer::drawEdges(){

    glDisable(GL_LIGHTING);
    glLineWidth (2.0f);

    glColor4f( 1.,0.8,0., 1.);

    glBegin(GL_LINES);

    for (C3t3::Edges_in_complex_iterator eit = m_c3t3.edges_in_complex_begin () ; eit != m_c3t3.edges_in_complex_end (); ++eit ) {


        //QColor color;
        //color.setHsvF(0.05 + 0.9*double(m_c3t3.curve_segment_index(*eit))/double(m_nb_curve_segments), 0.6 ,1. );

        //glColor4f(color.redF(), color.greenF(), color.blueF(), 1.);
        Point_3 from = eit->first->vertex( eit->second )->point();
        Point_3 to = eit->first->vertex( eit->third )->point();

        glVertex3f( from.x(), from.y(), from.z() );
        glVertex3f( to.x(), to.y(), to.z() );
    }

    glEnd();

}

void Viewer::drawPolyline(){

    glDisable(GL_LIGHTING);
    glLineWidth (2.0f);

    glColor4f( 0.,0.,0., 0.5);

    glBegin(GL_LINES);

    for (C3t3::Edges_in_complex_iterator eit = m_c3t3.edges_in_complex_begin () ; eit != m_c3t3.edges_in_complex_end (); ++eit ) {

        for (int i = 0; i < (int)polyLines[indexP].size(); i++) {
            if (polyLines[indexP][i] == *eit)
                glColor4f( 1., 0.8, 0., 1.);
            else
                glColor4f( 0.,0.,0., 0.5);
        }

        Point_3 from = eit->first->vertex( eit->second )->point();
        Point_3 to = eit->first->vertex( eit->third )->point();

        glVertex3f( from.x(), from.y(), from.z() );
        glVertex3f( to.x(), to.y(), to.z() );
    }

    glEnd();

}

void Viewer::drawVertices(){

    glDisable(GL_LIGHTING);

    glPointSize( 5.0f);

    glColor4f( 1.,0.8,0., 1.);

    glBegin(GL_POINTS);

    for( Tr::Finite_vertices_iterator vit = m_c3t3.triangulation().finite_vertices_begin(); vit != m_c3t3.triangulation().finite_vertices_end() ; ++vit  ){
        if(m_c3t3.in_dimension(vit) < 3){
            glColor4f( 0.f,0.f,1.f, 1.);


            if(m_c3t3.in_dimension(vit) == 0){
                glColor4f( 1.f,1.f,0.f, 1.);

            } else if(m_c3t3.in_dimension(vit) == 1){
                glColor4f( 1.f,0.f,0.f, 1.);

            } else if ( m_c3t3.in_dimension(vit) == 2 ) {
                glColor4f( 0.f,1.f,0.f, 1.);
            }

            Point_3 position = vit->point();
            glVertex3f( position.x(), position.y(), position.z() );
        }

    }
    glEnd();
}

// Draws a spiral
void Viewer::draw() {

    if (V)
        drawVertices();
    if (E)
        drawEdges();
    if (F)
        drawBoundaries();
    if (P)
        drawPolyline();

    /*glPushMatrix();
    glMultMatrixd(manipulatedFrame()->matrix());
    // Since the Clipping Plane equation is multiplied by the current modelView,
    // we can define a constant equation (plane normal along Z and passing by the
    // origin) since we are here in the manipulatedFrame coordinates system (we
    // glMultMatrixd() with the manipulatedFrame matrix()).
    static const GLdouble equation[] = {m_center[0], m_center[1], m_center[2], 0.0};
    glClipPlane(GL_CLIP_PLANE0, equation);

    // Draw a plane representation: Its normal...
    glColor3f(0.8f, 0.8f, 0.8f);
    drawArrow(0.4f, 0.015f);
    // ...and a quad (with a slightly shifted z so that it is not clipped).
    glBegin(GL_QUADS);
    glVertex3f(-1.0, -1.0, 0.001f);
    glVertex3f(-1.0, 1.0, 0.001f);
    glVertex3f(1.0, 1.0, 0.001f);
    glVertex3f(1.0, -1.0, 0.001f);
    glEnd();
    glPopMatrix();*/
}

void Viewer::init() {

    E = false;
    V = false;
    F = true;
    P = false;
    indexP = 0;

    m_indices[0][0] = 3; m_indices[0][2] = 1; m_indices[0][1] = 2;
    m_indices[1][0] = 3; m_indices[1][2] = 2; m_indices[1][1] = 0;
    m_indices[2][0] = 3; m_indices[2][2] = 0; m_indices[2][1] = 1;
    m_indices[3][0] = 2; m_indices[3][2] = 1; m_indices[3][1] = 0;

    // Restore previous viewer state.
    restoreStateFromFile();

    // Opens help window
    //help();

    // The ManipulatedFrame will be used to position the clipping plane
    setManipulatedFrame(new ManipulatedFrame());

    this->openMesh("data/out.mesh");


    for (C3t3::Cells_in_complex_iterator cit = m_c3t3.cells_in_complex_begin () ; cit != m_c3t3.cells_in_complex_end (); ++cit ) {

        m_subdomain_indices.insert(m_c3t3.subdomain_index(cit));

    }

    for (C3t3::Facets_in_complex_iterator fit = m_c3t3.facets_in_complex_begin () ; fit != m_c3t3.facets_in_complex_end (); ++fit ) {

        m_surface_indices.insert(m_c3t3.surface_index(*fit));

    }

    int nb = 0;
    for (auto it = m_subdomain_indices.begin(); it != m_subdomain_indices.end(); ++it){
        QColor color;
        color.setHsvF(0.05 + 0.9*double(nb++)/double(m_subdomain_indices.size()), 0.6 ,1. );
        m_subdomain_colors[*it] = color;
        std::cout << *it<< std::endl;
    }


    CGAL::Bbox_3 bbox = m_c3t3.bbox();

    m_center = qglviewer::Vec ((bbox.xmax() - bbox.xmin())/2., (bbox.ymax() - bbox.ymin())/2., (bbox.zmax() - bbox.zmin())/2.);
    camera()->setSceneCenter(qglviewer::Vec((bbox.xmax() - bbox.xmin())/2., (bbox.ymax() - bbox.ymin())/2., (bbox.zmax() - bbox.zmin())/2.));
    camera()->setSceneRadius(std::max(std::max(bbox.xmax() - bbox.xmin(), bbox.ymax() - bbox.ymin()), bbox.zmax() - bbox.zmin())*2.);

    camera()->showEntireScene();
    // Enable plane clipping
    //glEnable(GL_CLIP_PLANE0);
}


void Viewer::openMesh(const QString &filename){

    std::ifstream c3t3_load(filename.toStdString());
    c3t3_load >> m_c3t3;

    // remplissage des dimensions c3t3 + remplissages des egdes caracteristiques
      std::vector<C3t3::Edge> CaracEdge;
      c3t3Param(m_c3t3,CaracEdge);

      //////////////////////////////////////////////////////////////////////////////////////////////////////
      ///////////////////////////////////////////////////////////////////////////////////////////////////
      ////////////////////////////////////////////////////////////////////////////////////////////////////

      std::cout << std::endl;

      //test comparaisons
      typedef CGAL::Mesh_complex_3_in_triangulation_3<Tr>::Vertices_in_complex_iterator Complex_Vertex_Iterator;

      // vertex ***************************

      std::cout << "C3T3 Number of cells : " << m_c3t3.number_of_cells() << std::endl;
      int i = 0;
      std::map<C3t3::Vertex_handle, int> V;
      for (Complex_Vertex_Iterator it = m_c3t3.vertices_in_complex_begin(); it != m_c3t3.vertices_in_complex_end(); ++it)
      {
        if (m_c3t3.in_dimension(it) == 0)
        {
          V[it] = i;
          //std::cout << "Vertex #" << i << " : " << it->point() << " Dimension : " << c3t3.in_dimension(it) << std::endl;
        }
        i++;
      }
      std::cout << "Taille V : " << V.size() << " (nombre de vertex de dimension 0 dans c3t3)" << std::endl;

      ///////////////////////////////////////////////
      // edges ****************************************

      i = 0;
      std::map<C3t3::Edge, int> V_e;
      for (C3t3::Edges_in_complex_iterator it = m_c3t3.edges_in_complex_begin(); it != m_c3t3.edges_in_complex_end(); ++it)
      {
        // add the current Point_3 to the map with its current index
        C3t3::Edge edge = *it;
        V_e[edge] = i;
        ++i;
      }
      std::cout << "Taille V_e : " << V_e.size() << "(nombre d'edge caractéristiques dans c3t3)" << std::endl;

      //////////////////////////////////////////////////////////////////////////////////////
      ////////////////////////////////////////////////////////////////////////////////////

      //polylignes

        //c3t3
        int curveNum_c3t3=1;
      std::vector<bool> used;
      for (unsigned int i = 0; i < CaracEdge.size(); i++){
        used.push_back(false);
      }

      for (unsigned int i = 0; i < CaracEdge.size(); i++){
        if(used[i]==false){
          std::vector<C3t3::Edge> tempPolyLine;
          parcoursPoly(tempPolyLine, used, CaracEdge, i, m_c3t3,curveNum_c3t3);
          polyLines.push_back(tempPolyLine);
          curveNum_c3t3++;
       }
      }

}


QString Viewer::helpString() const {
    QString text("<h2>C l i p p i n g P l a n e</h2>");
    text += "The standard OpenGL <i>GL_CLIP_PLANE</i> feature is used to add an "
            "additionnal clipping ";
    text += "plane in the scene, which position and orientation are set by a "
            "<b>ManipulatedFrame</b>.<br><br>";
    text += "Hold the <b>Control</b> key pressed down while using the mouse to "
            "modify the plane orientation (left button) ";
    text += "and position (right button) and to interactively see the clipped "
            "result.<br><br>";
    text += "Since the plane equation is defined with respect to the current "
            "modelView matrix, a constant equation (normal";
    text += "along the Z axis) can be used since we transformed the coordinates "
            "system using the <b>matrix()</b> method.";

    return text;
}

void Viewer::onlyEdges() {
    E = true;
    F = false;
    V = false;
    std::cerr << "onlyEdges()" << std::endl;
    update();
}

void Viewer::onlyVertices() {
    V = true;
    F = false;
    E = false;
    std::cerr << "onlyVertices()" << std::endl;
    update();
}

void Viewer::onlyFaces() {
    F = true;
    V = false;
    E = false;
std::cerr << "onlyFaces()" << std::endl;
    update();
}

void Viewer::activePolyline(bool a, int i) {
    P = a;
    indexP = i;
    if (P) {
        F = false;
        V = false;
        E = false;
    } else {
        F = false;
        V = false;
        E = true;
    }
    std::cerr << "activePolyline(bool)" << std::endl;
    update();
}

void Viewer::updateIndexPoly(int i) {
    indexP = i;
    if (P)
        update();
}

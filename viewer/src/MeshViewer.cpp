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

void Viewer::drawSD(){

    glEnable(GL_LIGHTING);
    glBegin(GL_TRIANGLES);

    /*for (auto it = m_surface_indices.begin(); it != m_surface_indices.end(); ++it){
        Surface_index surface_index = *it;
        QColor color = m_subdomain_colors[it->second];
        glColor4f(color.redF(), color.greenF(), color.blueF(), 1.);*/
    QColor color = m_subdomain_colors[indexSD];
    glColor4f(color.redF(), color.greenF(), color.blueF(), 1.);
        for (C3t3::Facets_in_complex_iterator fit = m_c3t3.facets_in_complex_begin() ; fit != m_c3t3.facets_in_complex_end (); ++fit ) {

            Facet facet = *fit;
            int k = m_c3t3.subdomain_index(facet.first);
            if (k == indexSD or m_c3t3.subdomain_index(m_c3t3.triangulation().mirror_facet(facet).first) == indexSD) {
                if(k  == 0 )
                    facet = m_c3t3.triangulation().mirror_facet(facet);

                glFacet(facet);
            }

        }
    //}
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
            if (polyLines[indexP][i] == *eit) {
                glColor4f( 1., 0.8, 0., 1.);
                break;
            }
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
    if (SD)
        drawSD();

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
    SD = false;
    indexP = 0;
    indexSP = 0;
    indexSD = 0;

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

    m_center = 0;

    camera()->showEntireScene();
    // Enable plane clipping
    //glEnable(GL_CLIP_PLANE0);
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

void Viewer::activePolyline(bool a, int i, int j) {
    P = a;
    indexP = i;
    indexSP = j;
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

void Viewer::updateIndexPoly(int i, int j) {
    indexP = i;
    indexSP = j;
    if (P)
        update();
}

void Viewer::updateC3t3(C3t3 c, std::vector<std::vector<C3t3::Edge>> p, std::set<Subdomain_index> sdi, std::set<Surface_index> sfi, std::map<Subdomain_index, QColor> sdc) {
    m_c3t3 = c;
    polyLines = p;
    m_subdomain_indices = sdi;
    m_surface_indices = sfi;
    m_subdomain_colors = sdc;
    CGAL::Bbox_3 bbox = m_c3t3.bbox();

    m_center = qglviewer::Vec ((bbox.xmax() - bbox.xmin())/2., (bbox.ymax() - bbox.ymin())/2., (bbox.zmax() - bbox.zmin())/2.);
    camera()->setSceneCenter(qglviewer::Vec((bbox.xmax() - bbox.xmin())/2., (bbox.ymax() - bbox.ymin())/2., (bbox.zmax() - bbox.zmin())/2.));
    camera()->setSceneRadius(std::max(std::max(bbox.xmax() - bbox.xmin(), bbox.ymax() - bbox.ymin()), bbox.zmax() - bbox.zmin())*2.);

    update();

}

int Viewer::selectSubdomain(int i) {

    indexSD = i;
    update();
    return m_subdomain_indices.size();

}

void Viewer::activeSubdomain(bool a, int i) {

    SD = a;
    indexSD = i;
    if (SD) {
        V = false;
        E = false;
        F = false;
        P = false;
    } else {
        V = false;
        E = false;
        P = false;
        F = true;
    }
    std::cerr << "activeSubdomain(bool)" << std::endl;
    update();
}

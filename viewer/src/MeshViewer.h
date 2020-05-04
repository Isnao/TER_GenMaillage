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

#include "cgal_headers.h"
#include <QGLViewer/qglviewer.h>
#include <QString>
#include <set>
#include <map>
#include <QColor>

class Viewer : public QGLViewer {
protected:
    virtual void draw();
    virtual void init();
    virtual QString helpString() const;

    void openMesh(const QString &filename);

    void glFacet( const Facet & facet );

    void drawBoundaries();
    void drawVertices();
    void drawEdges();
    void drawPolyline();

    C3t3 m_c3t3;

    int m_indices[4][3];

    std::set<Subdomain_index> m_subdomain_indices;
    std::set<Surface_index> m_surface_indices;
    int m_nb_curve_segments;

    std::map<Subdomain_index, QColor> m_subdomain_colors;

    qglviewer::Vec m_center;

    bool E, V, F, P;
    std::vector<std::vector<C3t3::Edge>> polyLines;
    int indexP;

public slots:
    void onlyEdges();
    void onlyVertices();
    void onlyFaces();
    void activePolyline(bool a, int i);
    void updateIndexPoly(int i);
};

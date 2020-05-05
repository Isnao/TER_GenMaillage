#ifndef DISPLAYDOCKWIDGET_H
#define DISPLAYDOCKWIDGET_H

#include "MeshViewer.h"
#include <QDockWidget>
#include <QSlider>
#include <QCheckBox>
#include <QPushButton>
#include <QSpinBox>

class DisplayDockWidget : public QDockWidget
{
       Q_OBJECT
public:
    DisplayDockWidget(Viewer * viewer, QWidget * parent );
    Viewer * m_viewer;

    QPushButton *Edges;
    QPushButton *Faces;
    QPushButton *Vertices;
    QSpinBox *Curves;
    QCheckBox *CurvesActive;
    QSpinBox *EdgesPolyligne;
    bool isCurveActive = false;
    QPushButton *addMaillage;
    QSpinBox *maillageNumber;
    QCheckBox *activeSubdomain;
    QSpinBox *subdomain;
};

#endif // DISPLAYDOCKWIDGET_H

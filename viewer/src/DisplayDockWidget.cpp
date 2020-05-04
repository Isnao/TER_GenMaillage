#include "DisplayDockWidget.h"
#include <QVBoxLayout>
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>

#define SLIDER_XMAX 100
#define SLIDER_YMAX 100
#define SLIDER_ZMAX 100

DisplayDockWidget::DisplayDockWidget(Viewer * viewer, QWidget * parent ):QDockWidget(parent)
{

    m_viewer = viewer;

    QWidget * contents = new QWidget();

    QVBoxLayout * contentLayout = new QVBoxLayout(contents);

    QGroupBox * groupBox2 = new QGroupBox("View",parent);
    groupBox2->setMaximumSize(QSize(8388607, 200));
    contentLayout->addWidget ( groupBox2) ;

    QGridLayout * viewGridLayout = new QGridLayout(groupBox2);
    QPushButton * Edges = new QPushButton("Only Edges", groupBox2);
    viewGridLayout->addWidget(Edges, 0, 0, 1, 1);
    QPushButton * Faces = new QPushButton("Only Faces", groupBox2);
    viewGridLayout->addWidget(Faces, 1, 0, 1, 1);
    QPushButton * Vertices = new QPushButton("Only Vertices", groupBox2);
    viewGridLayout->addWidget(Vertices, 2, 0, 1, 1);

    QSpinBox * Curves = new QSpinBox( groupBox2);
    viewGridLayout->addWidget(Curves, 3, 0, 1, 1);

    QCheckBox * CurvesActive = new QCheckBox("Only Polyline ?", groupBox2);
    viewGridLayout->addWidget(CurvesActive, 3, 1, 1, 1);
    EdgesPolyligne = new QSpinBox( groupBox2);
    viewGridLayout->addWidget(EdgesPolyligne, 4, 0, 1, 1);

    connect(CurvesActive, &QCheckBox::clicked, viewer, [=](bool b) { viewer->activePolyline(b,Curves->value());});
    connect(Curves, QOverload<int>::of(&QSpinBox::valueChanged), viewer, [=](int i) { viewer->updateIndexPoly(i);});
    connect(Edges, &QPushButton::clicked, viewer, [=]() { viewer->onlyEdges();});
    connect(Faces, &QPushButton::clicked, viewer, [=]() { viewer->onlyFaces();});
    connect(Vertices, &QPushButton::clicked, viewer, [=]() { viewer->onlyVertices();});
    this->setWidget(contents);
}

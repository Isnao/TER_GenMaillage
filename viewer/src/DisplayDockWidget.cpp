#include "DisplayDockWidget.h"
#include <QVBoxLayout>
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QFileDialog>

#define SLIDER_XMAX 100
#define SLIDER_YMAX 100
#define SLIDER_ZMAX 100

DisplayDockWidget::DisplayDockWidget(Viewer * viewer, QWidget * parent ):QDockWidget(parent)
{

    m_viewer = viewer;

    QWidget * contents = new QWidget();

    QVBoxLayout * contentLayout = new QVBoxLayout(contents);

    QLabel * l = new QLabel(parent);
    l->setText("C3t3 numéro :");
    contentLayout->addWidget(l, 0, 0);
    maillageNumber = new QSpinBox(parent);
    maillageNumber->setRange(0,0);
    contentLayout->addWidget(maillageNumber, 1,0);

    QGroupBox * groupBox2 = new QGroupBox("View",parent);
    groupBox2->setMaximumSize(QSize(8388607, 200));
    contentLayout->addWidget ( groupBox2, 3, 0) ;
    addMaillage = new QPushButton("ADD NEW C3T3", parent);
    contentLayout->addWidget(addMaillage);

    QGridLayout * viewGridLayout = new QGridLayout(groupBox2);
    QPushButton * Edges = new QPushButton("Only Edges", groupBox2);
    viewGridLayout->addWidget(Edges, 0, 0, 1, 2);
    QPushButton * Faces = new QPushButton("Only Faces", groupBox2);
    viewGridLayout->addWidget(Faces, 1, 0, 1, 2);
    QPushButton * Vertices = new QPushButton("Only Vertices", groupBox2);
    viewGridLayout->addWidget(Vertices, 2, 0, 1, 2);

    QCheckBox * CurvesActive = new QCheckBox("Only Polyline ?", groupBox2);
    viewGridLayout->addWidget(CurvesActive, 3, 0, 1, 2);
    QLabel * l1 = new QLabel(groupBox2);
    l1->setText("N° Curve(poly) :");
    viewGridLayout->addWidget(l1, 4, 0, 1, 1);
    QSpinBox * Curves = new QSpinBox( groupBox2);
    viewGridLayout->addWidget(Curves, 4, 1, 1, 1);

    QLabel * l2 = new QLabel(groupBox2);
    l2->setText("N° Edge(poly) :");
    viewGridLayout->addWidget(l2, 5, 0, 1, 1);
    EdgesPolyligne = new QSpinBox( groupBox2);
    viewGridLayout->addWidget(EdgesPolyligne, 5, 1, 1, 1);

    QCheckBox * activeSubdomain = new QCheckBox("Only one Subdomain ?", groupBox2);
    viewGridLayout->addWidget(activeSubdomain, 6, 0, 1, 2);

    QLabel * l3 = new QLabel(groupBox2);
    l3->setText("N° SubDomain :");
    viewGridLayout->addWidget(l3, 7, 0, 1, 1);
    subdomain = new QSpinBox( groupBox2);
    subdomain->setRange(0, 2);
    viewGridLayout->addWidget(subdomain, 7, 1, 1, 1);

    connect(maillageNumber, QOverload<int>::of(&QSpinBox::valueChanged), viewer, [=](int i) {
        viewer->updateC3t3(i);
        maillageNumber->setRange(0,viewer->getMaxC3t3());
    });
    connect(addMaillage, &QPushButton::clicked, this, [=]() {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("C3t3 Files (*.mesh)"));
        viewer->openMesh(fileName);
        maillageNumber->setRange(0,viewer->getMaxC3t3());
    });

    connect(CurvesActive, &QCheckBox::clicked, viewer, [=](bool b) { viewer->activePolyline(b,Curves->value(),EdgesPolyligne->value());});
    connect(Curves, QOverload<int>::of(&QSpinBox::valueChanged), viewer, [=](int i) { viewer->updateIndexPoly(i, EdgesPolyligne->value());});
    connect(EdgesPolyligne, QOverload<int>::of(&QSpinBox::valueChanged), viewer, [=](int i) { viewer->updateIndexPoly(Curves->value(),i);});
    connect(Edges, &QPushButton::clicked, viewer, [=]() { viewer->onlyEdges();});
    connect(Faces, &QPushButton::clicked, viewer, [=]() { viewer->onlyFaces();});
    connect(Vertices, &QPushButton::clicked, viewer, [=]() { viewer->onlyVertices();});

    connect(activeSubdomain, &QCheckBox::clicked, viewer, [=](bool b) { viewer->activeSubdomain(b, subdomain->value());});
    connect(subdomain, QOverload<int>::of(&QSpinBox::valueChanged), viewer, [=](int i) { subdomain->setRange(0,viewer->selectSubdomain(i)); });

    this->setWidget(contents);
}

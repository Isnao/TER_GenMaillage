#include "DisplayDockWidget.h"
#include <QVBoxLayout>
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QFileDialog>
#include <algorithm>

using namespace CGAL::parameters;

// edgeInVector :
bool edgeInVector1(C3t3::Edge &edge, std::vector<C3t3::Edge> &tab)
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
void c3t3Param1(C3t3 &c3t3, std::vector<C3t3::Edge> &CaracEdge)
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
                    if (edgeInVector1(edges[i], CaracEdge))
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
void parcoursPoly1(std::vector< C3t3::Edge >& polyLine, std::vector<bool>& used, std::vector< C3t3::Edge >& V, int lineNum, C3t3& c3t3, int curveNum) {
    used[lineNum] = true;
    polyLine.push_back(V[lineNum]);
    c3t3.remove_from_complex(V[lineNum]);
    c3t3.add_to_complex(V[lineNum], curveNum);
    for (unsigned int i = 0; i < V.size(); i++) {
        if (used[i] == false) {
            if (c3t3.in_dimension(V[lineNum].first->vertex(V[lineNum].second)) == 1) {
                if ((V[i].first->vertex(V[i].second)) == V[lineNum].first->vertex(V[lineNum].second) || (V[i].first->vertex(V[i].third)) == V[lineNum].first->vertex(V[lineNum].second)) {
                    parcoursPoly1(polyLine, used, V, i, c3t3, curveNum);
                }
            }
            if (c3t3.in_dimension(V[lineNum].first->vertex(V[lineNum].third)) == 1) {
                if ((V[i].first->vertex(V[i].second)) == V[lineNum].first->vertex(V[lineNum].third) || (V[i].first->vertex(V[i].third)) == V[lineNum].first->vertex(V[lineNum].third)) {
                    parcoursPoly1(polyLine, used, V, i, c3t3, curveNum);
                }
            }
        }
    }
}
// Fin parcoursPoly


DisplayDockWidget::DisplayDockWidget(Viewer * viewer1, Viewer * viewer2, QWidget * parent ):QDockWidget(parent)
{

    m_viewer1 = viewer1;
    m_viewer2 = viewer2;

    QWidget * contents = new QWidget();

    QVBoxLayout * contentLayout = new QVBoxLayout(contents);

    QGroupBox * groupBox = new QGroupBox(parent);
    groupBox->setMaximumSize(QSize(8388607, 100));
    contentLayout->addWidget(groupBox);
    QGridLayout * test = new QGridLayout(groupBox);

    QLabel * l = new QLabel(groupBox);
    l->setText("C3t3 numéro VD :");
    test->addWidget(l, 0, 0, 1, 1);
    maillageNumber1 = new QSpinBox(groupBox);
    maillageNumber1->setRange(0,0);
    test->addWidget(maillageNumber1, 0, 1, 1, 1);
    QLabel * lb = new QLabel(groupBox);
    lb->setText("C3t3 numéro VG :");
    test->addWidget(lb, 1, 0, 1, 1);
    maillageNumber2 = new QSpinBox(groupBox);
    maillageNumber2->setRange(0,0);
    test->addWidget(maillageNumber2, 1, 1, 1, 1);

    QGroupBox * groupBox2 = new QGroupBox("View",parent);
    groupBox2->setMaximumSize(QSize(8388607, 200));
    contentLayout->addWidget ( groupBox2) ;
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

    connect(maillageNumber1, QOverload<int>::of(&QSpinBox::valueChanged), m_viewer1, [=](int i) {
        updateMaillage(i,m_viewer1);
    });
    connect(maillageNumber2, QOverload<int>::of(&QSpinBox::valueChanged), m_viewer2, [=](int i) {
        updateMaillage(i,m_viewer2);
    });
    connect(addMaillage, &QPushButton::clicked, this, [=]() {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("C3t3 Files (*.mesh)"));
        openMesh(fileName);
        maillageNumber1->setRange(0,c3t3_list.size()-1);
        maillageNumber2->setRange(0,c3t3_list.size()-1);
    });

    connect(CurvesActive, &QCheckBox::clicked, this, [=](bool b) {
        m_viewer1->activePolyline(b,Curves->value(),EdgesPolyligne->value());
        m_viewer2->activePolyline(b,Curves->value(),EdgesPolyligne->value());
    });
    connect(Curves, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int i) {
        m_viewer1->updateIndexPoly(i, EdgesPolyligne->value());
        m_viewer2->updateIndexPoly(i, EdgesPolyligne->value());
    });
    connect(EdgesPolyligne, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int i) {
        m_viewer1->updateIndexPoly(Curves->value(),i);
        m_viewer2->updateIndexPoly(Curves->value(),i);
    });
    connect(Edges, &QPushButton::clicked, this, [=]() {
        m_viewer1->onlyEdges();
        m_viewer2->onlyEdges();
    });
    connect(Faces, &QPushButton::clicked, this, [=]() {
        m_viewer1->onlyFaces();
        m_viewer2->onlyFaces();
    });
    connect(Vertices, &QPushButton::clicked, this, [=]() {
        m_viewer1->onlyVertices();
        m_viewer2->onlyVertices();
    });

    connect(activeSubdomain, &QCheckBox::clicked, this, [=](bool b) {
        m_viewer1->activeSubdomain(b, subdomain->value());
        m_viewer2->activeSubdomain(b, subdomain->value());
    });
    connect(subdomain, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int i) {
        subdomain->setRange(0,std::max(m_viewer1->selectSubdomain(i),m_viewer2->selectSubdomain(i)));
    });

    this->openMesh("data/out.mesh");

    this->setWidget(contents);
}

void DisplayDockWidget::openMesh(const QString &filename){

    std::ifstream c3t3_load(filename.toStdString());
    C3t3 t;
    c3t3_load >> t;

    // remplissage des dimensions c3t3 + remplissages des egdes caracteristiques
      std::vector<C3t3::Edge> CaracEdge;
      c3t3Param1(t,CaracEdge);

      //////////////////////////////////////////////////////////////////////////////////////////////////////
      ///////////////////////////////////////////////////////////////////////////////////////////////////
      ////////////////////////////////////////////////////////////////////////////////////////////////////

      std::cout << std::endl;

      //test comparaisons
      typedef CGAL::Mesh_complex_3_in_triangulation_3<Tr>::Vertices_in_complex_iterator Complex_Vertex_Iterator;

      // vertex ***************************

      std::cout << "C3T3 Number of cells : " << t.number_of_cells() << std::endl;
      int i = 0;
      std::map<C3t3::Vertex_handle, int> V;
      for (Complex_Vertex_Iterator it = t.vertices_in_complex_begin(); it != t.vertices_in_complex_end(); ++it)
      {
        if (t.in_dimension(it) == 0)
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
      for (C3t3::Edges_in_complex_iterator it = t.edges_in_complex_begin(); it != t.edges_in_complex_end(); ++it)
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

      std::cerr << "deb poly" << std::endl;
        //c3t3
        int curveNum_c3t3=1;
      std::vector<bool> used;
      for (unsigned int i = 0; i < CaracEdge.size(); i++){
        used.push_back(false);
      }

      std::vector<std::vector<C3t3::Edge>> p;

      for (unsigned int i = 0; i < CaracEdge.size(); i++){
        if(used[i]==false){
          std::vector<C3t3::Edge> tempPolyLine;
          parcoursPoly1(tempPolyLine, used, CaracEdge, i, t,curveNum_c3t3);
          p.push_back(tempPolyLine);
          curveNum_c3t3++;
       }
      }
      std::cerr << "fin poly" << std::endl;

      std::set<Subdomain_index> sdi;
      std::set<Surface_index> sfi;
      std::map<Subdomain_index, QColor> sdc;

      for (C3t3::Cells_in_complex_iterator cit = t.cells_in_complex_begin () ; cit != t.cells_in_complex_end (); ++cit ) {

          sdi.insert(t.subdomain_index(cit));

      }

      for (C3t3::Facets_in_complex_iterator fit = t.facets_in_complex_begin () ; fit != t.facets_in_complex_end (); ++fit ) {

          sfi.insert(t.surface_index(*fit));

      }

      int nb = 0;
      for (auto it = sdi.begin(); it != sdi.end(); ++it){
          QColor color;
          color.setHsvF(0.05 + 0.9*double(nb++)/double(sdi.size()), 0.6 ,1. );
          sdc[*it] = color;
          std::cout << *it<< std::endl;
      }

      c3t3_list.push_back(t);
      polyLines_list.push_back(p);
      subdomain_indices_list.push_back(sdi);
      surface_indices_list.push_back(sfi);
      subdomain_colors_list.push_back(sdc);
//      getGroupPolyline(t,t.triangulation(),p,groupPolyLines);

}

void DisplayDockWidget::updateMaillage(int i, Viewer * v) {

    if (i < (int)c3t3_list.size()) {
        v->updateC3t3(c3t3_list.at(i), polyLines_list.at(i), subdomain_indices_list.at(i), surface_indices_list.at(i), subdomain_colors_list.at(i));
    } else
        std::cerr << "Error : not in range" << std::endl;

}

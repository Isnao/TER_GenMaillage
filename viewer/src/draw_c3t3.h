// Redéfinition de draw_triangulation_3.h
// Utilisation sur un C3T3
//
// Author(s)     : Thibaut Boudier

#ifndef CGAL_DRAW_C3T3_H
#define CGAL_DRAW_C3T3_H

#include <CGAL/license/Mesh_3.h>
#include <CGAL/Qt/Basic_viewer_qt.h>

#ifdef CGAL_USE_BASIC_VIEWER

#include <CGAL/Triangulation_3.h>
#include <CGAL/Mesh_complex_3_in_triangulation_3.h>
#include <CGAL/Random.h>

namespace CGAL
{
  
// Default color functor; user can change it to have its own face color
struct DefaultColorFunctorC3T3
{
  template<typename C3T3>
  static CGAL::Color run(const C3T3&,
                         const typename C3T3::Facets_in_complex_iterator* fh)
  {
    if (fh==nullptr) // use to get the mono color
      return CGAL::Color(100, 125, 200); // R G B between 0-255

    /*CGAL::Random random((unsigned int)((std::size_t)(&*((*fh)->first))+
									   (std::size_t)((*fh)->second)));
    return get_random_color(random);*/
	int R = ((*fh)->first->subdomain_index() * 50) % 255;
	int V = ((*fh)->first->subdomain_index() * 75) % 255;
	int B = ((*fh)->first->subdomain_index() * 10) % 255;
	return CGAL::Color(R,V,B);
  }
};

// Viewer class for C3T3 
template<class C3T3, class ColorFunctor>
class SimpleC3T3ViewerQt : public Basic_viewer_qt
{
  typedef Basic_viewer_qt                     Base;
  typedef typename C3T3::Vertex_handle	Vertex_handle;
  typedef typename C3T3::Edges_in_complex_iterator  Edge_handle;
  typedef typename C3T3::Facets_in_complex_iterator Facet_handle;
  typedef typename C3T3::Cell_handle          		Cell_handle;
 
public:
  /// Construct the viewer.
  /// @param at3 the t3 to view
  /// @param title the title of the window
  /// @param anofaces if true, do not draw faces (faces are not computed; this can be
  ///        usefull for very big object where this time could be long)
  SimpleC3T3ViewerQt(QWidget* parent,
                               const C3T3& at3,
                               const char* title="Basic C3T3 Viewer",
                               bool anofaces=false,
							   bool onlyedges=false,
							   int maxdim=3,
                               const ColorFunctor& fcolor=ColorFunctor()) :
    // First draw: vertices; edges, faces; multi-color; no inverse normal
    Base(parent, title, true, true, true, false, false), 
    c3t3(at3),
    m_nofaces(anofaces),
	m_onlyedges(onlyedges),
	m_maxdim(maxdim),
    m_fcolor(fcolor)
  {
	if (m_onlyedges) {
		m_nofaces = true;
	}
    compute_elements();
  }

protected:
  void compute_face(Facet_handle fh)
  {
    CGAL::Color c=m_fcolor.run(c3t3, &fh);
    face_begin(c);

    add_point_in_face(fh->first->vertex((fh->second+1)%4)->point());
    add_point_in_face(fh->first->vertex((fh->second+2)%4)->point());
    add_point_in_face(fh->first->vertex((fh->second+3)%4)->point());
    
    face_end();
  }

  void compute_edge(Edge_handle eh)
  {
    add_segment(eh->first->vertex(eh->second)->point(),
                eh->first->vertex(eh->third)->point(),
				CGAL::Color(0,0,0));
  }

  void compute_vertex(Vertex_handle vh)
  { if (vh->in_dimension() == 0) add_point(vh->point(), CGAL::Color(0,0,0));
	if (vh->in_dimension() == 1) add_point(vh->point(), CGAL::Color(255,0,0));
	if (vh->in_dimension() == 2) add_point(vh->point(), CGAL::Color(0,255,0));
	if (vh->in_dimension() == 3) add_point(vh->point(), CGAL::Color(0,0,255));}

  void compute_elements()
  {
    clear();


    for (Facet_handle it=c3t3.facets_in_complex_begin();
         it!=c3t3.facets_in_complex_end(); ++it)
    { 
	    if (!m_nofaces)
			compute_face(it); 
		compute_vertex(it->first->vertex(0));		//Utile pour afficher les edges, à retirer une fois les edges in complex rempli
		compute_vertex(it->first->vertex(1));
		compute_vertex(it->first->vertex(2));
		compute_vertex(it->first->vertex(3));
	}   
	  
    for (Edge_handle it=c3t3.edges_in_complex_begin();
         it!=c3t3.edges_in_complex_end(); ++it)
    { if (m_onlyedges) {
		if ((c3t3.in_dimension(it->first->vertex(it->second)) <= m_maxdim) &&
			(c3t3.in_dimension(it->first->vertex(it->third)) <= m_maxdim))
			compute_edge(it);
	} else compute_edge(it);}
	
    /*for (Vertex_handle it=c3t3.vertices_in_complex_begin();		//Cette zone sera utile une fois les edges in complex rempli
         it!=c3t3.vertices_in_complex_end(); ++it)
    { if (it->in_dimension() <= m_maxdim)
		compute_vertex(it); 
	}*/
  }

  virtual void keyPressEvent(QKeyEvent *e)
  {
    // Test key pressed:
    //    const ::Qt::KeyboardModifiers modifiers = e->modifiers();
    //    if ((e->key()==Qt::Key_PageUp) && (modifiers==Qt::NoButton)) { ... }
    
    // Call: * compute_elements() if the model changed, followed by
    //       * redraw() if some viewing parameters changed that implies some
    //                  modifications of the buffers
    //                  (eg. type of normal, color/mono)
    //       * update() just to update the drawing

    // Call the base method to process others/classicals key
    Base::keyPressEvent(e);
  }

protected:
  const C3T3& c3t3;
  bool m_nofaces;
  bool m_onlyedges;
  int m_maxdim;
  const ColorFunctor& m_fcolor;
};

// Specialization of draw function.
#define CGAL_C3T3_TYPE CGAL::Mesh_complex_3_in_triangulation_3<Tr, CornerIndex, CurveIndex>

template<class Tr, class CornerIndex, class CurveIndex>
void draw(const CGAL_C3T3_TYPE& at3,
          const char* title="C3T3 Basic Viewer",
          bool nofill=false,
		  bool onlyedges=false,
		  int maxdim=3)
{
#if defined(CGAL_TEST_SUITE)
  bool cgal_test_suite=true;
#else
  bool cgal_test_suite=qEnvironmentVariableIsSet("CGAL_TEST_SUITE");
#endif
  
  if (!cgal_test_suite)
  {
    int argc=1;
    const char* argv[2]={"c3t3_viewer","\0"};
    QApplication app(argc,const_cast<char**>(argv));
    DefaultColorFunctorC3T3 fcolor;
    SimpleC3T3ViewerQt<CGAL_C3T3_TYPE, DefaultColorFunctorC3T3>
      mainwindow(app.activeWindow(), at3, title, nofill, onlyedges, maxdim, fcolor);
    mainwindow.show();
    app.exec();
  }
}

#undef CGAL_C3T3_TYPE

} // End namespace CGAL

#endif // CGAL_USE_BASIC_VIEWER

#endif // CGAL_DRAW_C3T3_H

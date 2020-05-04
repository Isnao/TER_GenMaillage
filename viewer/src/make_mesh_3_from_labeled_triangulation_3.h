#ifndef MAKE_MESH_3_FROM_LABELED_TRIANGULATION_3_H
#define MAKE_MESH_3_FROM_LABELED_TRIANGULATION_3_H
//
//******************************************************************************
// File Description : make_mesh_3_from_labeled_triangulation_3 function definition.
//******************************************************************************

#include <CGAL/Triangulation_incremental_builder_3.h>
#include <fstream>      // std::ifstream

namespace CGAL {


    // Manual redirections
    // boost::parameter can't handle make_mesh_3_from_labeled_triangulation_3 return_type alone...
    template <typename C3T3>
            C3T3 make_mesh_3_from_labeled_triangulation_3(const char* file)
    {
        C3T3 c3t3;
        make_mesh_3_from_labeled_triangulation_3_impl(c3t3,file);
        return c3t3;
    }

    //template <typename C3T3, typename MD, typename MC,
    //  typename Arg1>
    //C3T3 make_mesh_3_from_labeled_triangulation_3(const MD& md, const MC& mc, const Arg1& a1)
    //{
    //  C3T3 c3t3;
    //  make_mesh_3_from_labeled_triangulation_3_bp(c3t3,md,mc,a1);
    //  return c3t3;
    //}



    /**
 * @brief This function meshes the domain defined by mesh_traits
 * (respecting criteria), and outputs the mesh to c3t3
 *
 * @param domain the domain to be discretized
 *
 * @return The mesh as a C3T3 object
 */
    template<class C3T3>
    void make_mesh_3_from_labeled_triangulation_3_impl(C3T3& c3t3, const char* file)
    {

        typedef typename C3T3::Point Point_3;

        typedef typename C3T3::Vertex_handle Vertex_handle;
        typedef typename C3T3::Cell_handle Cell_handle;
        typedef typename C3T3::Facet Facet;

        typedef typename C3T3::Surface_index Surface_index;

        typedef typename C3T3::Subdomain_index Subdomain_index;


        typedef typename C3T3::Index Index;

        typedef typename C3T3::Triangulation Mesh_triangulation;
        typedef typename Mesh_triangulation::Finite_facets_iterator Finite_facets_iterator;
        typedef typename CGAL::Triangulation_incremental_builder_3<Mesh_triangulation> Builder;


        // create incremental builder
        Builder builder(c3t3.triangulation(), true);
        builder.begin_triangulation(3);
        // add the vertices to the incremental builder object and store the


        std::ifstream myfile (file);

        if (!myfile.is_open())
            exit (EXIT_FAILURE);

        std::string meshString;
        unsigned int sizeV, sizeT, sizeTet, dimension;

        myfile >> meshString;
        while (meshString.find("Dimension")== std::string::npos)
            myfile >> meshString;

        myfile>> dimension;
        std::cout << meshString << " " << dimension << std::endl;
        while (meshString.find("Vertices")== std::string::npos)
            myfile >> meshString;

        myfile >> sizeV;
        std::cout << meshString << " " << sizeV << std::endl;

        int inum = 0;
        std::vector<Vertex_handle> vertex_handles(sizeV);


        for (unsigned int i = 0; i < sizeV; i++) {
            double p[3];
            for (unsigned int j = 0; j < 3; j++)
                myfile >> p[j];

            Vertex_handle vh = builder.add_vertex();

            Point_3 point = Point_3(p[0], p[1], p[2]);

            vh->set_point(point);
            vertex_handles[inum++] = vh;

            int dimension;
            myfile >> dimension;
            c3t3.set_dimension(vh, dimension);
        }
        /*
        while (meshString.find("Triangles")== std::string::npos)
            myfile >> meshString;

        myfile >> sizeT;
        std::cout << meshString << " " << sizeT << std::endl;
        for (unsigned int i = 0; i < sizeT; i++) {
            unsigned int v[3];
            for (unsigned int j = 0; j < 3; j++)
                myfile >> v[j];

            myfile >> s;

        }
    */
        if( dimension == 3 ){
            while (meshString.find("Tetrahedra")== std::string::npos)
                myfile >> meshString;

            myfile >> sizeTet;

            std::cout << meshString << " " << sizeTet << std::endl;
            for (unsigned int i = 0; i < sizeTet; i++) {
                int v[4];
                for (unsigned int j = 0; j < 4; j++){
                    myfile >> v[j];
                    v[j]--;
                }

                Subdomain_index si;
                myfile >> si;

                Cell_handle c = builder.add_cell(vertex_handles[v[0]],
                        vertex_handles[v[1]],
                        vertex_handles[v[2]],
                        vertex_handles[v[3]]);

                c3t3.add_to_complex(c, si);

                for (int i=0; i < 4; i++){
                    Vertex_handle vh = vertex_handles[v[i]];
                    c3t3.set_index(vh, Index(si));
                }
            }
        }



        // finished
        builder.end_triangulation();



        Mesh_triangulation & mesh_triangulation = c3t3.triangulation();
        for(Finite_facets_iterator fit = mesh_triangulation.finite_facets_begin(); fit != mesh_triangulation.finite_facets_end() ; fit ++){

            Facet mirror_facet = mesh_triangulation.mirror_facet(*fit);
            Cell_handle current_cell = fit->first ;

            Subdomain_index si = Subdomain_index();
            if(!mesh_triangulation.is_infinite(current_cell))
                si = c3t3.subdomain_index(current_cell);

            Subdomain_index si_neighbor = Subdomain_index();
            if(!mesh_triangulation.is_infinite(mirror_facet.first))
                si_neighbor = c3t3.subdomain_index(mirror_facet.first);


            if(si != si_neighbor ){
                Surface_index surface_index (si, si_neighbor);

                if( si > Subdomain_index() )
                    c3t3.add_to_complex(*fit, surface_index);
                else
                    c3t3.add_to_complex(mirror_facet, surface_index);

                for (int i = 1; i < 4; i++){

                    Vertex_handle vh = fit->first->vertex((i+fit->second)%4);
                    c3t3.set_index(vh, Index(surface_index));
                }
            }
        }

    }

    //Vertices dimension should be <0 for them to be removed
    // TODO check with the degree ie valence of the vertices
    template<class C3T3>
    void remove_unused_vertices(C3T3& c3t3)
    {
        std::cout <<"remove_unused_vertices(C3T3& c3t3)::start" << std::endl;
        typedef typename C3T3::Triangulation Mesh_triangulation;
        typedef typename Mesh_triangulation::Finite_vertices_iterator Finite_vertices_iterator;
        typedef typename C3T3::Vertex_handle Vertex_handle;

        Mesh_triangulation & triangulation = c3t3.triangulation();

        if ( triangulation.dimension() < 3 ) { return; }

        for( Finite_vertices_iterator vit = triangulation.finite_vertices_begin(); vit != triangulation.finite_vertices_end(); ++vit)
        {
            Vertex_handle vh = vit;

            if(c3t3.in_dimension(vit) < 0 )
                triangulation.tds().delete_vertex(vh);

        }

        //Check if the resulting triangulation is valid
        if(triangulation.is_valid()) std::cout <<"remove_unused_vertices(C3T3& c3t3)::Triangulation is valid"<<std::endl;

        std::cout <<"remove_unused_vertices(C3T3& c3t3)::end" << std::endl;
    }

    //Vertices dimension should be <0 for them to be removed
    // TODO check with the degree ie valence of the vertices
    template<class C3T3>
    void remove_unused_cells(C3T3& c3t3)
    {
        std::cout << "remove_unused_cells(C3T3& c3t3)" << std::endl;
        typedef typename C3T3::Triangulation Mesh_triangulation;
        typedef typename Mesh_triangulation::Finite_cells_iterator Finite_cells_iterator;
        typedef typename C3T3::Cell_handle Cell_handle;

        Mesh_triangulation & triangulation = c3t3.triangulation();

        if ( triangulation.dimension() < 3 ) { return; }

        for( Finite_cells_iterator cit = triangulation.finite_cells_begin(); cit != triangulation.finite_cells_begin(); ++cit)
        {

            Cell_handle ch = cit;

            if(c3t3.subdomain_index(cit) < 0)
                triangulation.tds().delete_cell(ch);

        }

        //Check if the resulting triangulation is valid
        if(triangulation.is_valid()) std::cout <<"remove_unused_cells(C3T3& c3t3)::Triangulation is valid"<<std::endl;
        std::cout << "remove_unused_cells(C3T3& c3t3)::end" << std::endl;

    }

    template <typename C3T3>
            void clean_c3t3(C3T3& c3t3)
    {
        typedef typename C3T3::Triangulation            Tr;
        typedef typename C3T3::Cell_handle              Cell_handle;
        typedef typename C3T3::Facet                    Facet;
        typedef typename Tr::Finite_vertices_iterator   Fvi;

        const Tr& tr = c3t3.triangulation();
        if ( tr.dimension() < 3 ) { return; }

        // Iterate on vertices and fix dimension
        for ( Fvi vit = tr.finite_vertices_begin(), end = tr.finite_vertices_end() ;
        vit != end ; ++vit )
        {
            typename std::vector<Facet> facets;
            tr.finite_incident_facets(vit, std::back_inserter(facets));
            CGAL_assertion(!facets.empty());

            // Look for the first surface facet
            typename std::vector<Facet>::iterator it_facet = facets.begin();
            while ( it_facet != facets.end() && !c3t3.is_in_complex(*it_facet++) ){}

            // vit is on the surface: set dimension and break
            if ( it_facet != facets.end() )
            {
                c3t3.set_dimension(vit,2);
                continue;
            }

            // Look for the first interior cell
            typename std::vector<Cell_handle> cells;
            tr.finite_incident_cells(vit,std::back_inserter(cells));
            CGAL_assertion(cells.begin() != cells.end());

            if ( c3t3.is_in_complex(*cells.begin()) )
            {
                c3t3.set_dimension(vit,3);
                continue;
            }

            // vit is not part of the complex
            c3t3.set_dimension(vit,-1);
        }
    }

}  // end namespace CGAL


#endif // MAKE_MESH_3_FROM_LABELED_TRIANGULATION_3_H

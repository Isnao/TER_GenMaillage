// CGAL
#include <CGAL/Simple_cartesian.h>
#include <CGAL/Surface_mesh.h>
#include <CGAL/draw_surface_mesh.h>
#include <CGAL/draw_c3t3.h>

#include <CGAL/Mesh_triangulation_3.h>
#include <CGAL/Mesh_complex_3_in_triangulation_3.h>
#include <CGAL/Mesh_criteria_3.h>

#include <CGAL/make_mesh_3.h>
#include <CGAL/Image_3.h>

/// [Domain definition]
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Mesh_domain_with_polyline_features_3.h>
#include <CGAL/Labeled_mesh_domain_3.h>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef CGAL::Labeled_mesh_domain_3<K> Image_domain;
typedef CGAL::Mesh_domain_with_polyline_features_3<Image_domain> Mesh_domain;
/// [Domain definition]

#ifdef CGAL_CONCURRENT_MESH_3
typedef CGAL::Parallel_tag Concurrency_tag;
#else
typedef CGAL::Sequential_tag Concurrency_tag;
#endif

// STD
#include <algorithm>
#include <fstream>
#include <string>

// Typedefs
using Kernel = CGAL::Simple_cartesian<double>;
using Point  = Kernel::Point_3;
using Mesh   = CGAL::Surface_mesh<Point>;

typedef CGAL::Image_3 Image;

// Triangulation
typedef CGAL::Mesh_triangulation_3<Mesh_domain,CGAL::Default,Concurrency_tag>::type Tr;
typedef CGAL::Mesh_complex_3_in_triangulation_3<Tr> C3t3;

// Mesh Criteria
typedef CGAL::Mesh_criteria_3<Tr> Mesh_criteria;

typedef int Subdomain_index;

using namespace CGAL::parameters;

Mesh read_from(std::string filename)
{
	Mesh mesh;
	std::ifstream input_file(filename);

	if(!input_file.is_open())
	{
		std::cerr << "Error : cannot open file : " << filename << '\n';
		exit(EXIT_FAILURE);
	}

	// Reading file depending on file extension

	std::transform(filename.begin(), filename.end(), filename.begin(), ::tolower);

	if(filename.find(".ply") != std::string::npos)
	{
		read_ply(input_file, mesh);
	}
	else if(filename.find(".off") != std::string::npos)
	{
		read_off(input_file, mesh);
	}
	else
	{
		std::cerr << "Error : file extension is not supported\n";
		exit(EXIT_FAILURE);
	}

	if(mesh.is_empty())
	{
		std::cerr << "Error : after reading file, mesh is empty\n";
		exit(EXIT_FAILURE);
	}

	return mesh;
}

int main(int argc, char* argv[])
{
	std::string filename;

	if(argc < 2)
	{
		std::cerr << "Usage : " << argv[0] << " <MESH_FILE.(PLY|OFF)>\n";
		std::cerr << "Default MESH_FILE is set to ../data/hello-world.ply\n";
		filename = "../data/hello-world.ply";
	}
	else
	{
		filename = argv[1];
	}

	/*std::cerr << "Reading mesh from (" << filename << ")...\n";
	Mesh mesh = read_from(filename);

	CGAL::draw(mesh,"test",true);*/
	
	std::cerr << "Create C3T3\n";
	
	Image image;   
	//image.read("../data/Patrick8.inr");       // Loads image
	image.read("../data/420.inr");

	// Domain
	Mesh_domain domain = Mesh_domain::create_labeled_image_mesh_domain(image);

	// Mesh criteria
	Mesh_criteria criteria(edge_size=6,
						   facet_angle=30, facet_size=6, facet_distance=4,
                           cell_radius_edge_ratio=3, cell_size=8);
 

	// Meshing
    C3t3 c3t3 = CGAL::make_mesh_3<C3t3>(domain, criteria);	
	
	/*C3t3 c3t3;
	
	std::ifstream c3t3_load("../data/Patrickmesh.mesh");
	c3t3_load >> c3t3.triangulation();
	
	C3t3::Edges_in_complex_iterator it = c3t3.edges_in_complex_begin();
	
	std::cerr << "Un point : " << c3t3.in_dimension(it->first->vertex(it->second));*/
	
    /*C3t3::Edges_in_complex_iterator t = c3t3.edges_in_complex_begin();
	
	std::cerr << "point :" << t->first->vertex(t->second)->point() << std::endl;
	std::cerr << "point :" << t->first->vertex(t->third)->point() << std::endl;*/
	
	CGAL::draw(c3t3,"Test affichage edges",false,false,2);

	return EXIT_SUCCESS;
}

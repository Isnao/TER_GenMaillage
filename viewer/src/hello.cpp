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
	bool nofill, onlyedges;
	int dim;

	if(argc < 5)
	{
		std::cerr << "Usage : " << argv[0] << " <MESH_FILE.(PLY|OFF)> <No_fill (0|1)> <Only_Edges (0|1)> <Dim of vertex [0-3]>\n";
		std::cerr << "Default MESH_FILE is set to ../data/Patrickc3t3\n";
		filename = "../data/Patrickc3t3";
		nofill = false;
		onlyedges = false;
		dim = 3;
	}
	else
	{
		filename = argv[1];
		nofill = argv[2];
		onlyedges = argv[3];
		dim = argv[4];
	}
	
	C3t3 c3t3;
	
	std::ifstream c3t3_load(filename); //lecture du fichier pour passage dans c3t3
	c3t3_load >> c3t3;
	
	CGAL::draw(c3t3,"Test affichage edges",nofill,onlyedges,dim);

	return EXIT_SUCCESS;
}

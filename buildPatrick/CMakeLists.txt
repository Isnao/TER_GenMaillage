
cmake_minimum_required(VERSION 3.1...3.15)
project( Mesh_Creator )


find_package(CGAL COMPONENTS ImageIO)
include( ${CGAL_USE_FILE} )

message("CGAL LIBRARIES : ${CGAL_LIBRARIES} ")

ADD_EXECUTABLE(mesh_Creator mesh_Creator.cpp )
TARGET_LINK_LIBRARIES(mesh_Creator ${CGAL_LIBRARIES} )


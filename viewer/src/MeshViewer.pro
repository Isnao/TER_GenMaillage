QT += xml
QT += opengl
TARGET = meshViewer
TEMPLATE = app
MOC_DIR = ./moc
OBJECTS_DIR = ./obj

HEADERS  = \
    MeshViewer.h \
    cgal_headers.h \
    Window.h \
    DisplayDockWidget.h \
    read_polylines.h
SOURCES  = main.cpp \
    MeshViewer.cpp \
    Window.cpp \
    DisplayDockWidget.cpp

LIBS = -L/home/scyllo/Qt5.14.1/5.14.1/gcc_64/lib \
    -L/usr/include/ \
    -lQGLViewer-qt5 \
    -lGLU \
    -lGLEW \
    -lniftiio \
    -lznz \
    -lmpfr \
    -lgmp \
    -lgmpxx \
    -lboost_thread \
    -lboost_program_options \
    -lboost_system \
    -L/usr/include/CGAL \
    -L/usr/include/CGAL/ImageIO
QMAKE_CXXFLAGS = \#-frounding-math \
    -g \
    -DNDEBUG \
    -fno-strict-aliasing \
    -DFMLS_NOGPU \
    -DCGAL_INTRUSIVE_LIST \
    -frounding-math \
    -O3
QMAKE_CXXFLAGS_RELEASE = -std=c++14
#QMAKE_CXXFLAGS_RELEASE += -Ofast

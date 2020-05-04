#include "Window.h"

Window::Window()
{

    m_viewer = new Viewer();

    m_displayDockWidget = new DisplayDockWidget(m_viewer,this);

    this->addDockWidget(Qt::RightDockWidgetArea, m_displayDockWidget);


    this->setCentralWidget(m_viewer);
}

#include "Window.h"
#include <QHBoxLayout>

Window::Window()
{

    m_viewer1 = new Viewer();
    m_viewer2 = new Viewer();

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(m_viewer1);
    layout->addWidget(m_viewer2);
    QWidget *window = new QWidget();
    window->setLayout(layout);

    m_displayDockWidget = new DisplayDockWidget(m_viewer1, m_viewer2,this);

    this->addDockWidget(Qt::RightDockWidgetArea, m_displayDockWidget);


    this->setCentralWidget(window);

}

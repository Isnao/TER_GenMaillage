#ifndef WINDOW_H
#define WINDOW_H
#include "DisplayDockWidget.h"

#include <QMainWindow>

class Window : public QMainWindow
  {
    Q_OBJECT

  public:
    Window();

  private:
        DisplayDockWidget *m_displayDockWidget;
        Viewer * m_viewer;
};

#endif // WINDOW_H

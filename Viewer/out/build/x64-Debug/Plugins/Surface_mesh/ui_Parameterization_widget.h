/********************************************************************************
** Form generated from reading UI file 'Parameterization_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETERIZATION_WIDGET_H
#define UI_PARAMETERIZATION_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Parameterization
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QPushButton *prevButton;
    QLabel *component_numberLabel;
    QPushButton *nextButton;

    void setupUi(QDockWidget *Parameterization)
    {
        if (Parameterization->objectName().isEmpty())
            Parameterization->setObjectName(QStringLiteral("Parameterization"));
        Parameterization->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(dockWidgetContents);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMouseTracking(true);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setInteractive(false);
        graphicsView->setRenderHints(QPainter::Antialiasing);
        graphicsView->setDragMode(QGraphicsView::NoDrag);
        graphicsView->setTransformationAnchor(QGraphicsView::NoAnchor);

        verticalLayout->addWidget(graphicsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        prevButton = new QPushButton(dockWidgetContents);
        prevButton->setObjectName(QStringLiteral("prevButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/cgal/icons/resources/left_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        prevButton->setIcon(icon);

        horizontalLayout->addWidget(prevButton);

        component_numberLabel = new QLabel(dockWidgetContents);
        component_numberLabel->setObjectName(QStringLiteral("component_numberLabel"));
        component_numberLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(component_numberLabel);

        nextButton = new QPushButton(dockWidgetContents);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/cgal/icons/resources/right_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextButton->setIcon(icon1);

        horizontalLayout->addWidget(nextButton);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        Parameterization->setWidget(dockWidgetContents);

        retranslateUi(Parameterization);

        QMetaObject::connectSlotsByName(Parameterization);
    } // setupUi

    void retranslateUi(QDockWidget *Parameterization)
    {
        Parameterization->setWindowTitle(QApplication::translate("Parameterization", "UVMapping", Q_NULLPTR));
        prevButton->setText(QString());
        component_numberLabel->setText(QApplication::translate("Parameterization", "Component ", Q_NULLPTR));
        nextButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Parameterization: public Ui_Parameterization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETERIZATION_WIDGET_H

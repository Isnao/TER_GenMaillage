/********************************************************************************
** Form generated from reading UI file 'Point_inside_polyhedron_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT_INSIDE_POLYHEDRON_WIDGET_H
#define UI_POINT_INSIDE_POLYHEDRON_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Point_inside_polyhedron
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *Sample_random_points_from_bbox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *Inside_check_box;
    QCheckBox *On_boundary_check_box;
    QCheckBox *Outside_check_box;
    QPushButton *Select_button;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *Point_inside_polyhedron)
    {
        if (Point_inside_polyhedron->objectName().isEmpty())
            Point_inside_polyhedron->setObjectName(QStringLiteral("Point_inside_polyhedron"));
        Point_inside_polyhedron->resize(330, 225);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Sample_random_points_from_bbox = new QPushButton(dockWidgetContents);
        Sample_random_points_from_bbox->setObjectName(QStringLiteral("Sample_random_points_from_bbox"));

        verticalLayout->addWidget(Sample_random_points_from_bbox);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Inside_check_box = new QCheckBox(groupBox);
        Inside_check_box->setObjectName(QStringLiteral("Inside_check_box"));

        horizontalLayout->addWidget(Inside_check_box);

        On_boundary_check_box = new QCheckBox(groupBox);
        On_boundary_check_box->setObjectName(QStringLiteral("On_boundary_check_box"));

        horizontalLayout->addWidget(On_boundary_check_box);

        Outside_check_box = new QCheckBox(groupBox);
        Outside_check_box->setObjectName(QStringLiteral("Outside_check_box"));

        horizontalLayout->addWidget(Outside_check_box);


        verticalLayout_2->addLayout(horizontalLayout);

        Select_button = new QPushButton(groupBox);
        Select_button->setObjectName(QStringLiteral("Select_button"));

        verticalLayout_2->addWidget(Select_button);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Point_inside_polyhedron->setWidget(dockWidgetContents);

        retranslateUi(Point_inside_polyhedron);

        QMetaObject::connectSlotsByName(Point_inside_polyhedron);
    } // setupUi

    void retranslateUi(QDockWidget *Point_inside_polyhedron)
    {
        Point_inside_polyhedron->setWindowTitle(QApplication::translate("Point_inside_polyhedron", "Point Inside Facegraph", Q_NULLPTR));
        Sample_random_points_from_bbox->setText(QApplication::translate("Point_inside_polyhedron", "Sample Random Points from Bbox", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Point_inside_polyhedron", "Point Location", Q_NULLPTR));
        Inside_check_box->setText(QApplication::translate("Point_inside_polyhedron", "Inside", Q_NULLPTR));
        On_boundary_check_box->setText(QApplication::translate("Point_inside_polyhedron", "On Boundary", Q_NULLPTR));
        Outside_check_box->setText(QApplication::translate("Point_inside_polyhedron", "Outside", Q_NULLPTR));
        Select_button->setText(QApplication::translate("Point_inside_polyhedron", "Select", Q_NULLPTR));
        label->setText(QApplication::translate("Point_inside_polyhedron", "Note:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Point_inside_polyhedron", "<html><head/><body><p>A selection is possible only if a point set item<br/>and a (closed) surface mesh item are selected</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Point_inside_polyhedron: public Ui_Point_inside_polyhedron {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT_INSIDE_POLYHEDRON_WIDGET_H

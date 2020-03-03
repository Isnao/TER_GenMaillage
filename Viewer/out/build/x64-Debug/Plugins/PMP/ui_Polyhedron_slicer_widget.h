/********************************************************************************
** Form generated from reading UI file 'Polyhedron_slicer_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYHEDRON_SLICER_WIDGET_H
#define UI_POLYHEDRON_SLICER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Polyhedron_slicer
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *Base_2_x;
    QLabel *Base_2_label;
    QLabel *Base_1_label;
    QLabel *Center_label;
    QLineEdit *Base_1_x;
    QLineEdit *Center_x;
    QLineEdit *Base_1_z;
    QLineEdit *Base_1_y;
    QLineEdit *Center_y;
    QLineEdit *Center_z;
    QLineEdit *Base_2_y;
    QLineEdit *Base_2_z;
    QPushButton *Update_plane_button;
    QHBoxLayout *horizontalLayout;
    QLabel *Distance_with_planes_label;
    QLineEdit *Distance_with_planes;
    QHBoxLayout *_2;
    QCheckBox *newPolylineItemCheckBox;
    QPushButton *Generate_button;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *Polyhedron_slicer)
    {
        if (Polyhedron_slicer->objectName().isEmpty())
            Polyhedron_slicer->setObjectName(QStringLiteral("Polyhedron_slicer"));
        Polyhedron_slicer->resize(289, 208);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Base_2_x = new QLineEdit(dockWidgetContents);
        Base_2_x->setObjectName(QStringLiteral("Base_2_x"));

        gridLayout->addWidget(Base_2_x, 1, 1, 1, 1);

        Base_2_label = new QLabel(dockWidgetContents);
        Base_2_label->setObjectName(QStringLiteral("Base_2_label"));
        Base_2_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Base_2_label, 1, 0, 1, 1);

        Base_1_label = new QLabel(dockWidgetContents);
        Base_1_label->setObjectName(QStringLiteral("Base_1_label"));
        Base_1_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Base_1_label, 0, 0, 1, 1);

        Center_label = new QLabel(dockWidgetContents);
        Center_label->setObjectName(QStringLiteral("Center_label"));
        Center_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Center_label, 2, 0, 1, 1);

        Base_1_x = new QLineEdit(dockWidgetContents);
        Base_1_x->setObjectName(QStringLiteral("Base_1_x"));

        gridLayout->addWidget(Base_1_x, 0, 1, 1, 1);

        Center_x = new QLineEdit(dockWidgetContents);
        Center_x->setObjectName(QStringLiteral("Center_x"));

        gridLayout->addWidget(Center_x, 2, 1, 1, 1);

        Base_1_z = new QLineEdit(dockWidgetContents);
        Base_1_z->setObjectName(QStringLiteral("Base_1_z"));

        gridLayout->addWidget(Base_1_z, 0, 3, 1, 1);

        Base_1_y = new QLineEdit(dockWidgetContents);
        Base_1_y->setObjectName(QStringLiteral("Base_1_y"));

        gridLayout->addWidget(Base_1_y, 0, 2, 1, 1);

        Center_y = new QLineEdit(dockWidgetContents);
        Center_y->setObjectName(QStringLiteral("Center_y"));

        gridLayout->addWidget(Center_y, 2, 2, 1, 1);

        Center_z = new QLineEdit(dockWidgetContents);
        Center_z->setObjectName(QStringLiteral("Center_z"));

        gridLayout->addWidget(Center_z, 2, 3, 1, 1);

        Base_2_y = new QLineEdit(dockWidgetContents);
        Base_2_y->setObjectName(QStringLiteral("Base_2_y"));

        gridLayout->addWidget(Base_2_y, 1, 2, 1, 1);

        Base_2_z = new QLineEdit(dockWidgetContents);
        Base_2_z->setObjectName(QStringLiteral("Base_2_z"));

        gridLayout->addWidget(Base_2_z, 1, 3, 1, 1);

        Update_plane_button = new QPushButton(dockWidgetContents);
        Update_plane_button->setObjectName(QStringLiteral("Update_plane_button"));

        gridLayout->addWidget(Update_plane_button, 3, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Distance_with_planes_label = new QLabel(dockWidgetContents);
        Distance_with_planes_label->setObjectName(QStringLiteral("Distance_with_planes_label"));

        horizontalLayout->addWidget(Distance_with_planes_label);

        Distance_with_planes = new QLineEdit(dockWidgetContents);
        Distance_with_planes->setObjectName(QStringLiteral("Distance_with_planes"));

        horizontalLayout->addWidget(Distance_with_planes);


        verticalLayout->addLayout(horizontalLayout);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        newPolylineItemCheckBox = new QCheckBox(dockWidgetContents);
        newPolylineItemCheckBox->setObjectName(QStringLiteral("newPolylineItemCheckBox"));

        _2->addWidget(newPolylineItemCheckBox);

        Generate_button = new QPushButton(dockWidgetContents);
        Generate_button->setObjectName(QStringLiteral("Generate_button"));

        _2->addWidget(Generate_button);


        verticalLayout->addLayout(_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Polyhedron_slicer->setWidget(dockWidgetContents);

        retranslateUi(Polyhedron_slicer);

        QMetaObject::connectSlotsByName(Polyhedron_slicer);
    } // setupUi

    void retranslateUi(QDockWidget *Polyhedron_slicer)
    {
        Polyhedron_slicer->setWindowTitle(QApplication::translate("Polyhedron_slicer", "Polyhedron Slicer", Q_NULLPTR));
        Base_2_label->setText(QApplication::translate("Polyhedron_slicer", "Base 2", Q_NULLPTR));
        Base_1_label->setText(QApplication::translate("Polyhedron_slicer", "Base 1", Q_NULLPTR));
        Center_label->setText(QApplication::translate("Polyhedron_slicer", "Center", Q_NULLPTR));
        Update_plane_button->setText(QApplication::translate("Polyhedron_slicer", "Update Plane", Q_NULLPTR));
        Distance_with_planes_label->setText(QApplication::translate("Polyhedron_slicer", "Distance with planes", Q_NULLPTR));
        newPolylineItemCheckBox->setText(QApplication::translate("Polyhedron_slicer", "New polyline item for each polyline", Q_NULLPTR));
        Generate_button->setText(QApplication::translate("Polyhedron_slicer", "Generate", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Polyhedron_slicer: public Ui_Polyhedron_slicer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYHEDRON_SLICER_WIDGET_H

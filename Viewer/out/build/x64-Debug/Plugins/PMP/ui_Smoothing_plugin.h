/********************************************************************************
** Form generated from reading UI file 'Smoothing_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMOOTHING_PLUGIN_H
#define UI_SMOOTHING_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Smoothing
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_3;
    QSpinBox *smooth_iter_spinBox;
    QGroupBox *Shape_groupBox;
    QGridLayout *gridLayout;
    QDoubleSpinBox *time_step_spinBox;
    QPushButton *shape_smoothing_button;
    QLabel *time_step_label;
    QCheckBox *border_button;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QGroupBox *Mesh_groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *mesh_smoothing_button;
    QCheckBox *sanity_checkBox;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *area_smoothing_checkBox;
    QCheckBox *angle_smoothing_checkBox;
    QCheckBox *projection_checkBox;
    QCheckBox *flip_checkBox;

    void setupUi(QDockWidget *Smoothing)
    {
        if (Smoothing->objectName().isEmpty())
            Smoothing->setObjectName(QStringLiteral("Smoothing"));
        Smoothing->resize(518, 478);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout_3 = new QGridLayout(dockWidgetContents);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        smooth_iter_spinBox = new QSpinBox(dockWidgetContents);
        smooth_iter_spinBox->setObjectName(QStringLiteral("smooth_iter_spinBox"));
        smooth_iter_spinBox->setMinimum(1);
        smooth_iter_spinBox->setMaximum(1000);

        gridLayout_3->addWidget(smooth_iter_spinBox, 0, 1, 1, 1);

        Shape_groupBox = new QGroupBox(dockWidgetContents);
        Shape_groupBox->setObjectName(QStringLiteral("Shape_groupBox"));
        gridLayout = new QGridLayout(Shape_groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        time_step_spinBox = new QDoubleSpinBox(Shape_groupBox);
        time_step_spinBox->setObjectName(QStringLiteral("time_step_spinBox"));
        time_step_spinBox->setDecimals(6);
        time_step_spinBox->setMinimum(1e-6);

        gridLayout->addWidget(time_step_spinBox, 1, 2, 1, 1);

        shape_smoothing_button = new QPushButton(Shape_groupBox);
        shape_smoothing_button->setObjectName(QStringLiteral("shape_smoothing_button"));

        gridLayout->addWidget(shape_smoothing_button, 6, 2, 1, 1);

        time_step_label = new QLabel(Shape_groupBox);
        time_step_label->setObjectName(QStringLiteral("time_step_label"));

        gridLayout->addWidget(time_step_label, 1, 0, 1, 1);


        gridLayout_3->addWidget(Shape_groupBox, 9, 0, 1, 2);

        border_button = new QCheckBox(dockWidgetContents);
        border_button->setObjectName(QStringLiteral("border_button"));

        gridLayout_3->addWidget(border_button, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 0, 1, 2);

        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        Mesh_groupBox = new QGroupBox(dockWidgetContents);
        Mesh_groupBox->setObjectName(QStringLiteral("Mesh_groupBox"));
        gridLayout_2 = new QGridLayout(Mesh_groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mesh_smoothing_button = new QPushButton(Mesh_groupBox);
        mesh_smoothing_button->setObjectName(QStringLiteral("mesh_smoothing_button"));
        mesh_smoothing_button->setEnabled(true);
        mesh_smoothing_button->setCheckable(false);

        gridLayout_2->addWidget(mesh_smoothing_button, 4, 1, 1, 1);

        sanity_checkBox = new QCheckBox(Mesh_groupBox);
        sanity_checkBox->setObjectName(QStringLiteral("sanity_checkBox"));

        gridLayout_2->addWidget(sanity_checkBox, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 5, 1, 1, 1);

        area_smoothing_checkBox = new QCheckBox(Mesh_groupBox);
        area_smoothing_checkBox->setObjectName(QStringLiteral("area_smoothing_checkBox"));

        gridLayout_2->addWidget(area_smoothing_checkBox, 0, 0, 1, 1);

        angle_smoothing_checkBox = new QCheckBox(Mesh_groupBox);
        angle_smoothing_checkBox->setObjectName(QStringLiteral("angle_smoothing_checkBox"));

        gridLayout_2->addWidget(angle_smoothing_checkBox, 1, 0, 1, 1);

        projection_checkBox = new QCheckBox(Mesh_groupBox);
        projection_checkBox->setObjectName(QStringLiteral("projection_checkBox"));

        gridLayout_2->addWidget(projection_checkBox, 3, 0, 1, 1);

        flip_checkBox = new QCheckBox(Mesh_groupBox);
        flip_checkBox->setObjectName(QStringLiteral("flip_checkBox"));
        flip_checkBox->setCheckable(true);

        gridLayout_2->addWidget(flip_checkBox, 0, 1, 1, 1);


        gridLayout_3->addWidget(Mesh_groupBox, 5, 0, 1, 2);

        Smoothing->setWidget(dockWidgetContents);

        retranslateUi(Smoothing);

        QMetaObject::connectSlotsByName(Smoothing);
    } // setupUi

    void retranslateUi(QDockWidget *Smoothing)
    {
        Smoothing->setWindowTitle(QApplication::translate("Smoothing", "Smoothing", Q_NULLPTR));
        Shape_groupBox->setTitle(QApplication::translate("Smoothing", "Shape Smoothing", Q_NULLPTR));
        shape_smoothing_button->setText(QApplication::translate("Smoothing", "Smooth Shape", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        time_step_label->setToolTip(QApplication::translate("Smoothing", "The time step should not be too large or the smoothing will be unsatisfactory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        time_step_label->setText(QApplication::translate("Smoothing", "Time Step:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        border_button->setToolTip(QApplication::translate("Smoothing", "If you are using a selection item, this will combine your selected vertices and the border vertices", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        border_button->setText(QApplication::translate("Smoothing", "Constrain Border Vertices", Q_NULLPTR));
        label->setText(QApplication::translate("Smoothing", "Number of iterations", Q_NULLPTR));
        Mesh_groupBox->setTitle(QApplication::translate("Smoothing", "Mesh Smoothing", Q_NULLPTR));
        mesh_smoothing_button->setText(QApplication::translate("Smoothing", "Smooth Mesh", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        sanity_checkBox->setToolTip(QApplication::translate("Smoothing", "By default, a serie of checks are performed when a displacement is computed (e.g. is the minimul angle around the vertex not reduced?). However, sometimes local bad moves are necessary to achieve a better result overall.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        sanity_checkBox->setText(QApplication::translate("Smoothing", "Do not apply worsening moves", Q_NULLPTR));
        area_smoothing_checkBox->setText(QApplication::translate("Smoothing", "Use Area Smoothing", Q_NULLPTR));
        angle_smoothing_checkBox->setText(QApplication::translate("Smoothing", "Use Angle Smoothing", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        projection_checkBox->setToolTip(QApplication::translate("Smoothing", "Reprojection on the initial surface will not happen if there are self-intersections in the mesh, except if worsening moves are allowed (the option just above).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        projection_checkBox->setText(QApplication::translate("Smoothing", "Re-project Vertices", Q_NULLPTR));
        flip_checkBox->setText(QApplication::translate("Smoothing", "Allow Delaunay flips", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Smoothing: public Ui_Smoothing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMOOTHING_PLUGIN_H

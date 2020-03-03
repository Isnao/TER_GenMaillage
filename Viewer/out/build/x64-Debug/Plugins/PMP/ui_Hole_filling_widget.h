/********************************************************************************
** Form generated from reading UI file 'Hole_filling_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOLE_FILLING_WIDGET_H
#define UI_HOLE_FILLING_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HoleFilling
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *action_combo_box;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *Use_delaunay_triangulation_check_box;
    QCheckBox *Skip_self_intersection_check_box;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QDoubleSpinBox *vertices_threshold_spin_box;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QDoubleSpinBox *Density_control_factor_spin_box;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSpinBox *Continuity_spin_box;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QComboBox *weight_combo_box;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Visualize_holes_button;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Select_all_holes_button;
    QPushButton *Select_small_holes_button;
    QPushButton *Deselect_all_holes_button;
    QLabel *label_6;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Fill_selected_holes_button;
    QVBoxLayout *verticalLayout_7;
    QPushButton *Create_polyline_items_button;
    QPushButton *Fill_from_selection_button;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Reject_button;
    QPushButton *Accept_button;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *HoleFilling)
    {
        if (HoleFilling->objectName().isEmpty())
            HoleFilling->setObjectName(QStringLiteral("HoleFilling"));
        HoleFilling->setEnabled(true);
        HoleFilling->resize(453, 633);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidgetContents->setEnabled(true);
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        action_combo_box = new QComboBox(dockWidgetContents);
        action_combo_box->setObjectName(QStringLiteral("action_combo_box"));

        horizontalLayout->addWidget(action_combo_box);


        verticalLayout_6->addLayout(horizontalLayout);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        Use_delaunay_triangulation_check_box = new QCheckBox(groupBox);
        Use_delaunay_triangulation_check_box->setObjectName(QStringLiteral("Use_delaunay_triangulation_check_box"));
        Use_delaunay_triangulation_check_box->setChecked(true);

        verticalLayout_4->addWidget(Use_delaunay_triangulation_check_box);

        Skip_self_intersection_check_box = new QCheckBox(groupBox);
        Skip_self_intersection_check_box->setObjectName(QStringLiteral("Skip_self_intersection_check_box"));

        verticalLayout_4->addWidget(Skip_self_intersection_check_box);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        vertices_threshold_spin_box = new QDoubleSpinBox(groupBox);
        vertices_threshold_spin_box->setObjectName(QStringLiteral("vertices_threshold_spin_box"));
        vertices_threshold_spin_box->setDecimals(0);
        vertices_threshold_spin_box->setMaximum(1e+9);
        vertices_threshold_spin_box->setSingleStep(1);
        vertices_threshold_spin_box->setValue(10);

        horizontalLayout_8->addWidget(vertices_threshold_spin_box);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_6->addWidget(groupBox);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        Density_control_factor_spin_box = new QDoubleSpinBox(groupBox_2);
        Density_control_factor_spin_box->setObjectName(QStringLiteral("Density_control_factor_spin_box"));
        Density_control_factor_spin_box->setMaximum(96.99);
        Density_control_factor_spin_box->setSingleStep(0.2);
        Density_control_factor_spin_box->setValue(1.41);

        horizontalLayout_5->addWidget(Density_control_factor_spin_box);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_6->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(dockWidgetContents);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        Continuity_spin_box = new QSpinBox(groupBox_3);
        Continuity_spin_box->setObjectName(QStringLiteral("Continuity_spin_box"));
        Continuity_spin_box->setMinimum(0);
        Continuity_spin_box->setMaximum(2);
        Continuity_spin_box->setValue(1);

        horizontalLayout_6->addWidget(Continuity_spin_box);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        weight_combo_box = new QComboBox(groupBox_3);
        weight_combo_box->setObjectName(QStringLiteral("weight_combo_box"));

        horizontalLayout_7->addWidget(weight_combo_box);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_6->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(dockWidgetContents);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Visualize_holes_button = new QPushButton(groupBox_4);
        Visualize_holes_button->setObjectName(QStringLiteral("Visualize_holes_button"));
        Visualize_holes_button->setEnabled(true);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Visualize_holes_button->setFont(font);

        verticalLayout_2->addWidget(Visualize_holes_button);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Select_all_holes_button = new QPushButton(groupBox_4);
        Select_all_holes_button->setObjectName(QStringLiteral("Select_all_holes_button"));

        horizontalLayout_3->addWidget(Select_all_holes_button);

        Select_small_holes_button = new QPushButton(groupBox_4);
        Select_small_holes_button->setObjectName(QStringLiteral("Select_small_holes_button"));

        horizontalLayout_3->addWidget(Select_small_holes_button);

        Deselect_all_holes_button = new QPushButton(groupBox_4);
        Deselect_all_holes_button->setObjectName(QStringLiteral("Deselect_all_holes_button"));

        horizontalLayout_3->addWidget(Deselect_all_holes_button);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);


        verticalLayout_6->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(dockWidgetContents);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_5 = new QVBoxLayout(groupBox_5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Fill_selected_holes_button = new QPushButton(groupBox_5);
        Fill_selected_holes_button->setObjectName(QStringLiteral("Fill_selected_holes_button"));
        Fill_selected_holes_button->setEnabled(true);

        horizontalLayout_2->addWidget(Fill_selected_holes_button);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        Create_polyline_items_button = new QPushButton(groupBox_5);
        Create_polyline_items_button->setObjectName(QStringLiteral("Create_polyline_items_button"));

        verticalLayout_7->addWidget(Create_polyline_items_button);

        Fill_from_selection_button = new QPushButton(groupBox_5);
        Fill_from_selection_button->setObjectName(QStringLiteral("Fill_from_selection_button"));

        verticalLayout_7->addWidget(Fill_from_selection_button);


        horizontalLayout_2->addLayout(verticalLayout_7);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_6->addWidget(groupBox_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Reject_button = new QPushButton(dockWidgetContents);
        Reject_button->setObjectName(QStringLiteral("Reject_button"));

        horizontalLayout_4->addWidget(Reject_button);

        Accept_button = new QPushButton(dockWidgetContents);
        Accept_button->setObjectName(QStringLiteral("Accept_button"));

        horizontalLayout_4->addWidget(Accept_button);


        verticalLayout_6->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        HoleFilling->setWidget(dockWidgetContents);

        retranslateUi(HoleFilling);

        action_combo_box->setCurrentIndex(2);
        weight_combo_box->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HoleFilling);
    } // setupUi

    void retranslateUi(QDockWidget *HoleFilling)
    {
        HoleFilling->setWindowTitle(QApplication::translate("HoleFilling", "Hole Filling", Q_NULLPTR));
        label_2->setText(QApplication::translate("HoleFilling", "Action:", Q_NULLPTR));
        action_combo_box->clear();
        action_combo_box->insertItems(0, QStringList()
         << QApplication::translate("HoleFilling", "Triangulate", Q_NULLPTR)
         << QApplication::translate("HoleFilling", "Triangulate + Refine", Q_NULLPTR)
         << QApplication::translate("HoleFilling", "Triangulate + Refine + Fair", Q_NULLPTR)
        );
        groupBox->setTitle(QApplication::translate("HoleFilling", "Hole Filling Parameters", Q_NULLPTR));
        Use_delaunay_triangulation_check_box->setText(QApplication::translate("HoleFilling", "Use 3D Delaunay Triangulation Search Space", Q_NULLPTR));
        Skip_self_intersection_check_box->setText(QApplication::translate("HoleFilling", "Skip Hole Fillings Making the Surface Self Intersecting", Q_NULLPTR));
        label_4->setText(QApplication::translate("HoleFilling", "Small Hole #Vertices Threshold", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("HoleFilling", "Refinement Parameters", Q_NULLPTR));
        label->setText(QApplication::translate("HoleFilling", "Density Factor", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("HoleFilling", "Fairing Parameters", Q_NULLPTR));
        label_5->setText(QApplication::translate("HoleFilling", "Continuity", Q_NULLPTR));
        label_3->setText(QApplication::translate("HoleFilling", "Weight Type", Q_NULLPTR));
        weight_combo_box->clear();
        weight_combo_box->insertItems(0, QStringList()
         << QApplication::translate("HoleFilling", "Uniform Weight", Q_NULLPTR)
         << QApplication::translate("HoleFilling", "Cotangent Weight", Q_NULLPTR)
        );
        groupBox_4->setTitle(QApplication::translate("HoleFilling", "Hole Display and Selection", Q_NULLPTR));
        Visualize_holes_button->setText(QApplication::translate("HoleFilling", "Detect and Display Holes", Q_NULLPTR));
        Select_all_holes_button->setText(QApplication::translate("HoleFilling", "Select All Holes", Q_NULLPTR));
        Select_small_holes_button->setText(QApplication::translate("HoleFilling", "Select Small Holes", Q_NULLPTR));
        Deselect_all_holes_button->setText(QApplication::translate("HoleFilling", "Deselect All Holes", Q_NULLPTR));
        label_6->setText(QApplication::translate("HoleFilling", "Note: Use CTRL+Left mouse click to manually select/deselect a hole", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("HoleFilling", "Actions", Q_NULLPTR));
        Fill_selected_holes_button->setText(QApplication::translate("HoleFilling", "Fill Selected Holes", Q_NULLPTR));
        Create_polyline_items_button->setText(QApplication::translate("HoleFilling", "Create Polyline Items for Selected Holes", Q_NULLPTR));
        Fill_from_selection_button->setText(QApplication::translate("HoleFilling", "Fill hole from Edge Selection", Q_NULLPTR));
        Reject_button->setText(QApplication::translate("HoleFilling", "Reject", Q_NULLPTR));
        Accept_button->setText(QApplication::translate("HoleFilling", "Accept", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HoleFilling: public Ui_HoleFilling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOLE_FILLING_WIDGET_H

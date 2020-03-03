/********************************************************************************
** Form generated from reading UI file 'Mesh_segmentation_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESH_SEGMENTATION_WIDGET_H
#define UI_MESH_SEGMENTATION_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
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

class Ui_Mesh_segmentation
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *Number_of_rays_label;
    QSpinBox *Number_of_rays_spin_box;
    QLabel *Cone_angle_label;
    QSpinBox *Cone_angle_spin_box;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpinBox *Number_of_clusters_spin_box;
    QLabel *Smoothness_label;
    QLabel *Number_of_clusters_label;
    QDoubleSpinBox *Smoothness_spin_box;
    QLabel *label;
    QCheckBox *Extract_segments_check_box;
    QHBoxLayout *hboxLayout;
    QGridLayout *gridLayout_3;
    QLabel *New_item_label;
    QCheckBox *New_item_check_box;
    QPushButton *SDF_button;
    QPushButton *Partition_button;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *Mesh_segmentation)
    {
        if (Mesh_segmentation->objectName().isEmpty())
            Mesh_segmentation->setObjectName(QStringLiteral("Mesh_segmentation"));
        Mesh_segmentation->resize(352, 309);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        Number_of_rays_label = new QLabel(groupBox_2);
        Number_of_rays_label->setObjectName(QStringLiteral("Number_of_rays_label"));
        Number_of_rays_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(Number_of_rays_label, 0, 0, 1, 1);

        Number_of_rays_spin_box = new QSpinBox(groupBox_2);
        Number_of_rays_spin_box->setObjectName(QStringLiteral("Number_of_rays_spin_box"));
        Number_of_rays_spin_box->setValue(25);

        gridLayout_2->addWidget(Number_of_rays_spin_box, 0, 1, 1, 1);

        Cone_angle_label = new QLabel(groupBox_2);
        Cone_angle_label->setObjectName(QStringLiteral("Cone_angle_label"));
        Cone_angle_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(Cone_angle_label, 1, 0, 1, 1);

        Cone_angle_spin_box = new QSpinBox(groupBox_2);
        Cone_angle_spin_box->setObjectName(QStringLiteral("Cone_angle_spin_box"));
        Cone_angle_spin_box->setMaximum(180);
        Cone_angle_spin_box->setValue(120);

        gridLayout_2->addWidget(Cone_angle_spin_box, 1, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Number_of_clusters_spin_box = new QSpinBox(groupBox);
        Number_of_clusters_spin_box->setObjectName(QStringLiteral("Number_of_clusters_spin_box"));
        Number_of_clusters_spin_box->setMinimum(1);
        Number_of_clusters_spin_box->setValue(5);

        gridLayout->addWidget(Number_of_clusters_spin_box, 0, 1, 1, 1);

        Smoothness_label = new QLabel(groupBox);
        Smoothness_label->setObjectName(QStringLiteral("Smoothness_label"));
        Smoothness_label->setLayoutDirection(Qt::LeftToRight);
        Smoothness_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Smoothness_label, 1, 0, 1, 1);

        Number_of_clusters_label = new QLabel(groupBox);
        Number_of_clusters_label->setObjectName(QStringLiteral("Number_of_clusters_label"));
        Number_of_clusters_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Number_of_clusters_label, 0, 0, 1, 1);

        Smoothness_spin_box = new QDoubleSpinBox(groupBox);
        Smoothness_spin_box->setObjectName(QStringLiteral("Smoothness_spin_box"));
        Smoothness_spin_box->setMaximum(10);
        Smoothness_spin_box->setSingleStep(0.01);
        Smoothness_spin_box->setValue(0.26);

        gridLayout->addWidget(Smoothness_spin_box, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        Extract_segments_check_box = new QCheckBox(groupBox);
        Extract_segments_check_box->setObjectName(QStringLiteral("Extract_segments_check_box"));
        Extract_segments_check_box->setChecked(true);

        gridLayout->addWidget(Extract_segments_check_box, 2, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        New_item_label = new QLabel(dockWidgetContents);
        New_item_label->setObjectName(QStringLiteral("New_item_label"));
        New_item_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(New_item_label, 0, 0, 1, 1);

        New_item_check_box = new QCheckBox(dockWidgetContents);
        New_item_check_box->setObjectName(QStringLiteral("New_item_check_box"));

        gridLayout_3->addWidget(New_item_check_box, 0, 1, 1, 1);


        hboxLayout->addLayout(gridLayout_3);

        SDF_button = new QPushButton(dockWidgetContents);
        SDF_button->setObjectName(QStringLiteral("SDF_button"));

        hboxLayout->addWidget(SDF_button);

        Partition_button = new QPushButton(dockWidgetContents);
        Partition_button->setObjectName(QStringLiteral("Partition_button"));

        hboxLayout->addWidget(Partition_button);


        verticalLayout->addLayout(hboxLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Mesh_segmentation->setWidget(dockWidgetContents);

        retranslateUi(Mesh_segmentation);

        QMetaObject::connectSlotsByName(Mesh_segmentation);
    } // setupUi

    void retranslateUi(QDockWidget *Mesh_segmentation)
    {
        Mesh_segmentation->setWindowTitle(QApplication::translate("Mesh_segmentation", "Mesh Segmentation", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Mesh_segmentation", "Shape Diameter Function Parameters", Q_NULLPTR));
        Number_of_rays_label->setText(QApplication::translate("Mesh_segmentation", "Number of rays:", Q_NULLPTR));
        Cone_angle_label->setText(QApplication::translate("Mesh_segmentation", "Cone angle:", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Mesh_segmentation", "Segmentation Parameters", Q_NULLPTR));
        Smoothness_label->setText(QApplication::translate("Mesh_segmentation", "Smoothness:", Q_NULLPTR));
        Number_of_clusters_label->setText(QApplication::translate("Mesh_segmentation", "Number of clusters:", Q_NULLPTR));
        label->setText(QApplication::translate("Mesh_segmentation", "Extract segments:", Q_NULLPTR));
        Extract_segments_check_box->setText(QString());
        New_item_label->setText(QApplication::translate("Mesh_segmentation", "Create new item:", Q_NULLPTR));
        New_item_check_box->setText(QString());
        SDF_button->setText(QApplication::translate("Mesh_segmentation", "Calculate SDF", Q_NULLPTR));
        Partition_button->setText(QApplication::translate("Mesh_segmentation", "Segment", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mesh_segmentation: public Ui_Mesh_segmentation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESH_SEGMENTATION_WIDGET_H

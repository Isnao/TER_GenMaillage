/********************************************************************************
** Form generated from reading UI file 'Point_set_shape_detection_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT_SET_SHAPE_DETECTION_PLUGIN_H
#define UI_POINT_SET_SHAPE_DETECTION_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PointSetShapeDetectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *m_region_growing;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *ransac;
    QCheckBox *planeCB;
    QCheckBox *cylinderCB;
    QCheckBox *torusCB;
    QCheckBox *coneCB;
    QCheckBox *sphereCB;
    QCheckBox *m_regularize;
    QCheckBox *m_generate_structured;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *m_epsilon_field;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *m_normal_tolerance_field;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *m_min_pts_field;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *m_cluster_epsilon_field;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *m_probability_field;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *m_add_property;
    QCheckBox *m_one_colored_point_set;
    QCheckBox *m_point_subsets;
    QCheckBox *m_alpha_shapes;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PointSetShapeDetectionDialog)
    {
        if (PointSetShapeDetectionDialog->objectName().isEmpty())
            PointSetShapeDetectionDialog->setObjectName(QStringLiteral("PointSetShapeDetectionDialog"));
        PointSetShapeDetectionDialog->resize(495, 552);
        verticalLayout = new QVBoxLayout(PointSetShapeDetectionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(PointSetShapeDetectionDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_region_growing = new QRadioButton(groupBox);
        m_region_growing->setObjectName(QStringLiteral("m_region_growing"));
        m_region_growing->setChecked(true);

        verticalLayout_2->addWidget(m_region_growing);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        ransac = new QRadioButton(groupBox);
        ransac->setObjectName(QStringLiteral("ransac"));

        horizontalLayout_8->addWidget(ransac);

        planeCB = new QCheckBox(groupBox);
        planeCB->setObjectName(QStringLiteral("planeCB"));
        planeCB->setEnabled(false);
        planeCB->setChecked(true);

        horizontalLayout_8->addWidget(planeCB);

        cylinderCB = new QCheckBox(groupBox);
        cylinderCB->setObjectName(QStringLiteral("cylinderCB"));
        cylinderCB->setEnabled(false);
        cylinderCB->setChecked(false);

        horizontalLayout_8->addWidget(cylinderCB);

        torusCB = new QCheckBox(groupBox);
        torusCB->setObjectName(QStringLiteral("torusCB"));
        torusCB->setEnabled(false);

        horizontalLayout_8->addWidget(torusCB);

        coneCB = new QCheckBox(groupBox);
        coneCB->setObjectName(QStringLiteral("coneCB"));
        coneCB->setEnabled(false);

        horizontalLayout_8->addWidget(coneCB);

        sphereCB = new QCheckBox(groupBox);
        sphereCB->setObjectName(QStringLiteral("sphereCB"));
        sphereCB->setEnabled(false);

        horizontalLayout_8->addWidget(sphereCB);


        verticalLayout_2->addLayout(horizontalLayout_8);

        m_regularize = new QCheckBox(groupBox);
        m_regularize->setObjectName(QStringLiteral("m_regularize"));
        m_regularize->setChecked(false);

        verticalLayout_2->addWidget(m_regularize);

        m_generate_structured = new QCheckBox(groupBox);
        m_generate_structured->setObjectName(QStringLiteral("m_generate_structured"));

        verticalLayout_2->addWidget(m_generate_structured);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(PointSetShapeDetectionDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        m_epsilon_field = new QDoubleSpinBox(groupBox_2);
        m_epsilon_field->setObjectName(QStringLiteral("m_epsilon_field"));
        m_epsilon_field->setDecimals(8);
        m_epsilon_field->setMinimum(1e-6);
        m_epsilon_field->setMaximum(1e+6);
        m_epsilon_field->setSingleStep(0.001);
        m_epsilon_field->setValue(0.002);

        horizontalLayout_2->addWidget(m_epsilon_field);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_normal_tolerance_field = new QDoubleSpinBox(groupBox_2);
        m_normal_tolerance_field->setObjectName(QStringLiteral("m_normal_tolerance_field"));
        m_normal_tolerance_field->setMinimum(0.01);
        m_normal_tolerance_field->setMaximum(1);
        m_normal_tolerance_field->setSingleStep(0.01);
        m_normal_tolerance_field->setValue(0.9);

        horizontalLayout->addWidget(m_normal_tolerance_field);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        m_min_pts_field = new QSpinBox(groupBox_2);
        m_min_pts_field->setObjectName(QStringLiteral("m_min_pts_field"));
        m_min_pts_field->setMaximum(10000);
        m_min_pts_field->setSingleStep(50);
        m_min_pts_field->setValue(100);

        horizontalLayout_3->addWidget(m_min_pts_field);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        m_cluster_epsilon_field = new QDoubleSpinBox(groupBox_2);
        m_cluster_epsilon_field->setObjectName(QStringLiteral("m_cluster_epsilon_field"));
        m_cluster_epsilon_field->setDecimals(8);
        m_cluster_epsilon_field->setMinimum(1e-6);
        m_cluster_epsilon_field->setMaximum(1e+6);
        m_cluster_epsilon_field->setSingleStep(0.01);
        m_cluster_epsilon_field->setValue(0.02);

        horizontalLayout_4->addWidget(m_cluster_epsilon_field);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(false);

        horizontalLayout_5->addWidget(label_5);

        m_probability_field = new QDoubleSpinBox(groupBox_2);
        m_probability_field->setObjectName(QStringLiteral("m_probability_field"));
        m_probability_field->setEnabled(false);
        m_probability_field->setDecimals(5);
        m_probability_field->setMinimum(1e-5);
        m_probability_field->setMaximum(1);
        m_probability_field->setSingleStep(0.01);
        m_probability_field->setValue(0.05);

        horizontalLayout_5->addWidget(m_probability_field);

        horizontalLayout_5->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(PointSetShapeDetectionDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        m_add_property = new QCheckBox(groupBox_3);
        m_add_property->setObjectName(QStringLiteral("m_add_property"));
        m_add_property->setChecked(true);

        verticalLayout_4->addWidget(m_add_property);

        m_one_colored_point_set = new QCheckBox(groupBox_3);
        m_one_colored_point_set->setObjectName(QStringLiteral("m_one_colored_point_set"));
        m_one_colored_point_set->setChecked(true);

        verticalLayout_4->addWidget(m_one_colored_point_set);

        m_point_subsets = new QCheckBox(groupBox_3);
        m_point_subsets->setObjectName(QStringLiteral("m_point_subsets"));

        verticalLayout_4->addWidget(m_point_subsets);

        m_alpha_shapes = new QCheckBox(groupBox_3);
        m_alpha_shapes->setObjectName(QStringLiteral("m_alpha_shapes"));

        verticalLayout_4->addWidget(m_alpha_shapes);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(PointSetShapeDetectionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PointSetShapeDetectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PointSetShapeDetectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PointSetShapeDetectionDialog, SLOT(reject()));
        QObject::connect(ransac, SIGNAL(toggled(bool)), planeCB, SLOT(setEnabled(bool)));
        QObject::connect(ransac, SIGNAL(toggled(bool)), cylinderCB, SLOT(setEnabled(bool)));
        QObject::connect(ransac, SIGNAL(toggled(bool)), torusCB, SLOT(setEnabled(bool)));
        QObject::connect(ransac, SIGNAL(toggled(bool)), coneCB, SLOT(setEnabled(bool)));
        QObject::connect(ransac, SIGNAL(toggled(bool)), sphereCB, SLOT(setEnabled(bool)));
        QObject::connect(ransac, SIGNAL(toggled(bool)), label_5, SLOT(setEnabled(bool)));
        QObject::connect(ransac, SIGNAL(toggled(bool)), m_probability_field, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(PointSetShapeDetectionDialog);
    } // setupUi

    void retranslateUi(QDialog *PointSetShapeDetectionDialog)
    {
        PointSetShapeDetectionDialog->setWindowTitle(QApplication::translate("PointSetShapeDetectionDialog", "Shape Detection", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PointSetShapeDetectionDialog", "Algorithm", Q_NULLPTR));
        m_region_growing->setText(QApplication::translate("PointSetShapeDetectionDialog", "Region growing", Q_NULLPTR));
        ransac->setText(QApplication::translate("PointSetShapeDetectionDialog", "RANSAC", Q_NULLPTR));
        planeCB->setText(QApplication::translate("PointSetShapeDetectionDialog", "Plane", Q_NULLPTR));
        cylinderCB->setText(QApplication::translate("PointSetShapeDetectionDialog", "Cylinder", Q_NULLPTR));
        torusCB->setText(QApplication::translate("PointSetShapeDetectionDialog", "Torus", Q_NULLPTR));
        coneCB->setText(QApplication::translate("PointSetShapeDetectionDialog", "Cone", Q_NULLPTR));
        sphereCB->setText(QApplication::translate("PointSetShapeDetectionDialog", "Sphere", Q_NULLPTR));
        m_regularize->setText(QApplication::translate("PointSetShapeDetectionDialog", "Regularize Planes", Q_NULLPTR));
        m_generate_structured->setText(QApplication::translate("PointSetShapeDetectionDialog", "Generate structured point cloud", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("PointSetShapeDetectionDialog", "Parameters", Q_NULLPTR));
        label_2->setText(QApplication::translate("PointSetShapeDetectionDialog", "Epsilon:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_epsilon_field->setToolTip(QApplication::translate("PointSetShapeDetectionDialog", "Fitting tolerance in Euclidean distance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("PointSetShapeDetectionDialog", "Normal Tolerance:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_normal_tolerance_field->setToolTip(QApplication::translate("PointSetShapeDetectionDialog", "Normal angle deviation tolerance as cosine of the angle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("PointSetShapeDetectionDialog", "Minimum Number of Items:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_min_pts_field->setToolTip(QApplication::translate("PointSetShapeDetectionDialog", "Smallest allowed size for a primitive", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("PointSetShapeDetectionDialog", "Connectivity Epsilon:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_cluster_epsilon_field->setToolTip(QApplication::translate("PointSetShapeDetectionDialog", "Maximum world distance between points on a shape to be considered as connected", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("PointSetShapeDetectionDialog", "Search Rigorosity (Probability):", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_probability_field->setToolTip(QApplication::translate("PointSetShapeDetectionDialog", "Probability to overlook the largest primitive in one extraction iteration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("PointSetShapeDetectionDialog", "Output", Q_NULLPTR));
        m_add_property->setText(QApplication::translate("PointSetShapeDetectionDialog", "Add a \"shape\" property to the input item", Q_NULLPTR));
        m_one_colored_point_set->setText(QApplication::translate("PointSetShapeDetectionDialog", "Generate one colored point set", Q_NULLPTR));
        m_point_subsets->setText(QApplication::translate("PointSetShapeDetectionDialog", "Generate N point subsets", Q_NULLPTR));
        m_alpha_shapes->setText(QApplication::translate("PointSetShapeDetectionDialog", "Generate N alpha shapes (planes only)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PointSetShapeDetectionDialog: public Ui_PointSetShapeDetectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT_SET_SHAPE_DETECTION_PLUGIN_H

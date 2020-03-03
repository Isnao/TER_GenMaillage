/********************************************************************************
** Form generated from reading UI file 'Mean_curvature_flow_skeleton_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEAN_CURVATURE_FLOW_SKELETON_PLUGIN_H
#define UI_MEAN_CURVATURE_FLOW_SKELETON_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mean_curvature_flow_skeleton_plugin
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *is_medially_centered;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *helpButton;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_omega_H;
    QDoubleSpinBox *omega_H;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_omega_P;
    QDoubleSpinBox *omega_P;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_min_edge_length;
    QDoubleSpinBox *min_edge_length;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_delta_area;
    QDoubleSpinBox *delta_area;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_run;
    QPushButton *pushButton_converge;
    QPushButton *pushButton_skeletonize;
    QPushButton *pushButton_segment;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_contract;
    QPushButton *pushButton_collapse;
    QPushButton *pushButton_split;
    QPushButton *pushButton_degeneracy;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *Mean_curvature_flow_skeleton_plugin)
    {
        if (Mean_curvature_flow_skeleton_plugin->objectName().isEmpty())
            Mean_curvature_flow_skeleton_plugin->setObjectName(QStringLiteral("Mean_curvature_flow_skeleton_plugin"));
        Mean_curvature_flow_skeleton_plugin->resize(483, 279);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        is_medially_centered = new QCheckBox(dockWidgetContents);
        is_medially_centered->setObjectName(QStringLiteral("is_medially_centered"));

        verticalLayout_3->addWidget(is_medially_centered);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        helpButton = new QPushButton(dockWidgetContents);
        helpButton->setObjectName(QStringLiteral("helpButton"));

        horizontalLayout_7->addWidget(helpButton);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_omega_H = new QLabel(dockWidgetContents);
        label_omega_H->setObjectName(QStringLiteral("label_omega_H"));

        horizontalLayout_2->addWidget(label_omega_H);

        omega_H = new QDoubleSpinBox(dockWidgetContents);
        omega_H->setObjectName(QStringLiteral("omega_H"));

        horizontalLayout_2->addWidget(omega_H);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_omega_P = new QLabel(dockWidgetContents);
        label_omega_P->setObjectName(QStringLiteral("label_omega_P"));

        horizontalLayout_3->addWidget(label_omega_P);

        omega_P = new QDoubleSpinBox(dockWidgetContents);
        omega_P->setObjectName(QStringLiteral("omega_P"));

        horizontalLayout_3->addWidget(omega_P);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_min_edge_length = new QLabel(dockWidgetContents);
        label_min_edge_length->setObjectName(QStringLiteral("label_min_edge_length"));

        horizontalLayout_4->addWidget(label_min_edge_length);

        min_edge_length = new QDoubleSpinBox(dockWidgetContents);
        min_edge_length->setObjectName(QStringLiteral("min_edge_length"));

        horizontalLayout_4->addWidget(min_edge_length);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_delta_area = new QLabel(dockWidgetContents);
        label_delta_area->setObjectName(QStringLiteral("label_delta_area"));

        horizontalLayout_5->addWidget(label_delta_area);

        delta_area = new QDoubleSpinBox(dockWidgetContents);
        delta_area->setObjectName(QStringLiteral("delta_area"));

        horizontalLayout_5->addWidget(delta_area);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_run = new QPushButton(dockWidgetContents);
        pushButton_run->setObjectName(QStringLiteral("pushButton_run"));

        verticalLayout->addWidget(pushButton_run);

        pushButton_converge = new QPushButton(dockWidgetContents);
        pushButton_converge->setObjectName(QStringLiteral("pushButton_converge"));

        verticalLayout->addWidget(pushButton_converge);

        pushButton_skeletonize = new QPushButton(dockWidgetContents);
        pushButton_skeletonize->setObjectName(QStringLiteral("pushButton_skeletonize"));

        verticalLayout->addWidget(pushButton_skeletonize);

        pushButton_segment = new QPushButton(dockWidgetContents);
        pushButton_segment->setObjectName(QStringLiteral("pushButton_segment"));

        verticalLayout->addWidget(pushButton_segment);


        horizontalLayout_6->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_6);

        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_contract = new QPushButton(dockWidgetContents);
        pushButton_contract->setObjectName(QStringLiteral("pushButton_contract"));

        horizontalLayout->addWidget(pushButton_contract);

        pushButton_collapse = new QPushButton(dockWidgetContents);
        pushButton_collapse->setObjectName(QStringLiteral("pushButton_collapse"));

        horizontalLayout->addWidget(pushButton_collapse);

        pushButton_split = new QPushButton(dockWidgetContents);
        pushButton_split->setObjectName(QStringLiteral("pushButton_split"));

        horizontalLayout->addWidget(pushButton_split);

        pushButton_degeneracy = new QPushButton(dockWidgetContents);
        pushButton_degeneracy->setObjectName(QStringLiteral("pushButton_degeneracy"));

        horizontalLayout->addWidget(pushButton_degeneracy);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        Mean_curvature_flow_skeleton_plugin->setWidget(dockWidgetContents);

        retranslateUi(Mean_curvature_flow_skeleton_plugin);

        QMetaObject::connectSlotsByName(Mean_curvature_flow_skeleton_plugin);
    } // setupUi

    void retranslateUi(QDockWidget *Mean_curvature_flow_skeleton_plugin)
    {
        Mean_curvature_flow_skeleton_plugin->setWindowTitle(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "DockWidget", Q_NULLPTR));
        is_medially_centered->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "Is medially centered", Q_NULLPTR));
        helpButton->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "Help", Q_NULLPTR));
        label_omega_H->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "Quality Speed Tradeoff", Q_NULLPTR));
        label_omega_P->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "Medially Centered Speed Tradeoff", Q_NULLPTR));
        label_min_edge_length->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "Minimum Edge Length", Q_NULLPTR));
        label_delta_area->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "Area Variation Factor ", Q_NULLPTR));
        pushButton_run->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "Run one iteration", Q_NULLPTR));
        pushButton_converge->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "Run to convergence", Q_NULLPTR));
        pushButton_skeletonize->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "Skeletonize", Q_NULLPTR));
        pushButton_segment->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "Segment", Q_NULLPTR));
        label->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "Steps of an iteration:", Q_NULLPTR));
        pushButton_contract->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", " 1 - Contract", Q_NULLPTR));
        pushButton_collapse->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "2 - Collapse", Q_NULLPTR));
        pushButton_split->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "3 - Split", Q_NULLPTR));
        pushButton_degeneracy->setText(QApplication::translate("Mean_curvature_flow_skeleton_plugin", "4 - Degeneracy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mean_curvature_flow_skeleton_plugin: public Ui_Mean_curvature_flow_skeleton_plugin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEAN_CURVATURE_FLOW_SKELETON_PLUGIN_H

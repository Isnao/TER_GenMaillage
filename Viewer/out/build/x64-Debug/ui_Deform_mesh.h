/********************************************************************************
** Form generated from reading UI file 'Deform_mesh.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFORM_MESH_H
#define UI_DEFORM_MESH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeformMesh
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_13;
    QGroupBox *RCgroup;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *ROIRadioButton;
    QRadioButton *CtrlVertRadioButton;
    QVBoxLayout *RingLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *BrushSpinBoxRoi;
    QSpinBox *BrushSpinBoxCtrlVert;
    QGroupBox *InsertEraseGroup;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *InsertRadioButton;
    QRadioButton *EraseRadioButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *SelectAllVerticesPushButton;
    QPushButton *ClearROIPushButton;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QSpinBox *Threshold_size_spin_box;
    QPushButton *Get_minimum_button;
    QPushButton *Select_isolated_components_button;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *RemeshingCheckBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *remeshingEdgeLengthInput_checkBox;
    QDoubleSpinBox *remeshing_edge_length_spinbox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QSpinBox *remeshing_iterations_spinbox;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *PrevCtrlVertPushButton;
    QPushButton *NextCtrlVertPushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *AddCtrlVertPushButton;
    QPushButton *DeleteCtrlVertPushButton;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout_2;
    QCheckBox *ShowROICheckBox;
    QPushButton *ReadROIPushButton;
    QPushButton *SaveROIPushButton;
    QPushButton *importSelectionPushButton;
    QCheckBox *ShowAsSphereCheckBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *ActivatePivotingCheckBox;
    QCheckBox *ActivateFixedPlaneCheckBox;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *DiscardChangesPushButton;
    QPushButton *ApplyAndClosePushButton;
    QPushButton *OverwritePushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DeformMesh)
    {
        if (DeformMesh->objectName().isEmpty())
            DeformMesh->setObjectName(QStringLiteral("DeformMesh"));
        DeformMesh->resize(547, 347);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(dockWidgetContents);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_9 = new QVBoxLayout(tab);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        RCgroup = new QGroupBox(tab);
        RCgroup->setObjectName(QStringLiteral("RCgroup"));
        verticalLayout_7 = new QVBoxLayout(RCgroup);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        ROIRadioButton = new QRadioButton(RCgroup);
        ROIRadioButton->setObjectName(QStringLiteral("ROIRadioButton"));
        ROIRadioButton->setChecked(true);

        verticalLayout_7->addWidget(ROIRadioButton);

        CtrlVertRadioButton = new QRadioButton(RCgroup);
        CtrlVertRadioButton->setObjectName(QStringLiteral("CtrlVertRadioButton"));

        verticalLayout_7->addWidget(CtrlVertRadioButton);


        horizontalLayout_13->addWidget(RCgroup);

        RingLayout = new QVBoxLayout();
        RingLayout->setObjectName(QStringLiteral("RingLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_5->addWidget(label_2);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        BrushSpinBoxRoi = new QSpinBox(tab);
        BrushSpinBoxRoi->setObjectName(QStringLiteral("BrushSpinBoxRoi"));

        verticalLayout_2->addWidget(BrushSpinBoxRoi);

        BrushSpinBoxCtrlVert = new QSpinBox(tab);
        BrushSpinBoxCtrlVert->setObjectName(QStringLiteral("BrushSpinBoxCtrlVert"));

        verticalLayout_2->addWidget(BrushSpinBoxCtrlVert);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_4->setStretch(1, 1);

        RingLayout->addLayout(horizontalLayout_4);


        horizontalLayout_13->addLayout(RingLayout);

        InsertEraseGroup = new QGroupBox(tab);
        InsertEraseGroup->setObjectName(QStringLiteral("InsertEraseGroup"));
        verticalLayout_8 = new QVBoxLayout(InsertEraseGroup);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        InsertRadioButton = new QRadioButton(InsertEraseGroup);
        InsertRadioButton->setObjectName(QStringLiteral("InsertRadioButton"));
        InsertRadioButton->setChecked(true);

        verticalLayout_8->addWidget(InsertRadioButton);

        EraseRadioButton = new QRadioButton(InsertEraseGroup);
        EraseRadioButton->setObjectName(QStringLiteral("EraseRadioButton"));

        verticalLayout_8->addWidget(EraseRadioButton);


        horizontalLayout_13->addWidget(InsertEraseGroup);


        verticalLayout_9->addLayout(horizontalLayout_13);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        SelectAllVerticesPushButton = new QPushButton(tab);
        SelectAllVerticesPushButton->setObjectName(QStringLiteral("SelectAllVerticesPushButton"));

        horizontalLayout_3->addWidget(SelectAllVerticesPushButton);

        ClearROIPushButton = new QPushButton(tab);
        ClearROIPushButton->setObjectName(QStringLiteral("ClearROIPushButton"));

        horizontalLayout_3->addWidget(ClearROIPushButton);


        verticalLayout_9->addLayout(horizontalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        Threshold_size_spin_box = new QSpinBox(tab);
        Threshold_size_spin_box->setObjectName(QStringLiteral("Threshold_size_spin_box"));
        Threshold_size_spin_box->setMaximum(999999999);
        Threshold_size_spin_box->setValue(8);

        horizontalLayout_8->addWidget(Threshold_size_spin_box);

        Get_minimum_button = new QPushButton(tab);
        Get_minimum_button->setObjectName(QStringLiteral("Get_minimum_button"));

        horizontalLayout_8->addWidget(Get_minimum_button);

        horizontalLayout_8->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_8);

        Select_isolated_components_button = new QPushButton(tab);
        Select_isolated_components_button->setObjectName(QStringLiteral("Select_isolated_components_button"));

        verticalLayout_4->addWidget(Select_isolated_components_button);


        verticalLayout_9->addLayout(verticalLayout_4);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_6 = new QHBoxLayout(tab_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        RemeshingCheckBox = new QCheckBox(tab_2);
        RemeshingCheckBox->setObjectName(QStringLiteral("RemeshingCheckBox"));
        RemeshingCheckBox->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_12->addWidget(RemeshingCheckBox);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        remeshingEdgeLengthInput_checkBox = new QCheckBox(tab_2);
        remeshingEdgeLengthInput_checkBox->setObjectName(QStringLiteral("remeshingEdgeLengthInput_checkBox"));
        remeshingEdgeLengthInput_checkBox->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_7->addWidget(remeshingEdgeLengthInput_checkBox);

        remeshing_edge_length_spinbox = new QDoubleSpinBox(tab_2);
        remeshing_edge_length_spinbox->setObjectName(QStringLiteral("remeshing_edge_length_spinbox"));

        horizontalLayout_7->addWidget(remeshing_edge_length_spinbox);

        horizontalLayout_7->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_4);

        remeshing_iterations_spinbox = new QSpinBox(tab_2);
        remeshing_iterations_spinbox->setObjectName(QStringLiteral("remeshing_iterations_spinbox"));

        horizontalLayout_9->addWidget(remeshing_iterations_spinbox);

        horizontalLayout_9->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_9);


        horizontalLayout_12->addLayout(verticalLayout_6);


        horizontalLayout_6->addLayout(horizontalLayout_12);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalLayout_10 = new QHBoxLayout(tab_3);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        PrevCtrlVertPushButton = new QPushButton(tab_3);
        PrevCtrlVertPushButton->setObjectName(QStringLiteral("PrevCtrlVertPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PrevCtrlVertPushButton->sizePolicy().hasHeightForWidth());
        PrevCtrlVertPushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(PrevCtrlVertPushButton);

        NextCtrlVertPushButton = new QPushButton(tab_3);
        NextCtrlVertPushButton->setObjectName(QStringLiteral("NextCtrlVertPushButton"));

        horizontalLayout->addWidget(NextCtrlVertPushButton);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        AddCtrlVertPushButton = new QPushButton(tab_3);
        AddCtrlVertPushButton->setObjectName(QStringLiteral("AddCtrlVertPushButton"));

        horizontalLayout_2->addWidget(AddCtrlVertPushButton);

        DeleteCtrlVertPushButton = new QPushButton(tab_3);
        DeleteCtrlVertPushButton->setObjectName(QStringLiteral("DeleteCtrlVertPushButton"));

        horizontalLayout_2->addWidget(DeleteCtrlVertPushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_10->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        horizontalLayout_5 = new QHBoxLayout(tab_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        ShowROICheckBox = new QCheckBox(tab_4);
        ShowROICheckBox->setObjectName(QStringLiteral("ShowROICheckBox"));
        ShowROICheckBox->setChecked(true);

        gridLayout_2->addWidget(ShowROICheckBox, 0, 0, 1, 1);

        ReadROIPushButton = new QPushButton(tab_4);
        ReadROIPushButton->setObjectName(QStringLiteral("ReadROIPushButton"));

        gridLayout_2->addWidget(ReadROIPushButton, 0, 1, 1, 1);

        SaveROIPushButton = new QPushButton(tab_4);
        SaveROIPushButton->setObjectName(QStringLiteral("SaveROIPushButton"));

        gridLayout_2->addWidget(SaveROIPushButton, 1, 1, 1, 1);

        importSelectionPushButton = new QPushButton(tab_4);
        importSelectionPushButton->setObjectName(QStringLiteral("importSelectionPushButton"));

        gridLayout_2->addWidget(importSelectionPushButton, 2, 1, 1, 1);

        ShowAsSphereCheckBox = new QCheckBox(tab_4);
        ShowAsSphereCheckBox->setObjectName(QStringLiteral("ShowAsSphereCheckBox"));
        ShowAsSphereCheckBox->setChecked(false);

        gridLayout_2->addWidget(ShowAsSphereCheckBox, 1, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_2);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        line = new QFrame(dockWidgetContents);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        ActivatePivotingCheckBox = new QCheckBox(dockWidgetContents);
        ActivatePivotingCheckBox->setObjectName(QStringLiteral("ActivatePivotingCheckBox"));

        horizontalLayout_11->addWidget(ActivatePivotingCheckBox);

        ActivateFixedPlaneCheckBox = new QCheckBox(dockWidgetContents);
        ActivateFixedPlaneCheckBox->setObjectName(QStringLiteral("ActivateFixedPlaneCheckBox"));

        horizontalLayout_11->addWidget(ActivateFixedPlaneCheckBox);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        DiscardChangesPushButton = new QPushButton(dockWidgetContents);
        DiscardChangesPushButton->setObjectName(QStringLiteral("DiscardChangesPushButton"));

        horizontalLayout_14->addWidget(DiscardChangesPushButton);

        ApplyAndClosePushButton = new QPushButton(dockWidgetContents);
        ApplyAndClosePushButton->setObjectName(QStringLiteral("ApplyAndClosePushButton"));
        sizePolicy.setHeightForWidth(ApplyAndClosePushButton->sizePolicy().hasHeightForWidth());
        ApplyAndClosePushButton->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(ApplyAndClosePushButton);

        OverwritePushButton = new QPushButton(dockWidgetContents);
        OverwritePushButton->setObjectName(QStringLiteral("OverwritePushButton"));
        sizePolicy.setHeightForWidth(OverwritePushButton->sizePolicy().hasHeightForWidth());
        OverwritePushButton->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(OverwritePushButton);


        verticalLayout->addLayout(horizontalLayout_14);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(4, 1);
        DeformMesh->setWidget(dockWidgetContents);

        retranslateUi(DeformMesh);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DeformMesh);
    } // setupUi

    void retranslateUi(QDockWidget *DeformMesh)
    {
        DeformMesh->setWindowTitle(QApplication::translate("DeformMesh", "Surface Mesh Deformation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ROIRadioButton->setToolTip(QApplication::translate("DeformMesh", "Use Shift + Left Click to paint ROI vertices", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ROIRadioButton->setText(QApplication::translate("DeformMesh", "ROI", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CtrlVertRadioButton->setToolTip(QApplication::translate("DeformMesh", "Use Shift + Left Click to paint control vertices", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CtrlVertRadioButton->setText(QApplication::translate("DeformMesh", "Control vertices", Q_NULLPTR));
        label->setText(QApplication::translate("DeformMesh", "Brush Size ROI:", Q_NULLPTR));
        label_2->setText(QApplication::translate("DeformMesh", "Control Vertices Brush Size:", Q_NULLPTR));
        InsertRadioButton->setText(QApplication::translate("DeformMesh", "Insertion", Q_NULLPTR));
        EraseRadioButton->setText(QApplication::translate("DeformMesh", "Removal", Q_NULLPTR));
        SelectAllVerticesPushButton->setText(QApplication::translate("DeformMesh", "Set All Vertices as ROI", Q_NULLPTR));
        ClearROIPushButton->setText(QApplication::translate("DeformMesh", "Clear ROI", Q_NULLPTR));
        label_3->setText(QApplication::translate("DeformMesh", "Isolated Component Size:", Q_NULLPTR));
        Get_minimum_button->setText(QApplication::translate("DeformMesh", "Get Minimum", Q_NULLPTR));
        Select_isolated_components_button->setText(QApplication::translate("DeformMesh", "Select Isolated Components Below Threshold", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DeformMesh", "Selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RemeshingCheckBox->setToolTip(QApplication::translate("DeformMesh", "Warning : after remeshing all ROI and control vertices will be unselected. \"Discard changes\" will be unavailable.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RemeshingCheckBox->setText(QApplication::translate("DeformMesh", "Remesh after deformation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        remeshingEdgeLengthInput_checkBox->setToolTip(QApplication::translate("DeformMesh", "If unchecked, automatic value is used (the average edge length at ROI boundary)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        remeshingEdgeLengthInput_checkBox->setText(QApplication::translate("DeformMesh", "Target edge length", Q_NULLPTR));
        label_4->setText(QApplication::translate("DeformMesh", "Nb. iterations", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DeformMesh", "Remeshing", Q_NULLPTR));
        PrevCtrlVertPushButton->setText(QApplication::translate("DeformMesh", "<<", Q_NULLPTR));
        NextCtrlVertPushButton->setText(QApplication::translate("DeformMesh", ">>", Q_NULLPTR));
        AddCtrlVertPushButton->setText(QApplication::translate("DeformMesh", "Create new", Q_NULLPTR));
        DeleteCtrlVertPushButton->setText(QApplication::translate("DeformMesh", "Delete ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("DeformMesh", "Groups", Q_NULLPTR));
        ShowROICheckBox->setText(QApplication::translate("DeformMesh", "Show Non Control Vertices", Q_NULLPTR));
        ReadROIPushButton->setText(QApplication::translate("DeformMesh", "Load ROI / Control Vertices", Q_NULLPTR));
        SaveROIPushButton->setText(QApplication::translate("DeformMesh", "Save ROI / Control Vertices", Q_NULLPTR));
        importSelectionPushButton->setText(QApplication::translate("DeformMesh", "Import Selection from Selection_item", Q_NULLPTR));
        ShowAsSphereCheckBox->setText(QApplication::translate("DeformMesh", "Show As Sphere", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("DeformMesh", "Display and IO", Q_NULLPTR));
        ActivatePivotingCheckBox->setText(QApplication::translate("DeformMesh", "Activate Pivoting ", Q_NULLPTR));
        ActivateFixedPlaneCheckBox->setText(QApplication::translate("DeformMesh", "Activate Fixed Plane Deformation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DiscardChangesPushButton->setToolTip(QApplication::translate("DeformMesh", "Reset mesh to last version saved by \"Overwrite Initial Geometry\". Not available when Remeshing is ON.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DiscardChangesPushButton->setText(QApplication::translate("DeformMesh", "Discard changes", Q_NULLPTR));
        ApplyAndClosePushButton->setText(QApplication::translate("DeformMesh", "Apply and Close", Q_NULLPTR));
        OverwritePushButton->setText(QApplication::translate("DeformMesh", "Overwrite Initial Geometry", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeformMesh: public Ui_DeformMesh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFORM_MESH_H

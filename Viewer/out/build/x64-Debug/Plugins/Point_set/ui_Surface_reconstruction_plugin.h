/********************************************************************************
** Form generated from reading UI file 'Surface_reconstruction_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SURFACE_RECONSTRUCTION_PLUGIN_H
#define UI_SURFACE_RECONSTRUCTION_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SurfaceReconstructionDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QLabel *label;
    QDoubleSpinBox *m_radiusRatioBound;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_8;
    QDoubleSpinBox *m_longestEdge;
    QLabel *label_8;
    QDoubleSpinBox *m_betaAngle;
    QDoubleSpinBox *m_sampling;
    QCheckBox *m_use_structuring;
    QSpacerItem *verticalSpacer_7;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *m_conjugate_gradient;
    QRadioButton *m_simplicial_ldlt;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *m_marching_tets;
    QRadioButton *m_surface_mesher;
    QFrame *m_surface_mesh_parameters;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QDoubleSpinBox *m_inputDistance;
    QLabel *label_5;
    QDoubleSpinBox *m_inputAngle;
    QDoubleSpinBox *m_inputRadius;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_6;
    QCheckBox *m_inputTwoPasses;
    QCheckBox *m_doNotFillHoles;
    QSpacerItem *verticalSpacer_10;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *m_iterations;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *m_scalespace_jet;
    QFrame *frame_jet;
    QFormLayout *formLayout_3;
    QLabel *label_13;
    QSpinBox *m_neighbors;
    QLabel *degreeFittingLabel;
    QSpinBox *m_fitting;
    QLabel *degreeMongeLabel;
    QSpinBox *m_monge;
    QSpacerItem *verticalSpacer_4;
    QRadioButton *m_scalespace_pca;
    QFrame *frame_pca;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *m_neighborhood_size;
    QLabel *label_4;
    QSpinBox *m_samples;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *m_genSmooth;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *m_scalespace_af;
    QFrame *frame_af;
    QFormLayout *formLayout_4;
    QLabel *label_14;
    QDoubleSpinBox *m_longestEdge_2;
    QDoubleSpinBox *m_betaAngle_2;
    QDoubleSpinBox *m_radiusRatioBound_2;
    QLabel *label_16;
    QLabel *label_15;
    QSpacerItem *verticalSpacer;
    QRadioButton *m_scalespace_as;
    QFrame *frame_as;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *m_genShells;
    QCheckBox *m_forceManifold;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_11;
    QGridLayout *gridLayout;
    QDoubleSpinBox *m_data_coverage;
    QDoubleSpinBox *m_data_fitting;
    QLabel *label_17;
    QLabel *label_12;
    QLabel *label_11;
    QDoubleSpinBox *m_model_complexity;
    QLabel *label_19;
    QComboBox *m_solver;
    QSpacerItem *verticalSpacer_12;
    QLabel *label_18;
    QSpacerItem *verticalSpacer_13;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SurfaceReconstructionDialog)
    {
        if (SurfaceReconstructionDialog->objectName().isEmpty())
            SurfaceReconstructionDialog->setObjectName(QStringLiteral("SurfaceReconstructionDialog"));
        SurfaceReconstructionDialog->resize(404, 482);
        verticalLayout_7 = new QVBoxLayout(SurfaceReconstructionDialog);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        tabWidget = new QTabWidget(SurfaceReconstructionDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        m_radiusRatioBound = new QDoubleSpinBox(tab);
        m_radiusRatioBound->setObjectName(QStringLiteral("m_radiusRatioBound"));
        m_radiusRatioBound->setMinimum(0.01);
        m_radiusRatioBound->setMaximum(1000);
        m_radiusRatioBound->setValue(5);

        gridLayout_3->addWidget(m_radiusRatioBound, 2, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_9, 7, 1, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 3, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_8, 0, 1, 1, 1);

        m_longestEdge = new QDoubleSpinBox(tab);
        m_longestEdge->setObjectName(QStringLiteral("m_longestEdge"));
        m_longestEdge->setMaximum(1e+9);

        gridLayout_3->addWidget(m_longestEdge, 1, 1, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setEnabled(false);

        gridLayout_3->addWidget(label_8, 6, 0, 1, 1);

        m_betaAngle = new QDoubleSpinBox(tab);
        m_betaAngle->setObjectName(QStringLiteral("m_betaAngle"));
        m_betaAngle->setMaximum(150);
        m_betaAngle->setValue(30);

        gridLayout_3->addWidget(m_betaAngle, 3, 1, 1, 1);

        m_sampling = new QDoubleSpinBox(tab);
        m_sampling->setObjectName(QStringLiteral("m_sampling"));
        m_sampling->setEnabled(false);
        m_sampling->setMinimum(0.1);
        m_sampling->setMaximum(1e+9);
        m_sampling->setSingleStep(0.1);

        gridLayout_3->addWidget(m_sampling, 6, 1, 1, 1);

        m_use_structuring = new QCheckBox(tab);
        m_use_structuring->setObjectName(QStringLiteral("m_use_structuring"));
        m_use_structuring->setEnabled(true);

        gridLayout_3->addWidget(m_use_structuring, 5, 0, 1, 2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 4, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_10 = new QVBoxLayout(tab_2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        m_conjugate_gradient = new QRadioButton(groupBox_3);
        m_conjugate_gradient->setObjectName(QStringLiteral("m_conjugate_gradient"));
        m_conjugate_gradient->setChecked(true);

        verticalLayout_4->addWidget(m_conjugate_gradient);

        m_simplicial_ldlt = new QRadioButton(groupBox_3);
        m_simplicial_ldlt->setObjectName(QStringLiteral("m_simplicial_ldlt"));

        verticalLayout_4->addWidget(m_simplicial_ldlt);


        verticalLayout_10->addWidget(groupBox_3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_5);

        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_8 = new QVBoxLayout(groupBox_4);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        m_marching_tets = new QRadioButton(groupBox_4);
        m_marching_tets->setObjectName(QStringLiteral("m_marching_tets"));
        m_marching_tets->setChecked(true);

        verticalLayout_8->addWidget(m_marching_tets);

        m_surface_mesher = new QRadioButton(groupBox_4);
        m_surface_mesher->setObjectName(QStringLiteral("m_surface_mesher"));

        verticalLayout_8->addWidget(m_surface_mesher);

        m_surface_mesh_parameters = new QFrame(groupBox_4);
        m_surface_mesh_parameters->setObjectName(QStringLiteral("m_surface_mesh_parameters"));
        m_surface_mesh_parameters->setEnabled(false);
        horizontalLayout_5 = new QHBoxLayout(m_surface_mesh_parameters);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_6 = new QLabel(m_surface_mesh_parameters);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        m_inputDistance = new QDoubleSpinBox(m_surface_mesh_parameters);
        m_inputDistance->setObjectName(QStringLiteral("m_inputDistance"));
        m_inputDistance->setDecimals(6);
        m_inputDistance->setMinimum(0.01);
        m_inputDistance->setMaximum(100);
        m_inputDistance->setSingleStep(0.01);
        m_inputDistance->setValue(0.25);

        gridLayout_2->addWidget(m_inputDistance, 2, 1, 1, 1);

        label_5 = new QLabel(m_surface_mesh_parameters);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        m_inputAngle = new QDoubleSpinBox(m_surface_mesh_parameters);
        m_inputAngle->setObjectName(QStringLiteral("m_inputAngle"));
        m_inputAngle->setMinimum(1);
        m_inputAngle->setMaximum(30);
        m_inputAngle->setValue(20);

        gridLayout_2->addWidget(m_inputAngle, 0, 1, 1, 1);

        m_inputRadius = new QDoubleSpinBox(m_surface_mesh_parameters);
        m_inputRadius->setObjectName(QStringLiteral("m_inputRadius"));
        m_inputRadius->setDecimals(0);
        m_inputRadius->setMinimum(1);
        m_inputRadius->setMaximum(1000);
        m_inputRadius->setSingleStep(1);
        m_inputRadius->setValue(100);

        gridLayout_2->addWidget(m_inputRadius, 1, 1, 1, 1);

        label_7 = new QLabel(m_surface_mesh_parameters);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_2);


        verticalLayout_8->addWidget(m_surface_mesh_parameters);


        verticalLayout_10->addWidget(groupBox_4);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_6);

        m_inputTwoPasses = new QCheckBox(tab_2);
        m_inputTwoPasses->setObjectName(QStringLiteral("m_inputTwoPasses"));

        verticalLayout_10->addWidget(m_inputTwoPasses);

        m_doNotFillHoles = new QCheckBox(tab_2);
        m_doNotFillHoles->setObjectName(QStringLiteral("m_doNotFillHoles"));

        verticalLayout_10->addWidget(m_doNotFillHoles);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_10);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout = new QVBoxLayout(tab_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget_2 = new QTabWidget(tab_3);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_11 = new QVBoxLayout(tab_4);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        m_iterations = new QSpinBox(tab_4);
        m_iterations->setObjectName(QStringLiteral("m_iterations"));
        m_iterations->setMinimum(1);
        m_iterations->setMaximum(1000000);
        m_iterations->setValue(4);

        horizontalLayout_2->addWidget(m_iterations);


        verticalLayout_11->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);

        m_scalespace_jet = new QRadioButton(tab_4);
        m_scalespace_jet->setObjectName(QStringLiteral("m_scalespace_jet"));
        m_scalespace_jet->setChecked(true);

        verticalLayout_11->addWidget(m_scalespace_jet);

        frame_jet = new QFrame(tab_4);
        frame_jet->setObjectName(QStringLiteral("frame_jet"));
        frame_jet->setFrameShape(QFrame::StyledPanel);
        frame_jet->setFrameShadow(QFrame::Raised);
        formLayout_3 = new QFormLayout(frame_jet);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_13 = new QLabel(frame_jet);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_13);

        m_neighbors = new QSpinBox(frame_jet);
        m_neighbors->setObjectName(QStringLiteral("m_neighbors"));
        m_neighbors->setMinimum(1);
        m_neighbors->setMaximum(100000);
        m_neighbors->setValue(12);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, m_neighbors);

        degreeFittingLabel = new QLabel(frame_jet);
        degreeFittingLabel->setObjectName(QStringLiteral("degreeFittingLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, degreeFittingLabel);

        m_fitting = new QSpinBox(frame_jet);
        m_fitting->setObjectName(QStringLiteral("m_fitting"));
        m_fitting->setMinimum(1);
        m_fitting->setMaximum(2);
        m_fitting->setValue(2);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, m_fitting);

        degreeMongeLabel = new QLabel(frame_jet);
        degreeMongeLabel->setObjectName(QStringLiteral("degreeMongeLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, degreeMongeLabel);

        m_monge = new QSpinBox(frame_jet);
        m_monge->setObjectName(QStringLiteral("m_monge"));
        m_monge->setMinimum(1);
        m_monge->setMaximum(2);
        m_monge->setValue(2);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, m_monge);


        verticalLayout_11->addWidget(frame_jet);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_4);

        m_scalespace_pca = new QRadioButton(tab_4);
        m_scalespace_pca->setObjectName(QStringLiteral("m_scalespace_pca"));

        verticalLayout_11->addWidget(m_scalespace_pca);

        frame_pca = new QFrame(tab_4);
        frame_pca->setObjectName(QStringLiteral("frame_pca"));
        frame_pca->setEnabled(false);
        frame_pca->setFrameShape(QFrame::StyledPanel);
        frame_pca->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame_pca);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(frame_pca);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        m_neighborhood_size = new QSpinBox(frame_pca);
        m_neighborhood_size->setObjectName(QStringLiteral("m_neighborhood_size"));
        m_neighborhood_size->setMinimum(0);
        m_neighborhood_size->setMaximum(100000);
        m_neighborhood_size->setValue(30);

        formLayout->setWidget(0, QFormLayout::FieldRole, m_neighborhood_size);

        label_4 = new QLabel(frame_pca);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        m_samples = new QSpinBox(frame_pca);
        m_samples->setObjectName(QStringLiteral("m_samples"));
        m_samples->setMaximum(1000000);
        m_samples->setValue(200);

        formLayout->setWidget(1, QFormLayout::FieldRole, m_samples);


        verticalLayout_11->addWidget(frame_pca);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_9 = new QVBoxLayout(tab_5);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        m_genSmooth = new QCheckBox(tab_5);
        m_genSmooth->setObjectName(QStringLiteral("m_genSmooth"));
        m_genSmooth->setChecked(false);

        verticalLayout_9->addWidget(m_genSmooth);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        m_scalespace_af = new QRadioButton(tab_5);
        m_scalespace_af->setObjectName(QStringLiteral("m_scalespace_af"));
        m_scalespace_af->setChecked(true);

        verticalLayout_9->addWidget(m_scalespace_af);

        frame_af = new QFrame(tab_5);
        frame_af->setObjectName(QStringLiteral("frame_af"));
        frame_af->setFrameShape(QFrame::StyledPanel);
        frame_af->setFrameShadow(QFrame::Raised);
        formLayout_4 = new QFormLayout(frame_af);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_14 = new QLabel(frame_af);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_14);

        m_longestEdge_2 = new QDoubleSpinBox(frame_af);
        m_longestEdge_2->setObjectName(QStringLiteral("m_longestEdge_2"));
        m_longestEdge_2->setMaximum(1e+9);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, m_longestEdge_2);

        m_betaAngle_2 = new QDoubleSpinBox(frame_af);
        m_betaAngle_2->setObjectName(QStringLiteral("m_betaAngle_2"));
        m_betaAngle_2->setMaximum(150);
        m_betaAngle_2->setValue(30);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, m_betaAngle_2);

        m_radiusRatioBound_2 = new QDoubleSpinBox(frame_af);
        m_radiusRatioBound_2->setObjectName(QStringLiteral("m_radiusRatioBound_2"));
        m_radiusRatioBound_2->setMinimum(0.01);
        m_radiusRatioBound_2->setMaximum(1000);
        m_radiusRatioBound_2->setValue(5);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, m_radiusRatioBound_2);

        label_16 = new QLabel(frame_af);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_16);

        label_15 = new QLabel(frame_af);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_15);


        verticalLayout_9->addWidget(frame_af);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        m_scalespace_as = new QRadioButton(tab_5);
        m_scalespace_as->setObjectName(QStringLiteral("m_scalespace_as"));

        verticalLayout_9->addWidget(m_scalespace_as);

        frame_as = new QFrame(tab_5);
        frame_as->setObjectName(QStringLiteral("frame_as"));
        frame_as->setEnabled(false);
        frame_as->setFrameShape(QFrame::StyledPanel);
        frame_as->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_as);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        m_genShells = new QCheckBox(frame_as);
        m_genShells->setObjectName(QStringLiteral("m_genShells"));
        m_genShells->setChecked(false);

        verticalLayout_3->addWidget(m_genShells);

        m_forceManifold = new QCheckBox(frame_as);
        m_forceManifold->setObjectName(QStringLiteral("m_forceManifold"));
        m_forceManifold->setChecked(true);

        verticalLayout_3->addWidget(m_forceManifold);


        verticalLayout_9->addWidget(frame_as);

        tabWidget_2->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget_2);

        tabWidget->addTab(tab_3, QString());
        tabWidget_2->raise();
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_2 = new QVBoxLayout(tab_6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_11 = new QSpacerItem(20, 65, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_11);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_data_coverage = new QDoubleSpinBox(tab_6);
        m_data_coverage->setObjectName(QStringLiteral("m_data_coverage"));
        m_data_coverage->setMaximum(1);
        m_data_coverage->setSingleStep(0.01);
        m_data_coverage->setValue(0.27);

        gridLayout->addWidget(m_data_coverage, 1, 1, 1, 1);

        m_data_fitting = new QDoubleSpinBox(tab_6);
        m_data_fitting->setObjectName(QStringLiteral("m_data_fitting"));
        m_data_fitting->setMaximum(1);
        m_data_fitting->setSingleStep(0.01);
        m_data_fitting->setValue(0.43);

        gridLayout->addWidget(m_data_fitting, 0, 1, 1, 1);

        label_17 = new QLabel(tab_6);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout->addWidget(label_17, 2, 0, 1, 1);

        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        label_11 = new QLabel(tab_6);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        m_model_complexity = new QDoubleSpinBox(tab_6);
        m_model_complexity->setObjectName(QStringLiteral("m_model_complexity"));
        m_model_complexity->setMaximum(1);
        m_model_complexity->setSingleStep(0.01);
        m_model_complexity->setValue(0.3);

        gridLayout->addWidget(m_model_complexity, 2, 1, 1, 1);

        label_19 = new QLabel(tab_6);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout->addWidget(label_19, 3, 0, 1, 1);

        m_solver = new QComboBox(tab_6);
        m_solver->setObjectName(QStringLiteral("m_solver"));

        gridLayout->addWidget(m_solver, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer_12 = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_12);

        label_18 = new QLabel(tab_6);
        label_18->setObjectName(QStringLiteral("label_18"));
        QFont font;
        font.setItalic(true);
        label_18->setFont(font);

        verticalLayout_2->addWidget(label_18);

        verticalSpacer_13 = new QSpacerItem(20, 65, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_13);

        tabWidget->addTab(tab_6, QString());

        verticalLayout_7->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(SurfaceReconstructionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_7->addWidget(buttonBox);


        retranslateUi(SurfaceReconstructionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SurfaceReconstructionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SurfaceReconstructionDialog, SLOT(reject()));
        QObject::connect(m_scalespace_as, SIGNAL(toggled(bool)), frame_as, SLOT(setEnabled(bool)));
        QObject::connect(m_scalespace_af, SIGNAL(toggled(bool)), frame_af, SLOT(setEnabled(bool)));
        QObject::connect(m_scalespace_pca, SIGNAL(toggled(bool)), frame_pca, SLOT(setEnabled(bool)));
        QObject::connect(m_scalespace_jet, SIGNAL(toggled(bool)), frame_jet, SLOT(setEnabled(bool)));
        QObject::connect(m_surface_mesher, SIGNAL(toggled(bool)), m_surface_mesh_parameters, SLOT(setEnabled(bool)));
        QObject::connect(m_use_structuring, SIGNAL(toggled(bool)), label_8, SLOT(setEnabled(bool)));
        QObject::connect(m_use_structuring, SIGNAL(toggled(bool)), m_sampling, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SurfaceReconstructionDialog);
    } // setupUi

    void retranslateUi(QDialog *SurfaceReconstructionDialog)
    {
        SurfaceReconstructionDialog->setWindowTitle(QApplication::translate("SurfaceReconstructionDialog", "Surface Reconstruction", Q_NULLPTR));
        label_9->setText(QApplication::translate("SurfaceReconstructionDialog", "Radius ratio bound", Q_NULLPTR));
        label->setText(QApplication::translate("SurfaceReconstructionDialog", "Longest edge", Q_NULLPTR));
        label_10->setText(QApplication::translate("SurfaceReconstructionDialog", "Beta angle", Q_NULLPTR));
        label_8->setText(QApplication::translate("SurfaceReconstructionDialog", "Sampling", Q_NULLPTR));
        m_betaAngle->setSuffix(QApplication::translate("SurfaceReconstructionDialog", "\302\260", Q_NULLPTR));
        m_use_structuring->setText(QApplication::translate("SurfaceReconstructionDialog", "Use Point Set Structuring", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SurfaceReconstructionDialog", "Advancing Front", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("SurfaceReconstructionDialog", "Solver", Q_NULLPTR));
        m_conjugate_gradient->setText(QApplication::translate("SurfaceReconstructionDialog", "Conjugate Gradient", Q_NULLPTR));
        m_simplicial_ldlt->setText(QApplication::translate("SurfaceReconstructionDialog", "Simplicial LDLT", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("SurfaceReconstructionDialog", "Mesher", Q_NULLPTR));
        m_marching_tets->setText(QApplication::translate("SurfaceReconstructionDialog", "Marching Tetrahedra", Q_NULLPTR));
        m_surface_mesher->setText(QApplication::translate("SurfaceReconstructionDialog", "Surface Mesher", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        m_surface_mesh_parameters->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_6->setText(QApplication::translate("SurfaceReconstructionDialog", "Approximation error:", Q_NULLPTR));
        m_inputDistance->setSuffix(QApplication::translate("SurfaceReconstructionDialog", " * average spacing", Q_NULLPTR));
        label_5->setText(QApplication::translate("SurfaceReconstructionDialog", "Min triangle angle:", Q_NULLPTR));
        m_inputAngle->setSuffix(QApplication::translate("SurfaceReconstructionDialog", " \302\260", Q_NULLPTR));
        m_inputRadius->setSuffix(QApplication::translate("SurfaceReconstructionDialog", " * average spacing", Q_NULLPTR));
        label_7->setText(QApplication::translate("SurfaceReconstructionDialog", "Max triangle size:", Q_NULLPTR));
        m_inputTwoPasses->setText(QApplication::translate("SurfaceReconstructionDialog", "Perform two passes", Q_NULLPTR));
        m_doNotFillHoles->setText(QApplication::translate("SurfaceReconstructionDialog", "Do not fill holes", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SurfaceReconstructionDialog", "Poisson", Q_NULLPTR));
        label_3->setText(QApplication::translate("SurfaceReconstructionDialog", "Iterations", Q_NULLPTR));
        m_scalespace_jet->setText(QApplication::translate("SurfaceReconstructionDialog", "Jet", Q_NULLPTR));
        label_13->setText(QApplication::translate("SurfaceReconstructionDialog", "Number of neighbors", Q_NULLPTR));
        degreeFittingLabel->setText(QApplication::translate("SurfaceReconstructionDialog", "Degree fitting", Q_NULLPTR));
        degreeMongeLabel->setText(QApplication::translate("SurfaceReconstructionDialog", "Degree monge", Q_NULLPTR));
        m_scalespace_pca->setText(QApplication::translate("SurfaceReconstructionDialog", "Weighted PCA", Q_NULLPTR));
        label_2->setText(QApplication::translate("SurfaceReconstructionDialog", "Average neighborhood size", Q_NULLPTR));
        label_4->setText(QApplication::translate("SurfaceReconstructionDialog", "Size of sample to estimate neighborhood", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("SurfaceReconstructionDialog", "Smoothing Method", Q_NULLPTR));
        m_genSmooth->setText(QApplication::translate("SurfaceReconstructionDialog", "Output smoothed version", Q_NULLPTR));
        m_scalespace_af->setText(QApplication::translate("SurfaceReconstructionDialog", "Advancing Front", Q_NULLPTR));
        label_14->setText(QApplication::translate("SurfaceReconstructionDialog", "Longest edge", Q_NULLPTR));
        m_betaAngle_2->setSuffix(QApplication::translate("SurfaceReconstructionDialog", "\302\260", Q_NULLPTR));
        label_16->setText(QApplication::translate("SurfaceReconstructionDialog", "Radius ratio bound", Q_NULLPTR));
        label_15->setText(QApplication::translate("SurfaceReconstructionDialog", "Beta angle", Q_NULLPTR));
        m_scalespace_as->setText(QApplication::translate("SurfaceReconstructionDialog", "Alpha Shape", Q_NULLPTR));
        m_genShells->setText(QApplication::translate("SurfaceReconstructionDialog", "Generate separate shells", Q_NULLPTR));
        m_forceManifold->setText(QApplication::translate("SurfaceReconstructionDialog", "Force manifold output", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("SurfaceReconstructionDialog", "Meshing Method", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SurfaceReconstructionDialog", "Scale Space", Q_NULLPTR));
        label_17->setText(QApplication::translate("SurfaceReconstructionDialog", "Model complexity term:", Q_NULLPTR));
        label_12->setText(QApplication::translate("SurfaceReconstructionDialog", "Data coverage term:", Q_NULLPTR));
        label_11->setText(QApplication::translate("SurfaceReconstructionDialog", "Data fitting term:", Q_NULLPTR));
        label_19->setText(QApplication::translate("SurfaceReconstructionDialog", "Solver", Q_NULLPTR));
        label_18->setText(QApplication::translate("SurfaceReconstructionDialog", "(Note: terms will be normalized for their sum to be 1)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("SurfaceReconstructionDialog", "Polygonal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SurfaceReconstructionDialog: public Ui_SurfaceReconstructionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SURFACE_RECONSTRUCTION_PLUGIN_H

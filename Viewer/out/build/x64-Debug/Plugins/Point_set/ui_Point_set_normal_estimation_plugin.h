/********************************************************************************
** Form generated from reading UI file 'Point_set_normal_estimation_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT_SET_NORMAL_ESTIMATION_PLUGIN_H
#define UI_POINT_SET_NORMAL_ESTIMATION_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NormalEstimationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *buttonPCA;
    QFrame *frame;
    QFormLayout *formLayout_2;
    QLabel *supportSizeLabel;
    QSpinBox *m_pca_neighbors;
    QRadioButton *buttonJet;
    QFrame *frame_2;
    QFormLayout *formLayout_3;
    QLabel *supportSizeLabel_2;
    QSpinBox *m_jet_neighbors;
    QRadioButton *buttonVCM;
    QFrame *frame_3;
    QFormLayout *formLayout_4;
    QLabel *offsetRadiusLabel;
    QDoubleSpinBox *m_offset_radius;
    QDoubleSpinBox *m_convolution_radius;
    QRadioButton *buttonRadius;
    QRadioButton *buttonNeighbors;
    QSpinBox *m_convolution_neighbors;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NormalEstimationDialog)
    {
        if (NormalEstimationDialog->objectName().isEmpty())
            NormalEstimationDialog->setObjectName(QStringLiteral("NormalEstimationDialog"));
        NormalEstimationDialog->resize(301, 372);
        verticalLayout = new QVBoxLayout(NormalEstimationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonPCA = new QRadioButton(NormalEstimationDialog);
        buttonPCA->setObjectName(QStringLiteral("buttonPCA"));

        verticalLayout->addWidget(buttonPCA);

        frame = new QFrame(NormalEstimationDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setEnabled(false);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayout_2 = new QFormLayout(frame);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        supportSizeLabel = new QLabel(frame);
        supportSizeLabel->setObjectName(QStringLiteral("supportSizeLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, supportSizeLabel);

        m_pca_neighbors = new QSpinBox(frame);
        m_pca_neighbors->setObjectName(QStringLiteral("m_pca_neighbors"));
        m_pca_neighbors->setMinimum(3);
        m_pca_neighbors->setMaximum(10000000);
        m_pca_neighbors->setValue(6);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, m_pca_neighbors);


        verticalLayout->addWidget(frame);

        buttonJet = new QRadioButton(NormalEstimationDialog);
        buttonJet->setObjectName(QStringLiteral("buttonJet"));
        buttonJet->setChecked(true);

        verticalLayout->addWidget(buttonJet);

        frame_2 = new QFrame(NormalEstimationDialog);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        formLayout_3 = new QFormLayout(frame_2);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        supportSizeLabel_2 = new QLabel(frame_2);
        supportSizeLabel_2->setObjectName(QStringLiteral("supportSizeLabel_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, supportSizeLabel_2);

        m_jet_neighbors = new QSpinBox(frame_2);
        m_jet_neighbors->setObjectName(QStringLiteral("m_jet_neighbors"));
        m_jet_neighbors->setMinimum(3);
        m_jet_neighbors->setMaximum(100000000);
        m_jet_neighbors->setValue(12);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, m_jet_neighbors);


        verticalLayout->addWidget(frame_2);

        buttonVCM = new QRadioButton(NormalEstimationDialog);
        buttonVCM->setObjectName(QStringLiteral("buttonVCM"));

        verticalLayout->addWidget(buttonVCM);

        frame_3 = new QFrame(NormalEstimationDialog);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setEnabled(false);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        formLayout_4 = new QFormLayout(frame_3);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        offsetRadiusLabel = new QLabel(frame_3);
        offsetRadiusLabel->setObjectName(QStringLiteral("offsetRadiusLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, offsetRadiusLabel);

        m_offset_radius = new QDoubleSpinBox(frame_3);
        m_offset_radius->setObjectName(QStringLiteral("m_offset_radius"));
        m_offset_radius->setMinimum(0.01);
        m_offset_radius->setSingleStep(0.01);
        m_offset_radius->setValue(0.1);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, m_offset_radius);

        m_convolution_radius = new QDoubleSpinBox(frame_3);
        m_convolution_radius->setObjectName(QStringLiteral("m_convolution_radius"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, m_convolution_radius);

        buttonRadius = new QRadioButton(frame_3);
        buttonRadius->setObjectName(QStringLiteral("buttonRadius"));
        buttonRadius->setChecked(true);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, buttonRadius);

        buttonNeighbors = new QRadioButton(frame_3);
        buttonNeighbors->setObjectName(QStringLiteral("buttonNeighbors"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, buttonNeighbors);

        m_convolution_neighbors = new QSpinBox(frame_3);
        m_convolution_neighbors->setObjectName(QStringLiteral("m_convolution_neighbors"));
        m_convolution_neighbors->setEnabled(false);
        m_convolution_neighbors->setMaximum(100000000);
        m_convolution_neighbors->setValue(40);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, m_convolution_neighbors);


        verticalLayout->addWidget(frame_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(NormalEstimationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NormalEstimationDialog);
        QObject::connect(buttonJet, SIGNAL(toggled(bool)), frame_2, SLOT(setEnabled(bool)));
        QObject::connect(buttonPCA, SIGNAL(toggled(bool)), frame, SLOT(setEnabled(bool)));
        QObject::connect(buttonVCM, SIGNAL(toggled(bool)), frame_3, SLOT(setEnabled(bool)));
        QObject::connect(buttonRadius, SIGNAL(toggled(bool)), m_convolution_radius, SLOT(setEnabled(bool)));
        QObject::connect(buttonNeighbors, SIGNAL(toggled(bool)), m_convolution_neighbors, SLOT(setEnabled(bool)));
        QObject::connect(buttonBox, SIGNAL(accepted()), NormalEstimationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NormalEstimationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NormalEstimationDialog);
    } // setupUi

    void retranslateUi(QDialog *NormalEstimationDialog)
    {
        NormalEstimationDialog->setWindowTitle(QApplication::translate("NormalEstimationDialog", "Normal Estimation", Q_NULLPTR));
        buttonPCA->setText(QApplication::translate("NormalEstimationDialog", "PCA Estimate Normals", Q_NULLPTR));
        supportSizeLabel->setText(QApplication::translate("NormalEstimationDialog", "Support Size", Q_NULLPTR));
        m_pca_neighbors->setSuffix(QApplication::translate("NormalEstimationDialog", " Nearest Neighbors", Q_NULLPTR));
        buttonJet->setText(QApplication::translate("NormalEstimationDialog", "Jet Estimate Normals", Q_NULLPTR));
        supportSizeLabel_2->setText(QApplication::translate("NormalEstimationDialog", "Support Size", Q_NULLPTR));
        m_jet_neighbors->setSuffix(QApplication::translate("NormalEstimationDialog", " Nearest Neighbors", Q_NULLPTR));
        buttonVCM->setText(QApplication::translate("NormalEstimationDialog", "VCM Estimate Normals", Q_NULLPTR));
        offsetRadiusLabel->setText(QApplication::translate("NormalEstimationDialog", "Offset Radius", Q_NULLPTR));
        buttonRadius->setText(QApplication::translate("NormalEstimationDialog", "Convolution Radius", Q_NULLPTR));
        buttonNeighbors->setText(QApplication::translate("NormalEstimationDialog", "Convolution Neighbors", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NormalEstimationDialog: public Ui_NormalEstimationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT_SET_NORMAL_ESTIMATION_PLUGIN_H

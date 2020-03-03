/********************************************************************************
** Form generated from reading UI file 'Features_detection_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATURES_DETECTION_PLUGIN_H
#define UI_FEATURES_DETECTION_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VCMFeaturesDetectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *m_inputOffsetRadius;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *m_inputConvolveRadius;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *m_inputFeaturesThreshold;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VCMFeaturesDetectionDialog)
    {
        if (VCMFeaturesDetectionDialog->objectName().isEmpty())
            VCMFeaturesDetectionDialog->setObjectName(QStringLiteral("VCMFeaturesDetectionDialog"));
        VCMFeaturesDetectionDialog->resize(254, 153);
        verticalLayout = new QVBoxLayout(VCMFeaturesDetectionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(VCMFeaturesDetectionDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_inputOffsetRadius = new QDoubleSpinBox(VCMFeaturesDetectionDialog);
        m_inputOffsetRadius->setObjectName(QStringLiteral("m_inputOffsetRadius"));
        m_inputOffsetRadius->setDecimals(3);
        m_inputOffsetRadius->setSingleStep(0.05);
        m_inputOffsetRadius->setValue(0.1);

        horizontalLayout->addWidget(m_inputOffsetRadius);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(VCMFeaturesDetectionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        m_inputConvolveRadius = new QDoubleSpinBox(VCMFeaturesDetectionDialog);
        m_inputConvolveRadius->setObjectName(QStringLiteral("m_inputConvolveRadius"));
        m_inputConvolveRadius->setDecimals(3);
        m_inputConvolveRadius->setSingleStep(0.05);

        horizontalLayout_3->addWidget(m_inputConvolveRadius);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(VCMFeaturesDetectionDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        m_inputFeaturesThreshold = new QDoubleSpinBox(VCMFeaturesDetectionDialog);
        m_inputFeaturesThreshold->setObjectName(QStringLiteral("m_inputFeaturesThreshold"));
        m_inputFeaturesThreshold->setDecimals(3);
        m_inputFeaturesThreshold->setSingleStep(0.02);
        m_inputFeaturesThreshold->setValue(0.16);

        horizontalLayout_2->addWidget(m_inputFeaturesThreshold);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(VCMFeaturesDetectionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(VCMFeaturesDetectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), VCMFeaturesDetectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VCMFeaturesDetectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(VCMFeaturesDetectionDialog);
    } // setupUi

    void retranslateUi(QDialog *VCMFeaturesDetectionDialog)
    {
        VCMFeaturesDetectionDialog->setWindowTitle(QApplication::translate("VCMFeaturesDetectionDialog", "VCM Features Estimation", Q_NULLPTR));
        label->setText(QApplication::translate("VCMFeaturesDetectionDialog", "Offset Radius:", Q_NULLPTR));
        label_2->setText(QApplication::translate("VCMFeaturesDetectionDialog", "Convolution Radius:", Q_NULLPTR));
        label_3->setText(QApplication::translate("VCMFeaturesDetectionDialog", "Threshold:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VCMFeaturesDetectionDialog: public Ui_VCMFeaturesDetectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATURES_DETECTION_PLUGIN_H

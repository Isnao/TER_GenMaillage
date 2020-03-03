/********************************************************************************
** Form generated from reading UI file 'Point_set_upsampling_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT_SET_UPSAMPLING_PLUGIN_H
#define UI_POINT_SET_UPSAMPLING_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PointSetUpsamplingDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDoubleSpinBox *m_neighborhoodRadius;
    QDialogButtonBox *buttonBox;
    QDoubleSpinBox *m_edgeSensitivity;
    QDoubleSpinBox *m_outputSize;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QSpinBox *m_sharpnessAngle;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *PointSetUpsamplingDialog)
    {
        if (PointSetUpsamplingDialog->objectName().isEmpty())
            PointSetUpsamplingDialog->setObjectName(QStringLiteral("PointSetUpsamplingDialog"));
        PointSetUpsamplingDialog->resize(348, 167);
        gridLayout = new QGridLayout(PointSetUpsamplingDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(PointSetUpsamplingDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        m_neighborhoodRadius = new QDoubleSpinBox(PointSetUpsamplingDialog);
        m_neighborhoodRadius->setObjectName(QStringLiteral("m_neighborhoodRadius"));
        m_neighborhoodRadius->setDecimals(2);
        m_neighborhoodRadius->setMinimum(0.1);
        m_neighborhoodRadius->setMaximum(10);
        m_neighborhoodRadius->setSingleStep(0.1);
        m_neighborhoodRadius->setValue(3);

        gridLayout->addWidget(m_neighborhoodRadius, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(PointSetUpsamplingDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        m_edgeSensitivity = new QDoubleSpinBox(PointSetUpsamplingDialog);
        m_edgeSensitivity->setObjectName(QStringLiteral("m_edgeSensitivity"));
        m_edgeSensitivity->setMaximum(1);
        m_edgeSensitivity->setSingleStep(0.01);

        gridLayout->addWidget(m_edgeSensitivity, 2, 1, 1, 1);

        m_outputSize = new QDoubleSpinBox(PointSetUpsamplingDialog);
        m_outputSize->setObjectName(QStringLiteral("m_outputSize"));
        m_outputSize->setMinimum(1);
        m_outputSize->setMaximum(1000);
        m_outputSize->setValue(4);

        gridLayout->addWidget(m_outputSize, 4, 1, 1, 1);

        label_5 = new QLabel(PointSetUpsamplingDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_4 = new QLabel(PointSetUpsamplingDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label = new QLabel(PointSetUpsamplingDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        m_sharpnessAngle = new QSpinBox(PointSetUpsamplingDialog);
        m_sharpnessAngle->setObjectName(QStringLiteral("m_sharpnessAngle"));
        m_sharpnessAngle->setMaximum(90);
        m_sharpnessAngle->setValue(25);

        gridLayout->addWidget(m_sharpnessAngle, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(PointSetUpsamplingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PointSetUpsamplingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PointSetUpsamplingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PointSetUpsamplingDialog);
    } // setupUi

    void retranslateUi(QDialog *PointSetUpsamplingDialog)
    {
        PointSetUpsamplingDialog->setWindowTitle(QApplication::translate("PointSetUpsamplingDialog", "Edge Aware Upsampling", Q_NULLPTR));
        label_2->setText(QApplication::translate("PointSetUpsamplingDialog", "Output Size", Q_NULLPTR));
        m_neighborhoodRadius->setSuffix(QApplication::translate("PointSetUpsamplingDialog", " * average spacing", Q_NULLPTR));
        m_outputSize->setPrefix(QString());
        m_outputSize->setSuffix(QApplication::translate("PointSetUpsamplingDialog", " * input size", Q_NULLPTR));
        label_5->setText(QApplication::translate("PointSetUpsamplingDialog", "Edge Sensitivity", Q_NULLPTR));
        label_4->setText(QApplication::translate("PointSetUpsamplingDialog", "Sharpness Angle", Q_NULLPTR));
        label->setText(QApplication::translate("PointSetUpsamplingDialog", "Neighborhood Radius", Q_NULLPTR));
        m_sharpnessAngle->setSuffix(QApplication::translate("PointSetUpsamplingDialog", "\302\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PointSetUpsamplingDialog: public Ui_PointSetUpsamplingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT_SET_UPSAMPLING_PLUGIN_H

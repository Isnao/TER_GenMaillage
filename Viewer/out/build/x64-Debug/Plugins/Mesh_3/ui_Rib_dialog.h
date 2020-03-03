/********************************************************************************
** Form generated from reading UI file 'Rib_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIB_DIALOG_H
#define UI_RIB_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Rib_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *matGroup;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QDoubleSpinBox *sphereRadius;
    QDoubleSpinBox *cylinderRadius;
    QLabel *cylinderRadiusLabel;
    QLabel *sphereRadiusLabel;
    QCheckBox *isFlatEdges;
    QGroupBox *lightBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *ambientLabel;
    QCheckBox *isAmbientOn;
    QDoubleSpinBox *ambientIntensity;
    QDoubleSpinBox *shadowIntensity;
    QCheckBox *isShadowOn;
    QLabel *shadowLabel;
    QGroupBox *pictGroup;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *resHeightLabel;
    QLabel *resWidthLabel;
    QSpinBox *resHeight;
    QSpinBox *resWidth;
    QComboBox *exportMode;
    QCheckBox *isPreview;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Rib_dialog)
    {
        if (Rib_dialog->objectName().isEmpty())
            Rib_dialog->setObjectName(QStringLiteral("Rib_dialog"));
        Rib_dialog->resize(423, 443);
        verticalLayout = new QVBoxLayout(Rib_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        matGroup = new QGroupBox(Rib_dialog);
        matGroup->setObjectName(QStringLiteral("matGroup"));
        verticalLayout_2 = new QVBoxLayout(matGroup);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        sphereRadius = new QDoubleSpinBox(matGroup);
        sphereRadius->setObjectName(QStringLiteral("sphereRadius"));
        sphereRadius->setDecimals(4);

        gridLayout->addWidget(sphereRadius, 1, 1, 1, 1);

        cylinderRadius = new QDoubleSpinBox(matGroup);
        cylinderRadius->setObjectName(QStringLiteral("cylinderRadius"));
        cylinderRadius->setDecimals(4);

        gridLayout->addWidget(cylinderRadius, 2, 1, 1, 1);

        cylinderRadiusLabel = new QLabel(matGroup);
        cylinderRadiusLabel->setObjectName(QStringLiteral("cylinderRadiusLabel"));

        gridLayout->addWidget(cylinderRadiusLabel, 2, 0, 1, 1);

        sphereRadiusLabel = new QLabel(matGroup);
        sphereRadiusLabel->setObjectName(QStringLiteral("sphereRadiusLabel"));

        gridLayout->addWidget(sphereRadiusLabel, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        isFlatEdges = new QCheckBox(matGroup);
        isFlatEdges->setObjectName(QStringLiteral("isFlatEdges"));

        verticalLayout_2->addWidget(isFlatEdges);


        verticalLayout->addWidget(matGroup);

        lightBox = new QGroupBox(Rib_dialog);
        lightBox->setObjectName(QStringLiteral("lightBox"));
        verticalLayout_3 = new QVBoxLayout(lightBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        ambientLabel = new QLabel(lightBox);
        ambientLabel->setObjectName(QStringLiteral("ambientLabel"));

        gridLayout_2->addWidget(ambientLabel, 1, 0, 1, 1);

        isAmbientOn = new QCheckBox(lightBox);
        isAmbientOn->setObjectName(QStringLiteral("isAmbientOn"));
        isAmbientOn->setChecked(true);

        gridLayout_2->addWidget(isAmbientOn, 1, 2, 1, 1);

        ambientIntensity = new QDoubleSpinBox(lightBox);
        ambientIntensity->setObjectName(QStringLiteral("ambientIntensity"));
        ambientIntensity->setMaximum(1);
        ambientIntensity->setSingleStep(0.01);
        ambientIntensity->setValue(0.15);

        gridLayout_2->addWidget(ambientIntensity, 1, 1, 1, 1);

        shadowIntensity = new QDoubleSpinBox(lightBox);
        shadowIntensity->setObjectName(QStringLiteral("shadowIntensity"));
        shadowIntensity->setMaximum(1);
        shadowIntensity->setSingleStep(0.01);
        shadowIntensity->setValue(0.85);

        gridLayout_2->addWidget(shadowIntensity, 2, 1, 1, 1);

        isShadowOn = new QCheckBox(lightBox);
        isShadowOn->setObjectName(QStringLiteral("isShadowOn"));
        isShadowOn->setChecked(true);

        gridLayout_2->addWidget(isShadowOn, 2, 2, 1, 1);

        shadowLabel = new QLabel(lightBox);
        shadowLabel->setObjectName(QStringLiteral("shadowLabel"));

        gridLayout_2->addWidget(shadowLabel, 2, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout->addWidget(lightBox);

        pictGroup = new QGroupBox(Rib_dialog);
        pictGroup->setObjectName(QStringLiteral("pictGroup"));
        verticalLayout_4 = new QVBoxLayout(pictGroup);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        resHeightLabel = new QLabel(pictGroup);
        resHeightLabel->setObjectName(QStringLiteral("resHeightLabel"));
        resHeightLabel->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(resHeightLabel, 1, 0, 1, 1);

        resWidthLabel = new QLabel(pictGroup);
        resWidthLabel->setObjectName(QStringLiteral("resWidthLabel"));
        resWidthLabel->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(resWidthLabel, 0, 0, 1, 1);

        resHeight = new QSpinBox(pictGroup);
        resHeight->setObjectName(QStringLiteral("resHeight"));
        resHeight->setMinimum(100);
        resHeight->setMaximum(99999);
        resHeight->setSingleStep(100);
        resHeight->setValue(800);

        gridLayout_3->addWidget(resHeight, 1, 1, 1, 1);

        resWidth = new QSpinBox(pictGroup);
        resWidth->setObjectName(QStringLiteral("resWidth"));
        resWidth->setMinimum(100);
        resWidth->setMaximum(99999);
        resWidth->setSingleStep(100);
        resWidth->setValue(800);

        gridLayout_3->addWidget(resWidth, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);

        exportMode = new QComboBox(pictGroup);
        exportMode->setObjectName(QStringLiteral("exportMode"));
        exportMode->setMinimumContentsLength(0);
        exportMode->setModelColumn(0);

        verticalLayout_4->addWidget(exportMode);

        isPreview = new QCheckBox(pictGroup);
        isPreview->setObjectName(QStringLiteral("isPreview"));

        verticalLayout_4->addWidget(isPreview);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout->addWidget(pictGroup);

        buttonBox = new QDialogButtonBox(Rib_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Rib_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Rib_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Rib_dialog, SLOT(reject()));

        exportMode->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Rib_dialog);
    } // setupUi

    void retranslateUi(QDialog *Rib_dialog)
    {
        Rib_dialog->setWindowTitle(QApplication::translate("Rib_dialog", "Dialog", Q_NULLPTR));
        matGroup->setTitle(QApplication::translate("Rib_dialog", "Materials parameters", Q_NULLPTR));
        cylinderRadiusLabel->setText(QApplication::translate("Rib_dialog", "cylinder radius (edges)", Q_NULLPTR));
        sphereRadiusLabel->setText(QApplication::translate("Rib_dialog", "sphere radius (points)", Q_NULLPTR));
        isFlatEdges->setText(QApplication::translate("Rib_dialog", "Render flat edges (width: cylinder radius)", Q_NULLPTR));
        lightBox->setTitle(QApplication::translate("Rib_dialog", "Lights Parameters", Q_NULLPTR));
        ambientLabel->setText(QApplication::translate("Rib_dialog", "Ambient Light", Q_NULLPTR));
        isAmbientOn->setText(QApplication::translate("Rib_dialog", "activated", Q_NULLPTR));
        isShadowOn->setText(QApplication::translate("Rib_dialog", "activated", Q_NULLPTR));
        shadowLabel->setText(QApplication::translate("Rib_dialog", "Shadow Light", Q_NULLPTR));
        pictGroup->setTitle(QApplication::translate("Rib_dialog", "Picture Parameters", Q_NULLPTR));
        resHeightLabel->setText(QApplication::translate("Rib_dialog", "Height", Q_NULLPTR));
        resWidthLabel->setText(QApplication::translate("Rib_dialog", "Width", Q_NULLPTR));
        isPreview->setText(QApplication::translate("Rib_dialog", "Generate preview (low resolution, simple light)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Rib_dialog: public Ui_Rib_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIB_DIALOG_H

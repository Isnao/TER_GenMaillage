/********************************************************************************
** Form generated from reading UI file 'Mesh_plane_detection_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESH_PLANE_DETECTION_DIALOG_H
#define UI_MESH_PLANE_DETECTION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Mesh_plane_detection_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *minimumAreaLabel;
    QDoubleSpinBox *minimumAreaDoubleSpinBox;
    QLabel *maximumDeviationFromNormalLabel;
    QSpinBox *maximumDeviationFromNormalSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Mesh_plane_detection_dialog)
    {
        if (Mesh_plane_detection_dialog->objectName().isEmpty())
            Mesh_plane_detection_dialog->setObjectName(QStringLiteral("Mesh_plane_detection_dialog"));
        Mesh_plane_detection_dialog->resize(349, 117);
        verticalLayout = new QVBoxLayout(Mesh_plane_detection_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        minimumAreaLabel = new QLabel(Mesh_plane_detection_dialog);
        minimumAreaLabel->setObjectName(QStringLiteral("minimumAreaLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, minimumAreaLabel);

        minimumAreaDoubleSpinBox = new QDoubleSpinBox(Mesh_plane_detection_dialog);
        minimumAreaDoubleSpinBox->setObjectName(QStringLiteral("minimumAreaDoubleSpinBox"));
        minimumAreaDoubleSpinBox->setDecimals(5);
        minimumAreaDoubleSpinBox->setMinimum(1e-5);
        minimumAreaDoubleSpinBox->setMaximum(1e+6);
        minimumAreaDoubleSpinBox->setSingleStep(0.01);
        minimumAreaDoubleSpinBox->setValue(0.01);

        formLayout->setWidget(0, QFormLayout::FieldRole, minimumAreaDoubleSpinBox);

        maximumDeviationFromNormalLabel = new QLabel(Mesh_plane_detection_dialog);
        maximumDeviationFromNormalLabel->setObjectName(QStringLiteral("maximumDeviationFromNormalLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, maximumDeviationFromNormalLabel);

        maximumDeviationFromNormalSpinBox = new QSpinBox(Mesh_plane_detection_dialog);
        maximumDeviationFromNormalSpinBox->setObjectName(QStringLiteral("maximumDeviationFromNormalSpinBox"));
        maximumDeviationFromNormalSpinBox->setMinimum(1);
        maximumDeviationFromNormalSpinBox->setMaximum(90);
        maximumDeviationFromNormalSpinBox->setValue(30);

        formLayout->setWidget(1, QFormLayout::FieldRole, maximumDeviationFromNormalSpinBox);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(Mesh_plane_detection_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Mesh_plane_detection_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Mesh_plane_detection_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Mesh_plane_detection_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Mesh_plane_detection_dialog);
    } // setupUi

    void retranslateUi(QDialog *Mesh_plane_detection_dialog)
    {
        Mesh_plane_detection_dialog->setWindowTitle(QApplication::translate("Mesh_plane_detection_dialog", "Mesh Plane Detection", Q_NULLPTR));
        minimumAreaLabel->setText(QApplication::translate("Mesh_plane_detection_dialog", "Minimum area", Q_NULLPTR));
        maximumDeviationFromNormalLabel->setText(QApplication::translate("Mesh_plane_detection_dialog", "Maximum deviation from normal", Q_NULLPTR));
        maximumDeviationFromNormalSpinBox->setSuffix(QApplication::translate("Mesh_plane_detection_dialog", "\302\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mesh_plane_detection_dialog: public Ui_Mesh_plane_detection_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESH_PLANE_DETECTION_DIALOG_H

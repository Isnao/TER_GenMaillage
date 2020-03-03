/********************************************************************************
** Form generated from reading UI file 'LightingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTINGDIALOG_H
#define UI_LIGHTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LightingDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *specularButton;
    QLabel *label;
    QPushButton *diffuseButton;
    QPushButton *ambientButton;
    QLineEdit *position_lineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QSlider *spec_powrSlider;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LightingDialog)
    {
        if (LightingDialog->objectName().isEmpty())
            LightingDialog->setObjectName(QStringLiteral("LightingDialog"));
        LightingDialog->resize(412, 191);
        verticalLayout_2 = new QVBoxLayout(LightingDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(LightingDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(LightingDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(LightingDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        specularButton = new QPushButton(LightingDialog);
        specularButton->setObjectName(QStringLiteral("specularButton"));
        specularButton->setFlat(false);

        gridLayout_2->addWidget(specularButton, 3, 2, 1, 1);

        label = new QLabel(LightingDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        diffuseButton = new QPushButton(LightingDialog);
        diffuseButton->setObjectName(QStringLiteral("diffuseButton"));
        diffuseButton->setFlat(false);

        gridLayout_2->addWidget(diffuseButton, 2, 2, 1, 1);

        ambientButton = new QPushButton(LightingDialog);
        ambientButton->setObjectName(QStringLiteral("ambientButton"));
        ambientButton->setText(QStringLiteral(""));
        ambientButton->setFlat(false);

        gridLayout_2->addWidget(ambientButton, 1, 2, 1, 1);

        position_lineEdit = new QLineEdit(LightingDialog);
        position_lineEdit->setObjectName(QStringLiteral("position_lineEdit"));
        position_lineEdit->setMaxLength(32767);
        position_lineEdit->setFrame(true);
        position_lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(position_lineEdit, 0, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);

        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(LightingDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(LightingDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        spec_powrSlider = new QSlider(LightingDialog);
        spec_powrSlider->setObjectName(QStringLiteral("spec_powrSlider"));
        spec_powrSlider->setMinimum(1);
        spec_powrSlider->setMaximum(250);
        spec_powrSlider->setTracking(true);
        spec_powrSlider->setOrientation(Qt::Horizontal);
        spec_powrSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout_2->addWidget(spec_powrSlider);

        label_6 = new QLabel(LightingDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(LightingDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(LightingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LightingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LightingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LightingDialog);
    } // setupUi

    void retranslateUi(QDialog *LightingDialog)
    {
        LightingDialog->setWindowTitle(QApplication::translate("LightingDialog", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("LightingDialog", "ambient:", Q_NULLPTR));
        label_3->setText(QApplication::translate("LightingDialog", "diffuse:", Q_NULLPTR));
        label_4->setText(QApplication::translate("LightingDialog", "specular:", Q_NULLPTR));
        specularButton->setText(QString());
        label->setText(QApplication::translate("LightingDialog", "position:", Q_NULLPTR));
        diffuseButton->setText(QString());
        position_lineEdit->setInputMask(QString());
        position_lineEdit->setText(QString());
        label_5->setText(QApplication::translate("LightingDialog", "specular power:", Q_NULLPTR));
        label_7->setText(QApplication::translate("LightingDialog", "1", Q_NULLPTR));
        label_6->setText(QApplication::translate("LightingDialog", "250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LightingDialog: public Ui_LightingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTINGDIALOG_H

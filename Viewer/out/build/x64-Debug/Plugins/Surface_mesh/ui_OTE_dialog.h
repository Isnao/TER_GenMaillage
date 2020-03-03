/********************************************************************************
** Form generated from reading UI file 'OTE_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTE_DIALOG_H
#define UI_OTE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OTE_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *orbLabel;
    QComboBox *OrbComboBox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OTE_dialog)
    {
        if (OTE_dialog->objectName().isEmpty())
            OTE_dialog->setObjectName(QStringLiteral("OTE_dialog"));
        OTE_dialog->resize(355, 79);
        OTE_dialog->setCursor(QCursor(Qt::ArrowCursor));
        verticalLayout = new QVBoxLayout(OTE_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        orbLabel = new QLabel(OTE_dialog);
        orbLabel->setObjectName(QStringLiteral("orbLabel"));
        orbLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(orbLabel, 0, 0, 1, 1);

        OrbComboBox = new QComboBox(OTE_dialog);
        OrbComboBox->setObjectName(QStringLiteral("OrbComboBox"));
        OrbComboBox->setEnabled(true);
        OrbComboBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(OrbComboBox, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(OTE_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OTE_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OTE_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OTE_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OTE_dialog);
    } // setupUi

    void retranslateUi(QDialog *OTE_dialog)
    {
        OTE_dialog->setWindowTitle(QApplication::translate("OTE_dialog", "Meshing criteria", Q_NULLPTR));
        orbLabel->setText(QApplication::translate("OTE_dialog", "Orbifold type", Q_NULLPTR));
        OrbComboBox->clear();
        OrbComboBox->insertItems(0, QStringList()
         << QApplication::translate("OTE_dialog", "I (Square)", Q_NULLPTR)
         << QApplication::translate("OTE_dialog", "II (Diamond)", Q_NULLPTR)
         << QApplication::translate("OTE_dialog", "III (Triangle)", Q_NULLPTR)
         << QApplication::translate("OTE_dialog", "IV (Parallelogram)", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class OTE_dialog: public Ui_OTE_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTE_DIALOG_H

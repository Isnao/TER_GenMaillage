/********************************************************************************
** Form generated from reading UI file 'Repair_soup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPAIR_SOUP_H
#define UI_REPAIR_SOUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *eadCheckbox;
    QCheckBox *rsoCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(201, 98);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        eadCheckbox = new QCheckBox(Dialog);
        eadCheckbox->setObjectName(QStringLiteral("eadCheckbox"));

        verticalLayout->addWidget(eadCheckbox);

        rsoCheckBox = new QCheckBox(Dialog);
        rsoCheckBox->setObjectName(QStringLiteral("rsoCheckBox"));

        verticalLayout->addWidget(rsoCheckBox);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        eadCheckbox->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p>Indicate, when multiple polygons are duplicates, whether all the duplicate polygons should be removed or if one (arbitrarily chosen) face should be kept.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        eadCheckbox->setText(QApplication::translate("Dialog", "Erase All Duplicates", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rsoCheckBox->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-family:'Roboto,sans-serif'; font-size:14px; color:#000000; background-color:#ffffff;\">Indicate if polygon orientation should be taken into account when determining whether two polygons are duplicates, that is, whether e.g. the triangles\302\240</span><span style=\" font-size:14px; color:#000000; background-color:#ffffff;\">0,1,2</span><span style=\" font-family:'Roboto,sans-serif'; font-size:14px; color:#000000; background-color:#ffffff;\">\302\240and\302\240</span><span style=\" font-size:14px; color:#000000; background-color:#ffffff;\">0,2,1</span><span style=\" font-family:'Roboto,sans-serif'; font-size:14px; color:#000000; background-color:#ffffff;\">\302\240are duplicates.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rsoCheckBox->setText(QApplication::translate("Dialog", "Require Same Orientation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPAIR_SOUP_H

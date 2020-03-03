/********************************************************************************
** Form generated from reading UI file 'Function_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTION_DIALOG_H
#define UI_FUNCTION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FunctionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *functionList;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FunctionDialog)
    {
        if (FunctionDialog->objectName().isEmpty())
            FunctionDialog->setObjectName(QStringLiteral("FunctionDialog"));
        FunctionDialog->resize(242, 97);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FunctionDialog->sizePolicy().hasHeightForWidth());
        FunctionDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(FunctionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(FunctionDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        functionList = new QComboBox(FunctionDialog);
        functionList->setObjectName(QStringLiteral("functionList"));

        verticalLayout->addWidget(functionList);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(FunctionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FunctionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FunctionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FunctionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FunctionDialog);
    } // setupUi

    void retranslateUi(QDialog *FunctionDialog)
    {
        FunctionDialog->setWindowTitle(QApplication::translate("FunctionDialog", "Load Function", Q_NULLPTR));
        label->setText(QApplication::translate("FunctionDialog", "Please choose the function to load:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FunctionDialog: public Ui_FunctionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTION_DIALOG_H

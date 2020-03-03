/********************************************************************************
** Form generated from reading UI file 'Show_point_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_POINT_DIALOG_H
#define UI_SHOW_POINT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Show_point_dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLabel *label_x;
    QLabel *coord_x;
    QLabel *label_y;
    QLabel *coord_y;
    QLabel *label_z;
    QLabel *coord_z;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Show_point_dialog)
    {
        if (Show_point_dialog->objectName().isEmpty())
            Show_point_dialog->setObjectName(QStringLiteral("Show_point_dialog"));
        Show_point_dialog->resize(575, 144);
        verticalLayout_2 = new QVBoxLayout(Show_point_dialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_7 = new QLabel(Show_point_dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        lineEdit = new QLineEdit(Show_point_dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_x = new QLabel(Show_point_dialog);
        label_x->setObjectName(QStringLiteral("label_x"));
        label_x->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_x);

        coord_x = new QLabel(Show_point_dialog);
        coord_x->setObjectName(QStringLiteral("coord_x"));

        formLayout->setWidget(2, QFormLayout::FieldRole, coord_x);

        label_y = new QLabel(Show_point_dialog);
        label_y->setObjectName(QStringLiteral("label_y"));
        label_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_y);

        coord_y = new QLabel(Show_point_dialog);
        coord_y->setObjectName(QStringLiteral("coord_y"));

        formLayout->setWidget(3, QFormLayout::FieldRole, coord_y);

        label_z = new QLabel(Show_point_dialog);
        label_z->setObjectName(QStringLiteral("label_z"));
        label_z->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_z);

        coord_z = new QLabel(Show_point_dialog);
        coord_z->setObjectName(QStringLiteral("coord_z"));

        formLayout->setWidget(4, QFormLayout::FieldRole, coord_z);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(Show_point_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);

#ifndef QT_NO_SHORTCUT
        label_7->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(Show_point_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Show_point_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Show_point_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Show_point_dialog);
    } // setupUi

    void retranslateUi(QDialog *Show_point_dialog)
    {
        Show_point_dialog->setWindowTitle(QApplication::translate("Show_point_dialog", "Show Point", Q_NULLPTR));
        label_7->setText(QApplication::translate("Show_point_dialog", "Point &coordinates", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("Show_point_dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu LGC Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Paste here the coordinates of a point. It can be for example:</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&quot;(10., -2e-2, .4)&quot;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">or:</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&quot;-2 3 5&quot;</p>\n"
"<p style=\" margin"
                        "-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">or even something with garbage around:</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&quot;point  (-2, 5, 0) and...&quot;</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_x->setText(QApplication::translate("Show_point_dialog", "x", Q_NULLPTR));
        coord_x->setText(QString());
        label_y->setText(QApplication::translate("Show_point_dialog", "y", Q_NULLPTR));
        coord_y->setText(QString());
        label_z->setText(QApplication::translate("Show_point_dialog", "z", Q_NULLPTR));
        coord_z->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Show_point_dialog: public Ui_Show_point_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_POINT_DIALOG_H

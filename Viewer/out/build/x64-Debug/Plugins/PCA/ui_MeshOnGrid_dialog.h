/********************************************************************************
** Form generated from reading UI file 'MeshOnGrid_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESHONGRID_DIALOG_H
#define UI_MESHONGRID_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_GridDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *x_space_doubleSpinBox;
    QLabel *label_4;
    QLabel *label;
    QSpinBox *x_spinBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *y_space_doubleSpinBox;
    QLabel *label_5;
    QSpinBox *y_spinBox;
    QLabel *label_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QDoubleSpinBox *z_space_doubleSpinBox;
    QLabel *label_3;
    QLabel *label_6;
    QSpinBox *z_spinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GridDialog)
    {
        if (GridDialog->objectName().isEmpty())
            GridDialog->setObjectName(QStringLiteral("GridDialog"));
        GridDialog->resize(330, 394);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GridDialog->sizePolicy().hasHeightForWidth());
        GridDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(GridDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(GridDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        x_space_doubleSpinBox = new QDoubleSpinBox(groupBox);
        x_space_doubleSpinBox->setObjectName(QStringLiteral("x_space_doubleSpinBox"));
        x_space_doubleSpinBox->setMaximum(1e+89);

        gridLayout_2->addWidget(x_space_doubleSpinBox, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        x_spinBox = new QSpinBox(groupBox);
        x_spinBox->setObjectName(QStringLiteral("x_spinBox"));
        x_spinBox->setMaximum(999);
        x_spinBox->setValue(2);

        gridLayout_2->addWidget(x_spinBox, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(GridDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        y_space_doubleSpinBox = new QDoubleSpinBox(groupBox_2);
        y_space_doubleSpinBox->setObjectName(QStringLiteral("y_space_doubleSpinBox"));
        y_space_doubleSpinBox->setMaximum(1e+89);

        gridLayout_3->addWidget(y_space_doubleSpinBox, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        y_spinBox = new QSpinBox(groupBox_2);
        y_spinBox->setObjectName(QStringLiteral("y_spinBox"));
        y_spinBox->setMaximum(999);
        y_spinBox->setValue(2);

        gridLayout_3->addWidget(y_spinBox, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(GridDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        z_space_doubleSpinBox = new QDoubleSpinBox(groupBox_3);
        z_space_doubleSpinBox->setObjectName(QStringLiteral("z_space_doubleSpinBox"));
        z_space_doubleSpinBox->setMaximum(1e+89);

        gridLayout->addWidget(z_space_doubleSpinBox, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        z_spinBox = new QSpinBox(groupBox_3);
        z_spinBox->setObjectName(QStringLiteral("z_spinBox"));
        z_spinBox->setMaximum(999);
        z_spinBox->setValue(2);

        gridLayout->addWidget(z_spinBox, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(GridDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GridDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GridDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GridDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GridDialog);
    } // setupUi

    void retranslateUi(QDialog *GridDialog)
    {
        GridDialog->setWindowTitle(QApplication::translate("GridDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("GridDialog", "Along X", Q_NULLPTR));
        label_4->setText(QApplication::translate("GridDialog", "Spacing:", Q_NULLPTR));
        label->setText(QApplication::translate("GridDialog", "Number of items : ", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("GridDialog", "Along Y", Q_NULLPTR));
        label_5->setText(QApplication::translate("GridDialog", "Spacing:", Q_NULLPTR));
        label_2->setText(QApplication::translate("GridDialog", "Number of items : ", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("GridDialog", "Along Z", Q_NULLPTR));
        label_3->setText(QApplication::translate("GridDialog", "Number of items : ", Q_NULLPTR));
        label_6->setText(QApplication::translate("GridDialog", "Spacing:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GridDialog: public Ui_GridDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHONGRID_DIALOG_H

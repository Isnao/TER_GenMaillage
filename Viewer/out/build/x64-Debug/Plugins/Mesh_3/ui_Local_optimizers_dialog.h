/********************************************************************************
** Form generated from reading UI file 'Local_optimizers_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCAL_OPTIMIZERS_DIALOG_H
#define UI_LOCAL_OPTIMIZERS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LocalOptim_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *objectName;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *timeLabel;
    QDoubleSpinBox *maxTime;
    QCheckBox *noTimeLimit;
    QLabel *sliverLabel;
    QDoubleSpinBox *sliverBound;
    QCheckBox *noBound;
    QHBoxLayout *horizontalLayout;
    QCheckBox *createNewItem;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LocalOptim_dialog)
    {
        if (LocalOptim_dialog->objectName().isEmpty())
            LocalOptim_dialog->setObjectName(QStringLiteral("LocalOptim_dialog"));
        LocalOptim_dialog->resize(546, 317);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LocalOptim_dialog->sizePolicy().hasHeightForWidth());
        LocalOptim_dialog->setSizePolicy(sizePolicy);
        LocalOptim_dialog->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(LocalOptim_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        objectName = new QLabel(LocalOptim_dialog);
        objectName->setObjectName(QStringLiteral("objectName"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        objectName->setFont(font);

        verticalLayout->addWidget(objectName);

        groupBox = new QGroupBox(LocalOptim_dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font1;
        font1.setPointSize(13);
        groupBox->setFont(font1);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        timeLabel = new QLabel(groupBox);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(timeLabel, 0, 0, 1, 1);

        maxTime = new QDoubleSpinBox(groupBox);
        maxTime->setObjectName(QStringLiteral("maxTime"));
        maxTime->setMinimumSize(QSize(100, 0));
        maxTime->setDecimals(1);
        maxTime->setMaximum(9999);
        maxTime->setValue(60);

        gridLayout_2->addWidget(maxTime, 0, 1, 1, 1);

        noTimeLimit = new QCheckBox(groupBox);
        noTimeLimit->setObjectName(QStringLiteral("noTimeLimit"));

        gridLayout_2->addWidget(noTimeLimit, 0, 2, 1, 1);

        sliverLabel = new QLabel(groupBox);
        sliverLabel->setObjectName(QStringLiteral("sliverLabel"));
        sliverLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(sliverLabel, 1, 0, 1, 1);

        sliverBound = new QDoubleSpinBox(groupBox);
        sliverBound->setObjectName(QStringLiteral("sliverBound"));
        sliverBound->setMinimumSize(QSize(100, 0));
        sliverBound->setReadOnly(false);
        sliverBound->setDecimals(1);
        sliverBound->setMaximum(180);
        sliverBound->setValue(8);

        gridLayout_2->addWidget(sliverBound, 1, 1, 1, 1);

        noBound = new QCheckBox(groupBox);
        noBound->setObjectName(QStringLiteral("noBound"));

        gridLayout_2->addWidget(noBound, 1, 2, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        createNewItem = new QCheckBox(LocalOptim_dialog);
        createNewItem->setObjectName(QStringLiteral("createNewItem"));
        createNewItem->setLayoutDirection(Qt::RightToLeft);
        createNewItem->setChecked(true);

        horizontalLayout->addWidget(createNewItem);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        buttonBox = new QDialogButtonBox(LocalOptim_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        timeLabel->setBuddy(maxTime);
        sliverLabel->setBuddy(sliverBound);
#endif // QT_NO_SHORTCUT

        retranslateUi(LocalOptim_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LocalOptim_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LocalOptim_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LocalOptim_dialog);
    } // setupUi

    void retranslateUi(QDialog *LocalOptim_dialog)
    {
        LocalOptim_dialog->setWindowTitle(QApplication::translate("LocalOptim_dialog", "Local optimizer parameters", Q_NULLPTR));
        objectName->setText(QApplication::translate("LocalOptim_dialog", "NO OBJECT", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("LocalOptim_dialog", "Parameters", Q_NULLPTR));
        timeLabel->setText(QApplication::translate("LocalOptim_dialog", "Max CPU running time (s)", Q_NULLPTR));
        noTimeLimit->setText(QApplication::translate("LocalOptim_dialog", "No time limit", Q_NULLPTR));
        sliverLabel->setText(QApplication::translate("LocalOptim_dialog", "Min. dihedral angle (degree)", Q_NULLPTR));
        noBound->setText(QApplication::translate("LocalOptim_dialog", "No angle bound", Q_NULLPTR));
        createNewItem->setText(QApplication::translate("LocalOptim_dialog", "Create a new mesh object", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LocalOptim_dialog: public Ui_LocalOptim_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCAL_OPTIMIZERS_DIALOG_H

/********************************************************************************
** Form generated from reading UI file 'Smoother_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMOOTHER_DIALOG_H
#define UI_SMOOTHER_DIALOG_H

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

class Ui_Smoother_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *objectName;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *timeLabel;
    QCheckBox *noTimeLimit;
    QDoubleSpinBox *maxTime;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *iterationLabel;
    QDoubleSpinBox *maxIterationNb;
    QLabel *convergenceLabel;
    QDoubleSpinBox *convergenceRatio;
    QLabel *freezeLabel;
    QDoubleSpinBox *freezeRatio;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *createNewItem;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Smoother_dialog)
    {
        if (Smoother_dialog->objectName().isEmpty())
            Smoother_dialog->setObjectName(QStringLiteral("Smoother_dialog"));
        Smoother_dialog->resize(507, 328);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Smoother_dialog->sizePolicy().hasHeightForWidth());
        Smoother_dialog->setSizePolicy(sizePolicy);
        Smoother_dialog->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(Smoother_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        objectName = new QLabel(Smoother_dialog);
        objectName->setObjectName(QStringLiteral("objectName"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        objectName->setFont(font);

        verticalLayout->addWidget(objectName);

        groupBox = new QGroupBox(Smoother_dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font1;
        font1.setPointSize(13);
        groupBox->setFont(font1);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setContentsMargins(-1, 8, -1, 8);
        timeLabel = new QLabel(groupBox);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(timeLabel, 1, 0, 1, 1);

        noTimeLimit = new QCheckBox(groupBox);
        noTimeLimit->setObjectName(QStringLiteral("noTimeLimit"));
        noTimeLimit->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(noTimeLimit, 1, 2, 1, 1);

        maxTime = new QDoubleSpinBox(groupBox);
        maxTime->setObjectName(QStringLiteral("maxTime"));
        maxTime->setMinimumSize(QSize(100, 0));
        maxTime->setDecimals(1);
        maxTime->setMaximum(9999);
        maxTime->setValue(60);

        gridLayout_2->addWidget(maxTime, 1, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Smoother_dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QFont font2;
        font2.setPointSize(11);
        font2.setItalic(true);
        groupBox_2->setFont(font2);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 8, -1, 8);
        iterationLabel = new QLabel(groupBox_2);
        iterationLabel->setObjectName(QStringLiteral("iterationLabel"));
        iterationLabel->setFont(font2);
        iterationLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(iterationLabel, 0, 0, 1, 1);

        maxIterationNb = new QDoubleSpinBox(groupBox_2);
        maxIterationNb->setObjectName(QStringLiteral("maxIterationNb"));
        maxIterationNb->setDecimals(0);
        maxIterationNb->setMaximum(200);
        maxIterationNb->setValue(100);

        gridLayout_3->addWidget(maxIterationNb, 0, 1, 1, 1);

        convergenceLabel = new QLabel(groupBox_2);
        convergenceLabel->setObjectName(QStringLiteral("convergenceLabel"));
        convergenceLabel->setFont(font2);
        convergenceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(convergenceLabel, 1, 0, 1, 1);

        convergenceRatio = new QDoubleSpinBox(groupBox_2);
        convergenceRatio->setObjectName(QStringLiteral("convergenceRatio"));
        convergenceRatio->setDecimals(4);
        convergenceRatio->setMinimum(0.0001);
        convergenceRatio->setMaximum(1);
        convergenceRatio->setSingleStep(0.01);

        gridLayout_3->addWidget(convergenceRatio, 1, 1, 1, 1);

        freezeLabel = new QLabel(groupBox_2);
        freezeLabel->setObjectName(QStringLiteral("freezeLabel"));
        freezeLabel->setFont(font2);
        freezeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(freezeLabel, 2, 0, 1, 1);

        freezeRatio = new QDoubleSpinBox(groupBox_2);
        freezeRatio->setObjectName(QStringLiteral("freezeRatio"));
        freezeRatio->setDecimals(4);
        freezeRatio->setMinimum(0);
        freezeRatio->setMaximum(1);
        freezeRatio->setSingleStep(0.001);
        freezeRatio->setValue(0);

        gridLayout_3->addWidget(freezeRatio, 2, 1, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        createNewItem = new QCheckBox(Smoother_dialog);
        createNewItem->setObjectName(QStringLiteral("createNewItem"));
        createNewItem->setLayoutDirection(Qt::RightToLeft);
        createNewItem->setChecked(true);

        horizontalLayout_2->addWidget(createNewItem);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        buttonBox = new QDialogButtonBox(Smoother_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        timeLabel->setBuddy(maxTime);
        iterationLabel->setBuddy(maxIterationNb);
        freezeLabel->setBuddy(freezeRatio);
#endif // QT_NO_SHORTCUT

        retranslateUi(Smoother_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Smoother_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Smoother_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Smoother_dialog);
    } // setupUi

    void retranslateUi(QDialog *Smoother_dialog)
    {
        Smoother_dialog->setWindowTitle(QApplication::translate("Smoother_dialog", "Global smoother parameters", Q_NULLPTR));
        objectName->setText(QApplication::translate("Smoother_dialog", "NO OBJECT", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Smoother_dialog", "Parameters", Q_NULLPTR));
        timeLabel->setText(QApplication::translate("Smoother_dialog", "Max CPU running time (s)", Q_NULLPTR));
        noTimeLimit->setText(QApplication::translate("Smoother_dialog", "No time limit", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Smoother_dialog", "Advanced Parameters", Q_NULLPTR));
        iterationLabel->setText(QApplication::translate("Smoother_dialog", "Maximum number of iterations", Q_NULLPTR));
        convergenceLabel->setText(QApplication::translate("Smoother_dialog", "Convergence ratio", Q_NULLPTR));
        freezeLabel->setText(QApplication::translate("Smoother_dialog", "Freeze ratio", Q_NULLPTR));
        createNewItem->setText(QApplication::translate("Smoother_dialog", "Create a new mesh object", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Smoother_dialog: public Ui_Smoother_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMOOTHER_DIALOG_H

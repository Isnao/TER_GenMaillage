/********************************************************************************
** Form generated from reading UI file 'Random_perturbation_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDOM_PERTURBATION_DIALOG_H
#define UI_RANDOM_PERTURBATION_DIALOG_H

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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Random_perturbation_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *objectName;
    QLabel *objectNameSize;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *moveSize_label;
    QLabel *protect_label;
    QDoubleSpinBox *moveSize_dspinbox;
    QCheckBox *project_checkbox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *deterministic_label;
    QCheckBox *deterministic_checkbox;
    QLabel *seed_label;
    QSpinBox *seed_spinbox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Random_perturbation_dialog)
    {
        if (Random_perturbation_dialog->objectName().isEmpty())
            Random_perturbation_dialog->setObjectName(QStringLiteral("Random_perturbation_dialog"));
        Random_perturbation_dialog->setEnabled(true);
        Random_perturbation_dialog->resize(377, 292);
        verticalLayout = new QVBoxLayout(Random_perturbation_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        objectName = new QLabel(Random_perturbation_dialog);
        objectName->setObjectName(QStringLiteral("objectName"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        objectName->setFont(font);

        verticalLayout->addWidget(objectName);

        objectNameSize = new QLabel(Random_perturbation_dialog);
        objectNameSize->setObjectName(QStringLiteral("objectNameSize"));

        verticalLayout->addWidget(objectNameSize);

        groupBox = new QGroupBox(Random_perturbation_dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(10);
        moveSize_label = new QLabel(groupBox);
        moveSize_label->setObjectName(QStringLiteral("moveSize_label"));
        moveSize_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(moveSize_label, 0, 0, 1, 1);

        protect_label = new QLabel(groupBox);
        protect_label->setObjectName(QStringLiteral("protect_label"));
        protect_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(protect_label, 1, 0, 1, 1);

        moveSize_dspinbox = new QDoubleSpinBox(groupBox);
        moveSize_dspinbox->setObjectName(QStringLiteral("moveSize_dspinbox"));
        moveSize_dspinbox->setMinimumSize(QSize(110, 0));
        moveSize_dspinbox->setMaximum(1000);
        moveSize_dspinbox->setSingleStep(0.1);

        gridLayout_2->addWidget(moveSize_dspinbox, 0, 1, 1, 1);

        project_checkbox = new QCheckBox(groupBox);
        project_checkbox->setObjectName(QStringLiteral("project_checkbox"));
        project_checkbox->setChecked(true);

        gridLayout_2->addWidget(project_checkbox, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Random_perturbation_dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(10);
        deterministic_label = new QLabel(groupBox_2);
        deterministic_label->setObjectName(QStringLiteral("deterministic_label"));
        deterministic_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(deterministic_label, 0, 0, 1, 1);

        deterministic_checkbox = new QCheckBox(groupBox_2);
        deterministic_checkbox->setObjectName(QStringLiteral("deterministic_checkbox"));

        gridLayout->addWidget(deterministic_checkbox, 0, 1, 1, 1);

        seed_label = new QLabel(groupBox_2);
        seed_label->setObjectName(QStringLiteral("seed_label"));
        seed_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(seed_label, 1, 0, 1, 1);

        seed_spinbox = new QSpinBox(groupBox_2);
        seed_spinbox->setObjectName(QStringLiteral("seed_spinbox"));
        seed_spinbox->setMinimumSize(QSize(110, 0));
        seed_spinbox->setValue(1);

        gridLayout->addWidget(seed_spinbox, 1, 1, 1, 1);

        seed_spinbox->raise();
        seed_label->raise();
        deterministic_label->raise();
        deterministic_checkbox->raise();

        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(Random_perturbation_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        moveSize_label->setBuddy(moveSize_dspinbox);
        deterministic_label->setBuddy(seed_spinbox);
        seed_label->setBuddy(seed_spinbox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(moveSize_dspinbox, project_checkbox);
        QWidget::setTabOrder(project_checkbox, buttonBox);

        retranslateUi(Random_perturbation_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Random_perturbation_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Random_perturbation_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Random_perturbation_dialog);
    } // setupUi

    void retranslateUi(QDialog *Random_perturbation_dialog)
    {
        Random_perturbation_dialog->setWindowTitle(QApplication::translate("Random_perturbation_dialog", "Random perturbation parameters", Q_NULLPTR));
        objectName->setText(QApplication::translate("Random_perturbation_dialog", "NO OBJECT", Q_NULLPTR));
        objectNameSize->setText(QApplication::translate("Random_perturbation_dialog", "No size", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Random_perturbation_dialog", "Parameters", Q_NULLPTR));
        moveSize_label->setText(QApplication::translate("Random_perturbation_dialog", "Maximal move length", Q_NULLPTR));
        protect_label->setText(QApplication::translate("Random_perturbation_dialog", "Keep vertices on surface", Q_NULLPTR));
        project_checkbox->setText(QString());
        groupBox_2->setTitle(QApplication::translate("Random_perturbation_dialog", "Advanced", Q_NULLPTR));
        deterministic_label->setText(QApplication::translate("Random_perturbation_dialog", "Deterministic", Q_NULLPTR));
        deterministic_checkbox->setText(QString());
        seed_label->setText(QApplication::translate("Random_perturbation_dialog", "Random seed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Random_perturbation_dialog: public Ui_Random_perturbation_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOM_PERTURBATION_DIALOG_H

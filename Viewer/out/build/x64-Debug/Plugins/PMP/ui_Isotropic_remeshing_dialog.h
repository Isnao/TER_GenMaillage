/********************************************************************************
** Form generated from reading UI file 'Isotropic_remeshing_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISOTROPIC_REMESHING_DIALOG_H
#define UI_ISOTROPIC_REMESHING_DIALOG_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Isotropic_remeshing_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *objectName;
    QLabel *objectNameSize;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *splitEdgesOnly_checkbox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *preserveDuplicates_label;
    QSpinBox *nbSmoothing_spinbox;
    QCheckBox *preserveDuplicates_checkbox;
    QLabel *edgeLength_label;
    QLabel *protect_label;
    QLabel *nbSmoothing_label;
    QSpinBox *nbIterations_spinbox;
    QLabel *smooth1D_label;
    QLabel *nbIterations_label;
    QCheckBox *smooth1D_checkbox;
    QCheckBox *protect_checkbox;
    QDoubleSpinBox *edgeLength_dspinbox;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Isotropic_remeshing_dialog)
    {
        if (Isotropic_remeshing_dialog->objectName().isEmpty())
            Isotropic_remeshing_dialog->setObjectName(QStringLiteral("Isotropic_remeshing_dialog"));
        Isotropic_remeshing_dialog->setEnabled(true);
        Isotropic_remeshing_dialog->resize(376, 368);
        verticalLayout = new QVBoxLayout(Isotropic_remeshing_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        objectName = new QLabel(Isotropic_remeshing_dialog);
        objectName->setObjectName(QStringLiteral("objectName"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        objectName->setFont(font);

        verticalLayout->addWidget(objectName);

        objectNameSize = new QLabel(Isotropic_remeshing_dialog);
        objectNameSize->setObjectName(QStringLiteral("objectNameSize"));

        verticalLayout->addWidget(objectNameSize);

        groupBox_2 = new QGroupBox(Isotropic_remeshing_dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitEdgesOnly_checkbox = new QCheckBox(groupBox_2);
        splitEdgesOnly_checkbox->setObjectName(QStringLiteral("splitEdgesOnly_checkbox"));

        horizontalLayout->addWidget(splitEdgesOnly_checkbox);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(Isotropic_remeshing_dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        preserveDuplicates_label = new QLabel(groupBox);
        preserveDuplicates_label->setObjectName(QStringLiteral("preserveDuplicates_label"));
        preserveDuplicates_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(preserveDuplicates_label, 6, 0, 1, 1);

        nbSmoothing_spinbox = new QSpinBox(groupBox);
        nbSmoothing_spinbox->setObjectName(QStringLiteral("nbSmoothing_spinbox"));
        nbSmoothing_spinbox->setMinimum(0);
        nbSmoothing_spinbox->setMaximum(100);
        nbSmoothing_spinbox->setValue(1);

        gridLayout_2->addWidget(nbSmoothing_spinbox, 2, 1, 1, 1);

        preserveDuplicates_checkbox = new QCheckBox(groupBox);
        preserveDuplicates_checkbox->setObjectName(QStringLiteral("preserveDuplicates_checkbox"));

        gridLayout_2->addWidget(preserveDuplicates_checkbox, 6, 1, 1, 1);

        edgeLength_label = new QLabel(groupBox);
        edgeLength_label->setObjectName(QStringLiteral("edgeLength_label"));
        edgeLength_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(edgeLength_label, 0, 0, 1, 1);

        protect_label = new QLabel(groupBox);
        protect_label->setObjectName(QStringLiteral("protect_label"));
        protect_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(protect_label, 4, 0, 1, 1);

        nbSmoothing_label = new QLabel(groupBox);
        nbSmoothing_label->setObjectName(QStringLiteral("nbSmoothing_label"));
        nbSmoothing_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(nbSmoothing_label, 2, 0, 1, 1);

        nbIterations_spinbox = new QSpinBox(groupBox);
        nbIterations_spinbox->setObjectName(QStringLiteral("nbIterations_spinbox"));
        nbIterations_spinbox->setMinimumSize(QSize(110, 0));
        nbIterations_spinbox->setValue(1);

        gridLayout_2->addWidget(nbIterations_spinbox, 1, 1, 1, 1);

        smooth1D_label = new QLabel(groupBox);
        smooth1D_label->setObjectName(QStringLiteral("smooth1D_label"));
        smooth1D_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(smooth1D_label, 5, 0, 1, 1);

        nbIterations_label = new QLabel(groupBox);
        nbIterations_label->setObjectName(QStringLiteral("nbIterations_label"));
        nbIterations_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(nbIterations_label, 1, 0, 1, 1);

        smooth1D_checkbox = new QCheckBox(groupBox);
        smooth1D_checkbox->setObjectName(QStringLiteral("smooth1D_checkbox"));

        gridLayout_2->addWidget(smooth1D_checkbox, 5, 1, 1, 1);

        protect_checkbox = new QCheckBox(groupBox);
        protect_checkbox->setObjectName(QStringLiteral("protect_checkbox"));
        protect_checkbox->setChecked(true);

        gridLayout_2->addWidget(protect_checkbox, 4, 1, 1, 1);

        edgeLength_dspinbox = new QDoubleSpinBox(groupBox);
        edgeLength_dspinbox->setObjectName(QStringLiteral("edgeLength_dspinbox"));
        edgeLength_dspinbox->setMinimumSize(QSize(110, 0));
        edgeLength_dspinbox->setMaximum(1000);
        edgeLength_dspinbox->setSingleStep(0.1);

        gridLayout_2->addWidget(edgeLength_dspinbox, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_2->addItem(verticalSpacer_3, 3, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(Isotropic_remeshing_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        edgeLength_label->setBuddy(edgeLength_dspinbox);
        nbIterations_label->setBuddy(nbIterations_spinbox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(splitEdgesOnly_checkbox, edgeLength_dspinbox);
        QWidget::setTabOrder(edgeLength_dspinbox, nbIterations_spinbox);
        QWidget::setTabOrder(nbIterations_spinbox, nbSmoothing_spinbox);
        QWidget::setTabOrder(nbSmoothing_spinbox, protect_checkbox);
        QWidget::setTabOrder(protect_checkbox, smooth1D_checkbox);
        QWidget::setTabOrder(smooth1D_checkbox, preserveDuplicates_checkbox);
        QWidget::setTabOrder(preserveDuplicates_checkbox, buttonBox);

        retranslateUi(Isotropic_remeshing_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Isotropic_remeshing_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Isotropic_remeshing_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Isotropic_remeshing_dialog);
    } // setupUi

    void retranslateUi(QDialog *Isotropic_remeshing_dialog)
    {
        Isotropic_remeshing_dialog->setWindowTitle(QApplication::translate("Isotropic_remeshing_dialog", "Isotropic remeshing criteria", Q_NULLPTR));
        objectName->setText(QApplication::translate("Isotropic_remeshing_dialog", "NO OBJECT", Q_NULLPTR));
        objectNameSize->setText(QApplication::translate("Isotropic_remeshing_dialog", "No size", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Isotropic_remeshing_dialog", "Remesh", Q_NULLPTR));
        splitEdgesOnly_checkbox->setText(QApplication::translate("Isotropic_remeshing_dialog", "Split only border/selected edges", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Isotropic_remeshing_dialog", "Isotropic remeshing", Q_NULLPTR));
        preserveDuplicates_label->setText(QApplication::translate("Isotropic_remeshing_dialog", "Preserve duplicated edges", Q_NULLPTR));
        preserveDuplicates_checkbox->setText(QString());
        edgeLength_label->setText(QApplication::translate("Isotropic_remeshing_dialog", "Target edge length", Q_NULLPTR));
        protect_label->setText(QApplication::translate("Isotropic_remeshing_dialog", "Protect borders/selected edges", Q_NULLPTR));
        nbSmoothing_label->setText(QApplication::translate("Isotropic_remeshing_dialog", "Number of Smoothing iterations", Q_NULLPTR));
        smooth1D_label->setText(QApplication::translate("Isotropic_remeshing_dialog", "Allow 1D smoothing along borders", Q_NULLPTR));
        nbIterations_label->setText(QApplication::translate("Isotropic_remeshing_dialog", "Number of Main iterations", Q_NULLPTR));
        smooth1D_checkbox->setText(QString());
        protect_checkbox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Isotropic_remeshing_dialog: public Ui_Isotropic_remeshing_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISOTROPIC_REMESHING_DIALOG_H

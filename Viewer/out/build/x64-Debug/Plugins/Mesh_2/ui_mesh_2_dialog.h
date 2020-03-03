/********************************************************************************
** Form generated from reading UI file 'mesh_2_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESH_2_DIALOG_H
#define UI_MESH_2_DIALOG_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_mesh_2_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *runLloyd_checkbox;
    QLabel *edgeLength_label;
    QLabel *nbIterations_label;
    QDoubleSpinBox *edgeLength_dspinbox;
    QLabel *runMesh2_label;
    QLabel *runLloyd_label;
    QSpinBox *nbIterations_spinbox;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioAll;
    QRadioButton *radioNesting;
    QRadioButton *radioSeedsIn;
    QRadioButton *radioSeedsOut;
    QCheckBox *runMesh2_checkbox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *mesh_2_dialog)
    {
        if (mesh_2_dialog->objectName().isEmpty())
            mesh_2_dialog->setObjectName(QStringLiteral("mesh_2_dialog"));
        mesh_2_dialog->setEnabled(true);
        mesh_2_dialog->resize(424, 301);
        verticalLayout = new QVBoxLayout(mesh_2_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(mesh_2_dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        runLloyd_checkbox = new QCheckBox(groupBox);
        runLloyd_checkbox->setObjectName(QStringLiteral("runLloyd_checkbox"));

        gridLayout->addWidget(runLloyd_checkbox, 3, 1, 1, 1);

        edgeLength_label = new QLabel(groupBox);
        edgeLength_label->setObjectName(QStringLiteral("edgeLength_label"));
        edgeLength_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(edgeLength_label, 1, 0, 1, 1);

        nbIterations_label = new QLabel(groupBox);
        nbIterations_label->setObjectName(QStringLiteral("nbIterations_label"));
        nbIterations_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nbIterations_label, 4, 0, 1, 1);

        edgeLength_dspinbox = new QDoubleSpinBox(groupBox);
        edgeLength_dspinbox->setObjectName(QStringLiteral("edgeLength_dspinbox"));
        edgeLength_dspinbox->setMinimumSize(QSize(110, 0));
        edgeLength_dspinbox->setMaximum(1000);
        edgeLength_dspinbox->setSingleStep(0.1);

        gridLayout->addWidget(edgeLength_dspinbox, 1, 1, 1, 1);

        runMesh2_label = new QLabel(groupBox);
        runMesh2_label->setObjectName(QStringLiteral("runMesh2_label"));
        runMesh2_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(runMesh2_label, 0, 0, 1, 1);

        runLloyd_label = new QLabel(groupBox);
        runLloyd_label->setObjectName(QStringLiteral("runLloyd_label"));
        runLloyd_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(runLloyd_label, 3, 0, 1, 1);

        nbIterations_spinbox = new QSpinBox(groupBox);
        nbIterations_spinbox->setObjectName(QStringLiteral("nbIterations_spinbox"));
        nbIterations_spinbox->setEnabled(false);
        nbIterations_spinbox->setMinimumSize(QSize(110, 0));

        gridLayout->addWidget(nbIterations_spinbox, 4, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioAll = new QRadioButton(groupBox);
        radioAll->setObjectName(QStringLiteral("radioAll"));

        verticalLayout_2->addWidget(radioAll);

        radioNesting = new QRadioButton(groupBox);
        radioNesting->setObjectName(QStringLiteral("radioNesting"));

        verticalLayout_2->addWidget(radioNesting);

        radioSeedsIn = new QRadioButton(groupBox);
        radioSeedsIn->setObjectName(QStringLiteral("radioSeedsIn"));

        verticalLayout_2->addWidget(radioSeedsIn);

        radioSeedsOut = new QRadioButton(groupBox);
        radioSeedsOut->setObjectName(QStringLiteral("radioSeedsOut"));

        verticalLayout_2->addWidget(radioSeedsOut);


        gridLayout->addLayout(verticalLayout_2, 2, 1, 1, 1);

        runMesh2_checkbox = new QCheckBox(groupBox);
        runMesh2_checkbox->setObjectName(QStringLiteral("runMesh2_checkbox"));
        runMesh2_checkbox->setChecked(true);

        gridLayout->addWidget(runMesh2_checkbox, 0, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(mesh_2_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        edgeLength_label->setBuddy(edgeLength_dspinbox);
        nbIterations_label->setBuddy(nbIterations_spinbox);
#endif // QT_NO_SHORTCUT

        retranslateUi(mesh_2_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), mesh_2_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), mesh_2_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(mesh_2_dialog);
    } // setupUi

    void retranslateUi(QDialog *mesh_2_dialog)
    {
        mesh_2_dialog->setWindowTitle(QApplication::translate("mesh_2_dialog", "2D Mesh Criteria", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("mesh_2_dialog", "Mesh_2", Q_NULLPTR));
        runLloyd_checkbox->setText(QString());
        edgeLength_label->setText(QApplication::translate("mesh_2_dialog", "Maximum edge length", Q_NULLPTR));
        nbIterations_label->setText(QApplication::translate("mesh_2_dialog", "Number of iterations", Q_NULLPTR));
        runMesh2_label->setText(QApplication::translate("mesh_2_dialog", "Run Mesh Refinement", Q_NULLPTR));
        runLloyd_label->setText(QApplication::translate("mesh_2_dialog", "Run Lloyd Optimisation", Q_NULLPTR));
        label->setText(QApplication::translate("mesh_2_dialog", "Domain Definition:", Q_NULLPTR));
        radioAll->setText(QApplication::translate("mesh_2_dialog", "Whole Domain", Q_NULLPTR));
        radioNesting->setText(QApplication::translate("mesh_2_dialog", "Use Nesting Number", Q_NULLPTR));
        radioSeedsIn->setText(QApplication::translate("mesh_2_dialog", "With Seeds Inside the Domain", Q_NULLPTR));
        radioSeedsOut->setText(QApplication::translate("mesh_2_dialog", "With Seeds Outside the Domain", Q_NULLPTR));
        runMesh2_checkbox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mesh_2_dialog: public Ui_mesh_2_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESH_2_DIALOG_H

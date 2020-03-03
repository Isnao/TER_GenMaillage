/********************************************************************************
** Form generated from reading UI file 'Remeshing_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMESHING_DIALOG_H
#define UI_REMESHING_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Remeshing_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *angleLabel;
    QDoubleSpinBox *angle;
    QLabel *sizingLabel;
    QDoubleSpinBox *sizing;
    QLabel *approxLabel;
    QDoubleSpinBox *approx;
    QComboBox *tags;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Remeshing_dialog)
    {
        if (Remeshing_dialog->objectName().isEmpty())
            Remeshing_dialog->setObjectName(QStringLiteral("Remeshing_dialog"));
        Remeshing_dialog->resize(344, 169);
        verticalLayout = new QVBoxLayout(Remeshing_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        angleLabel = new QLabel(Remeshing_dialog);
        angleLabel->setObjectName(QStringLiteral("angleLabel"));
        angleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(angleLabel, 0, 0, 1, 1);

        angle = new QDoubleSpinBox(Remeshing_dialog);
        angle->setObjectName(QStringLiteral("angle"));
        angle->setMinimum(1);
        angle->setMaximum(30);
        angle->setValue(25);

        gridLayout->addWidget(angle, 0, 1, 1, 1);

        sizingLabel = new QLabel(Remeshing_dialog);
        sizingLabel->setObjectName(QStringLiteral("sizingLabel"));
        sizingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sizingLabel, 1, 0, 1, 1);

        sizing = new QDoubleSpinBox(Remeshing_dialog);
        sizing->setObjectName(QStringLiteral("sizing"));
        sizing->setDecimals(4);

        gridLayout->addWidget(sizing, 1, 1, 1, 1);

        approxLabel = new QLabel(Remeshing_dialog);
        approxLabel->setObjectName(QStringLiteral("approxLabel"));
        approxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(approxLabel, 2, 0, 1, 1);

        approx = new QDoubleSpinBox(Remeshing_dialog);
        approx->setObjectName(QStringLiteral("approx"));

        gridLayout->addWidget(approx, 2, 1, 1, 1);

        tags = new QComboBox(Remeshing_dialog);
        tags->setObjectName(QStringLiteral("tags"));

        gridLayout->addWidget(tags, 3, 1, 1, 1);

        label = new QLabel(Remeshing_dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(Remeshing_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        angleLabel->setBuddy(angle);
        sizingLabel->setBuddy(sizing);
        approxLabel->setBuddy(approx);
        label->setBuddy(tags);
#endif // QT_NO_SHORTCUT

        retranslateUi(Remeshing_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Remeshing_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Remeshing_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Remeshing_dialog);
    } // setupUi

    void retranslateUi(QDialog *Remeshing_dialog)
    {
        Remeshing_dialog->setWindowTitle(QApplication::translate("Remeshing_dialog", "Meshing criteria", Q_NULLPTR));
        angleLabel->setText(QApplication::translate("Remeshing_dialog", "&Angle:", Q_NULLPTR));
        sizingLabel->setText(QApplication::translate("Remeshing_dialog", "&Size:", Q_NULLPTR));
        approxLabel->setText(QApplication::translate("Remeshing_dialog", "Approximation &error:", Q_NULLPTR));
        tags->clear();
        tags->insertItems(0, QStringList()
         << QApplication::translate("Remeshing_dialog", "Non manifold", Q_NULLPTR)
         << QApplication::translate("Remeshing_dialog", "Manifold", Q_NULLPTR)
         << QApplication::translate("Remeshing_dialog", "Manifold with boundaries", Q_NULLPTR)
        );
        label->setText(QApplication::translate("Remeshing_dialog", "&Topological criterion:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Remeshing_dialog: public Ui_Remeshing_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMESHING_DIALOG_H

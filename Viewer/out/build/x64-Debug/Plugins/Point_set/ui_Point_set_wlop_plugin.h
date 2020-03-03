/********************************************************************************
** Form generated from reading UI file 'Point_set_wlop_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT_SET_WLOP_PLUGIN_H
#define UI_POINT_SET_WLOP_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_WLOPRegularizationAndSimplificationDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLabel *label_2;
    QDoubleSpinBox *m_retainedPercentage;
    QDoubleSpinBox *m_neighborhoodRadius;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *WLOPRegularizationAndSimplificationDialog)
    {
        if (WLOPRegularizationAndSimplificationDialog->objectName().isEmpty())
            WLOPRegularizationAndSimplificationDialog->setObjectName(QStringLiteral("WLOPRegularizationAndSimplificationDialog"));
        WLOPRegularizationAndSimplificationDialog->resize(539, 108);
        gridLayout = new QGridLayout(WLOPRegularizationAndSimplificationDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(WLOPRegularizationAndSimplificationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        label_3 = new QLabel(WLOPRegularizationAndSimplificationDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(WLOPRegularizationAndSimplificationDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        m_retainedPercentage = new QDoubleSpinBox(WLOPRegularizationAndSimplificationDialog);
        m_retainedPercentage->setObjectName(QStringLiteral("m_retainedPercentage"));
        m_retainedPercentage->setDecimals(2);
        m_retainedPercentage->setMinimum(0.1);
        m_retainedPercentage->setMaximum(100);
        m_retainedPercentage->setSingleStep(0.1);
        m_retainedPercentage->setValue(50);

        gridLayout->addWidget(m_retainedPercentage, 0, 1, 1, 1);

        m_neighborhoodRadius = new QDoubleSpinBox(WLOPRegularizationAndSimplificationDialog);
        m_neighborhoodRadius->setObjectName(QStringLiteral("m_neighborhoodRadius"));
        m_neighborhoodRadius->setDecimals(2);
        m_neighborhoodRadius->setMinimum(0.1);
        m_neighborhoodRadius->setMaximum(10);
        m_neighborhoodRadius->setSingleStep(0.1);
        m_neighborhoodRadius->setValue(1);

        gridLayout->addWidget(m_neighborhoodRadius, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(WLOPRegularizationAndSimplificationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WLOPRegularizationAndSimplificationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WLOPRegularizationAndSimplificationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WLOPRegularizationAndSimplificationDialog);
    } // setupUi

    void retranslateUi(QDialog *WLOPRegularizationAndSimplificationDialog)
    {
        WLOPRegularizationAndSimplificationDialog->setWindowTitle(QApplication::translate("WLOPRegularizationAndSimplificationDialog", "WLOP Simplification and Regularization", Q_NULLPTR));
        label_3->setText(QApplication::translate("WLOPRegularizationAndSimplificationDialog", "Neighborhood Radius", Q_NULLPTR));
        label_2->setText(QApplication::translate("WLOPRegularizationAndSimplificationDialog", "Retained Percentage", Q_NULLPTR));
        m_retainedPercentage->setSuffix(QApplication::translate("WLOPRegularizationAndSimplificationDialog", " %", Q_NULLPTR));
        m_neighborhoodRadius->setSuffix(QApplication::translate("WLOPRegularizationAndSimplificationDialog", " * average spacing", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WLOPRegularizationAndSimplificationDialog: public Ui_WLOPRegularizationAndSimplificationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT_SET_WLOP_PLUGIN_H

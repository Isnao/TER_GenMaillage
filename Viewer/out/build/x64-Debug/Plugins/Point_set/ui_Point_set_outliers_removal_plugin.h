/********************************************************************************
** Form generated from reading UI file 'Point_set_outliers_removal_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT_SET_OUTLIERS_REMOVAL_PLUGIN_H
#define UI_POINT_SET_OUTLIERS_REMOVAL_PLUGIN_H

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
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_OutlierRemovalDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QSpinBox *m_inputNbNeighbors;
    QLabel *label;
    QDoubleSpinBox *m_inputPercentage;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QDoubleSpinBox *m_distanceThreshold;

    void setupUi(QDialog *OutlierRemovalDialog)
    {
        if (OutlierRemovalDialog->objectName().isEmpty())
            OutlierRemovalDialog->setObjectName(QStringLiteral("OutlierRemovalDialog"));
        OutlierRemovalDialog->resize(448, 147);
        gridLayout = new QGridLayout(OutlierRemovalDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(OutlierRemovalDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 1);

        label_2 = new QLabel(OutlierRemovalDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        m_inputNbNeighbors = new QSpinBox(OutlierRemovalDialog);
        m_inputNbNeighbors->setObjectName(QStringLiteral("m_inputNbNeighbors"));
        m_inputNbNeighbors->setMinimum(6);
        m_inputNbNeighbors->setMaximum(9999);
        m_inputNbNeighbors->setValue(24);

        gridLayout->addWidget(m_inputNbNeighbors, 2, 1, 1, 1);

        label = new QLabel(OutlierRemovalDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        m_inputPercentage = new QDoubleSpinBox(OutlierRemovalDialog);
        m_inputPercentage->setObjectName(QStringLiteral("m_inputPercentage"));
        m_inputPercentage->setMinimum(0);
        m_inputPercentage->setMaximum(100);
        m_inputPercentage->setSingleStep(0.1);
        m_inputPercentage->setValue(100);

        gridLayout->addWidget(m_inputPercentage, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        label_3 = new QLabel(OutlierRemovalDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        m_distanceThreshold = new QDoubleSpinBox(OutlierRemovalDialog);
        m_distanceThreshold->setObjectName(QStringLiteral("m_distanceThreshold"));
        m_distanceThreshold->setDecimals(6);
        m_distanceThreshold->setMinimum(0);
        m_distanceThreshold->setMaximum(100000);
        m_distanceThreshold->setSingleStep(0.1);
        m_distanceThreshold->setValue(0.5);

        gridLayout->addWidget(m_distanceThreshold, 0, 1, 1, 1);


        retranslateUi(OutlierRemovalDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OutlierRemovalDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OutlierRemovalDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OutlierRemovalDialog);
    } // setupUi

    void retranslateUi(QDialog *OutlierRemovalDialog)
    {
        OutlierRemovalDialog->setWindowTitle(QApplication::translate("OutlierRemovalDialog", "Outlier Removal", Q_NULLPTR));
        label_2->setText(QApplication::translate("OutlierRemovalDialog", "Neighbors:", Q_NULLPTR));
        label->setText(QApplication::translate("OutlierRemovalDialog", "Maximum Number of Removed Points", Q_NULLPTR));
        m_inputPercentage->setSuffix(QApplication::translate("OutlierRemovalDialog", " %", Q_NULLPTR));
        label_3->setText(QApplication::translate("OutlierRemovalDialog", "Distance threshold:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OutlierRemovalDialog: public Ui_OutlierRemovalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT_SET_OUTLIERS_REMOVAL_PLUGIN_H

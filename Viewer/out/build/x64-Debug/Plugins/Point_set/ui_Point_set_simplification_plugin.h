/********************************************************************************
** Form generated from reading UI file 'Point_set_simplification_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT_SET_SIMPLIFICATION_PLUGIN_H
#define UI_POINT_SET_SIMPLIFICATION_PLUGIN_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PointSetSimplificationDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QRadioButton *Grid;
    QSpinBox *m_maximumClusterSize;
    QLabel *label_5;
    QRadioButton *Random;
    QRadioButton *Hierarchy;
    QLabel *label_2;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;
    QDoubleSpinBox *m_randomSimplificationPercentage;
    QDoubleSpinBox *m_maximumSurfaceVariation;
    QDoubleSpinBox *m_gridCellSize;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *PointSetSimplificationDialog)
    {
        if (PointSetSimplificationDialog->objectName().isEmpty())
            PointSetSimplificationDialog->setObjectName(QStringLiteral("PointSetSimplificationDialog"));
        PointSetSimplificationDialog->resize(392, 248);
        gridLayout = new QGridLayout(PointSetSimplificationDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(PointSetSimplificationDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        Grid = new QRadioButton(PointSetSimplificationDialog);
        Grid->setObjectName(QStringLiteral("Grid"));

        gridLayout->addWidget(Grid, 4, 0, 1, 1);

        m_maximumClusterSize = new QSpinBox(PointSetSimplificationDialog);
        m_maximumClusterSize->setObjectName(QStringLiteral("m_maximumClusterSize"));
        m_maximumClusterSize->setEnabled(false);
        m_maximumClusterSize->setMinimum(1);
        m_maximumClusterSize->setMaximum(2147483647);
        m_maximumClusterSize->setValue(10);

        gridLayout->addWidget(m_maximumClusterSize, 7, 1, 1, 1);

        label_5 = new QLabel(PointSetSimplificationDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        Random = new QRadioButton(PointSetSimplificationDialog);
        Random->setObjectName(QStringLiteral("Random"));
        Random->setChecked(true);

        gridLayout->addWidget(Random, 2, 0, 1, 1);

        Hierarchy = new QRadioButton(PointSetSimplificationDialog);
        Hierarchy->setObjectName(QStringLiteral("Hierarchy"));

        gridLayout->addWidget(Hierarchy, 6, 0, 1, 1);

        label_2 = new QLabel(PointSetSimplificationDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(PointSetSimplificationDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PointSetSimplificationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 10, 0, 1, 2);

        m_randomSimplificationPercentage = new QDoubleSpinBox(PointSetSimplificationDialog);
        m_randomSimplificationPercentage->setObjectName(QStringLiteral("m_randomSimplificationPercentage"));
        m_randomSimplificationPercentage->setDecimals(2);
        m_randomSimplificationPercentage->setMinimum(0.1);
        m_randomSimplificationPercentage->setMaximum(100);
        m_randomSimplificationPercentage->setSingleStep(0.1);
        m_randomSimplificationPercentage->setValue(50);

        gridLayout->addWidget(m_randomSimplificationPercentage, 3, 1, 1, 1);

        m_maximumSurfaceVariation = new QDoubleSpinBox(PointSetSimplificationDialog);
        m_maximumSurfaceVariation->setObjectName(QStringLiteral("m_maximumSurfaceVariation"));
        m_maximumSurfaceVariation->setEnabled(false);
        m_maximumSurfaceVariation->setDecimals(5);
        m_maximumSurfaceVariation->setMinimum(1e-5);
        m_maximumSurfaceVariation->setMaximum(0.33333);
        m_maximumSurfaceVariation->setSingleStep(0.01234);
        m_maximumSurfaceVariation->setValue(0.33333);

        gridLayout->addWidget(m_maximumSurfaceVariation, 8, 1, 1, 1);

        m_gridCellSize = new QDoubleSpinBox(PointSetSimplificationDialog);
        m_gridCellSize->setObjectName(QStringLiteral("m_gridCellSize"));
        m_gridCellSize->setEnabled(false);
        m_gridCellSize->setDecimals(2);
        m_gridCellSize->setMinimum(0.1);
        m_gridCellSize->setMaximum(10);
        m_gridCellSize->setSingleStep(0.1);
        m_gridCellSize->setValue(1);

        gridLayout->addWidget(m_gridCellSize, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnMinimumWidth(1, 1);

        retranslateUi(PointSetSimplificationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PointSetSimplificationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PointSetSimplificationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PointSetSimplificationDialog);
    } // setupUi

    void retranslateUi(QDialog *PointSetSimplificationDialog)
    {
        PointSetSimplificationDialog->setWindowTitle(QApplication::translate("PointSetSimplificationDialog", "Simplification", Q_NULLPTR));
        label_4->setText(QApplication::translate("PointSetSimplificationDialog", "Maximum Cluster Size", Q_NULLPTR));
        Grid->setText(QApplication::translate("PointSetSimplificationDialog", "Grid", Q_NULLPTR));
        label_5->setText(QApplication::translate("PointSetSimplificationDialog", "Maximum Surface Variation", Q_NULLPTR));
        Random->setText(QApplication::translate("PointSetSimplificationDialog", "Random", Q_NULLPTR));
        Hierarchy->setText(QApplication::translate("PointSetSimplificationDialog", "Hierarchy", Q_NULLPTR));
        label_2->setText(QApplication::translate("PointSetSimplificationDialog", "Points to Remove Randomly", Q_NULLPTR));
        label_3->setText(QApplication::translate("PointSetSimplificationDialog", "Grid Cell Size", Q_NULLPTR));
        m_randomSimplificationPercentage->setSuffix(QApplication::translate("PointSetSimplificationDialog", " %", Q_NULLPTR));
        m_maximumSurfaceVariation->setSuffix(QString());
        m_gridCellSize->setSuffix(QApplication::translate("PointSetSimplificationDialog", " * average spacing", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PointSetSimplificationDialog: public Ui_PointSetSimplificationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT_SET_SIMPLIFICATION_PLUGIN_H

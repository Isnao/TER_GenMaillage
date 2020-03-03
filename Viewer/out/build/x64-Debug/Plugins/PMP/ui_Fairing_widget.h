/********************************************************************************
** Form generated from reading UI file 'Fairing_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAIRING_WIDGET_H
#define UI_FAIRING_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fairing
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *Weight_combo_box;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *Continuity_spin_box;
    QPushButton *Fair_button;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *Density_control_factor_spin_box;
    QPushButton *Refine_button;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *Fairing)
    {
        if (Fairing->objectName().isEmpty())
            Fairing->setObjectName(QStringLiteral("Fairing"));
        Fairing->resize(342, 274);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        Weight_combo_box = new QComboBox(groupBox);
        Weight_combo_box->setObjectName(QStringLiteral("Weight_combo_box"));

        horizontalLayout_4->addWidget(Weight_combo_box);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        Continuity_spin_box = new QSpinBox(groupBox);
        Continuity_spin_box->setObjectName(QStringLiteral("Continuity_spin_box"));
        Continuity_spin_box->setMinimum(0);
        Continuity_spin_box->setMaximum(2);
        Continuity_spin_box->setValue(1);

        horizontalLayout_2->addWidget(Continuity_spin_box);


        verticalLayout_2->addLayout(horizontalLayout_2);

        Fair_button = new QPushButton(groupBox);
        Fair_button->setObjectName(QStringLiteral("Fair_button"));

        verticalLayout_2->addWidget(Fair_button);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Density_control_factor_spin_box = new QDoubleSpinBox(groupBox_2);
        Density_control_factor_spin_box->setObjectName(QStringLiteral("Density_control_factor_spin_box"));
        Density_control_factor_spin_box->setMaximum(96.99);
        Density_control_factor_spin_box->setSingleStep(0.2);
        Density_control_factor_spin_box->setValue(2.41);

        horizontalLayout->addWidget(Density_control_factor_spin_box);


        verticalLayout_3->addLayout(horizontalLayout);

        Refine_button = new QPushButton(groupBox_2);
        Refine_button->setObjectName(QStringLiteral("Refine_button"));

        verticalLayout_3->addWidget(Refine_button);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Fairing->setWidget(dockWidgetContents);

        retranslateUi(Fairing);

        Weight_combo_box->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Fairing);
    } // setupUi

    void retranslateUi(QDockWidget *Fairing)
    {
        Fairing->setWindowTitle(QApplication::translate("Fairing", "Fairing", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Fairing", "Fairing", Q_NULLPTR));
        label_2->setText(QApplication::translate("Fairing", "Weight Type:", Q_NULLPTR));
        Weight_combo_box->clear();
        Weight_combo_box->insertItems(0, QStringList()
         << QApplication::translate("Fairing", "Cotangent Weight", Q_NULLPTR)
         << QApplication::translate("Fairing", "Uniform Weight", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("Fairing", "Continuity:", Q_NULLPTR));
        Fair_button->setText(QApplication::translate("Fairing", "Fair a region defined by a selection of vertices", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Fairing", "Refinement", Q_NULLPTR));
        label->setText(QApplication::translate("Fairing", "Density Control Factor:", Q_NULLPTR));
        Refine_button->setText(QApplication::translate("Fairing", "Refine a region defined by a selection of faces", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Fairing: public Ui_Fairing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAIRING_WIDGET_H

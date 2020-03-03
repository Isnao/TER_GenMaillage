/********************************************************************************
** Form generated from reading UI file 'Surface_mesh_approximation_dockwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SURFACE_MESH_APPROXIMATION_DOCKWIDGET_H
#define UI_SURFACE_MESH_APPROXIMATION_DOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
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

class Ui_Surface_mesh_approximation
{
public:
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QGroupBox *seeding;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboMetric;
    QComboBox *comboMethod;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_2;
    QSpinBox *nb_proxies;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *error_drop;
    QSpinBox *nb_relaxations;
    QLabel *label;
    QSpinBox *nb_iterations;
    QCheckBox *enable_error_drop;
    QPushButton *buttonSeeding;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonAdd;
    QPushButton *buttonFit;
    QPushButton *buttonTeleport;
    QGroupBox *operations;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_4;
    QSpinBox *split_nb_relaxations;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *split_proxy_idx;
    QLabel *label_5;
    QSpinBox *split_nb_sections;
    QLabel *label_6;
    QPushButton *buttonSplit;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *mesh_extraction;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *with_dihedral_angle;
    QLabel *label_7;
    QComboBox *comboRelative;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *chord_error;
    QLabel *label_3;
    QCheckBox *if_optimize_anchor_location;
    QCheckBox *pca_plane;
    QCheckBox *checkAutomatic;
    QPushButton *buttonMeshing;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDockWidget *Surface_mesh_approximation)
    {
        if (Surface_mesh_approximation->objectName().isEmpty())
            Surface_mesh_approximation->setObjectName(QStringLiteral("Surface_mesh_approximation"));
        Surface_mesh_approximation->resize(667, 360);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        seeding = new QGroupBox(dockWidgetContents);
        seeding->setObjectName(QStringLiteral("seeding"));
        seeding->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(seeding);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        comboMetric = new QComboBox(seeding);
        comboMetric->setObjectName(QStringLiteral("comboMetric"));

        verticalLayout_2->addWidget(comboMetric);

        comboMethod = new QComboBox(seeding);
        comboMethod->setObjectName(QStringLiteral("comboMethod"));

        verticalLayout_2->addWidget(comboMethod);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_9 = new QLabel(seeding);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        label_8 = new QLabel(seeding);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        label_2 = new QLabel(seeding);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        nb_proxies = new QSpinBox(seeding);
        nb_proxies->setObjectName(QStringLiteral("nb_proxies"));
        nb_proxies->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nb_proxies->setButtonSymbols(QAbstractSpinBox::NoButtons);
        nb_proxies->setMaximum(999);
        nb_proxies->setValue(20);

        gridLayout_2->addWidget(nb_proxies, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        error_drop = new QDoubleSpinBox(seeding);
        error_drop->setObjectName(QStringLiteral("error_drop"));
        error_drop->setEnabled(false);
        error_drop->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        error_drop->setButtonSymbols(QAbstractSpinBox::NoButtons);
        error_drop->setDecimals(4);
        error_drop->setMinimum(0.001);
        error_drop->setMaximum(1);
        error_drop->setSingleStep(0.01);
        error_drop->setValue(0.1);

        gridLayout_2->addWidget(error_drop, 2, 2, 1, 1);

        nb_relaxations = new QSpinBox(seeding);
        nb_relaxations->setObjectName(QStringLiteral("nb_relaxations"));
        nb_relaxations->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nb_relaxations->setButtonSymbols(QAbstractSpinBox::NoButtons);
        nb_relaxations->setValue(5);

        gridLayout_2->addWidget(nb_relaxations, 3, 2, 1, 1);

        label = new QLabel(seeding);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 4, 0, 1, 1);

        nb_iterations = new QSpinBox(seeding);
        nb_iterations->setObjectName(QStringLiteral("nb_iterations"));
        nb_iterations->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nb_iterations->setButtonSymbols(QAbstractSpinBox::NoButtons);
        nb_iterations->setMaximum(999);
        nb_iterations->setValue(20);

        gridLayout_2->addWidget(nb_iterations, 4, 2, 1, 1);

        enable_error_drop = new QCheckBox(seeding);
        enable_error_drop->setObjectName(QStringLiteral("enable_error_drop"));

        gridLayout_2->addWidget(enable_error_drop, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        buttonSeeding = new QPushButton(seeding);
        buttonSeeding->setObjectName(QStringLiteral("buttonSeeding"));

        verticalLayout_2->addWidget(buttonSeeding);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(seeding);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonAdd = new QPushButton(groupBox_2);
        buttonAdd->setObjectName(QStringLiteral("buttonAdd"));

        verticalLayout->addWidget(buttonAdd);

        buttonFit = new QPushButton(groupBox_2);
        buttonFit->setObjectName(QStringLiteral("buttonFit"));

        verticalLayout->addWidget(buttonFit);

        buttonTeleport = new QPushButton(groupBox_2);
        buttonTeleport->setObjectName(QStringLiteral("buttonTeleport"));

        verticalLayout->addWidget(buttonTeleport);

        operations = new QGroupBox(groupBox_2);
        operations->setObjectName(QStringLiteral("operations"));
        verticalLayout_6 = new QVBoxLayout(operations);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        split_nb_relaxations = new QSpinBox(operations);
        split_nb_relaxations->setObjectName(QStringLiteral("split_nb_relaxations"));
        split_nb_relaxations->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        split_nb_relaxations->setButtonSymbols(QAbstractSpinBox::NoButtons);
        split_nb_relaxations->setMinimum(0);
        split_nb_relaxations->setValue(10);

        gridLayout_4->addWidget(split_nb_relaxations, 2, 2, 1, 1);

        label_4 = new QLabel(operations);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        split_proxy_idx = new QSpinBox(operations);
        split_proxy_idx->setObjectName(QStringLiteral("split_proxy_idx"));
        split_proxy_idx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        split_proxy_idx->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_4->addWidget(split_proxy_idx, 0, 2, 1, 1);

        label_5 = new QLabel(operations);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        split_nb_sections = new QSpinBox(operations);
        split_nb_sections->setObjectName(QStringLiteral("split_nb_sections"));
        split_nb_sections->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        split_nb_sections->setButtonSymbols(QAbstractSpinBox::NoButtons);
        split_nb_sections->setMinimum(2);

        gridLayout_4->addWidget(split_nb_sections, 1, 2, 1, 1);

        label_6 = new QLabel(operations);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 2, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_4);

        buttonSplit = new QPushButton(operations);
        buttonSplit->setObjectName(QStringLiteral("buttonSplit"));

        verticalLayout_6->addWidget(buttonSplit);


        verticalLayout->addWidget(operations);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        horizontalLayout->addWidget(groupBox_2);

        mesh_extraction = new QGroupBox(dockWidgetContents);
        mesh_extraction->setObjectName(QStringLiteral("mesh_extraction"));
        mesh_extraction->setEnabled(true);
        verticalLayout_5 = new QVBoxLayout(mesh_extraction);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox = new QGroupBox(mesh_extraction);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        with_dihedral_angle = new QCheckBox(groupBox);
        with_dihedral_angle->setObjectName(QStringLiteral("with_dihedral_angle"));

        verticalLayout_3->addWidget(with_dihedral_angle);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_3->addWidget(label_7);

        comboRelative = new QComboBox(groupBox);
        comboRelative->setObjectName(QStringLiteral("comboRelative"));

        verticalLayout_3->addWidget(comboRelative);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        chord_error = new QDoubleSpinBox(groupBox);
        chord_error->setObjectName(QStringLiteral("chord_error"));
        chord_error->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        chord_error->setButtonSymbols(QAbstractSpinBox::NoButtons);
        chord_error->setMaximum(10);
        chord_error->setSingleStep(0.1);
        chord_error->setValue(3);

        gridLayout->addWidget(chord_error, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_5->addWidget(groupBox);

        if_optimize_anchor_location = new QCheckBox(mesh_extraction);
        if_optimize_anchor_location->setObjectName(QStringLiteral("if_optimize_anchor_location"));
        if_optimize_anchor_location->setChecked(true);

        verticalLayout_5->addWidget(if_optimize_anchor_location);

        pca_plane = new QCheckBox(mesh_extraction);
        pca_plane->setObjectName(QStringLiteral("pca_plane"));

        verticalLayout_5->addWidget(pca_plane);

        checkAutomatic = new QCheckBox(mesh_extraction);
        checkAutomatic->setObjectName(QStringLiteral("checkAutomatic"));

        verticalLayout_5->addWidget(checkAutomatic);

        buttonMeshing = new QPushButton(mesh_extraction);
        buttonMeshing->setObjectName(QStringLiteral("buttonMeshing"));

        verticalLayout_5->addWidget(buttonMeshing);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(mesh_extraction);

        Surface_mesh_approximation->setWidget(dockWidgetContents);

        retranslateUi(Surface_mesh_approximation);
        QObject::connect(enable_error_drop, SIGNAL(toggled(bool)), error_drop, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Surface_mesh_approximation);
    } // setupUi

    void retranslateUi(QDockWidget *Surface_mesh_approximation)
    {
        Surface_mesh_approximation->setWindowTitle(QApplication::translate("Surface_mesh_approximation", "Surface mesh approximation settings", Q_NULLPTR));
        seeding->setTitle(QApplication::translate("Surface_mesh_approximation", "Step1: Seeding", Q_NULLPTR));
        comboMetric->clear();
        comboMetric->insertItems(0, QStringList()
         << QApplication::translate("Surface_mesh_approximation", "L21 metric", Q_NULLPTR)
         << QApplication::translate("Surface_mesh_approximation", "L2 metric", Q_NULLPTR)
         << QApplication::translate("Surface_mesh_approximation", "Compact metric", Q_NULLPTR)
        );
        comboMethod->clear();
        comboMethod->insertItems(0, QStringList()
         << QApplication::translate("Surface_mesh_approximation", "Random", Q_NULLPTR)
         << QApplication::translate("Surface_mesh_approximation", "Incremental", Q_NULLPTR)
         << QApplication::translate("Surface_mesh_approximation", "Hierarchical", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("Surface_mesh_approximation", "Error drop", Q_NULLPTR));
        label_8->setText(QApplication::translate("Surface_mesh_approximation", "#Proxies", Q_NULLPTR));
        label_2->setText(QApplication::translate("Surface_mesh_approximation", "#Relaxations", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        error_drop->setToolTip(QApplication::translate("Surface_mesh_approximation", "Negative value is ignored", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Surface_mesh_approximation", "#Iterations", Q_NULLPTR));
        enable_error_drop->setText(QString());
        buttonSeeding->setText(QApplication::translate("Surface_mesh_approximation", "Initialize seeds", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Surface_mesh_approximation", "Step2: Pliant operations", Q_NULLPTR));
        buttonAdd->setText(QApplication::translate("Surface_mesh_approximation", "Add one proxy", Q_NULLPTR));
        buttonFit->setText(QApplication::translate("Surface_mesh_approximation", "Fit one step", Q_NULLPTR));
        buttonTeleport->setText(QApplication::translate("Surface_mesh_approximation", "Teleport one proxy", Q_NULLPTR));
        operations->setTitle(QApplication::translate("Surface_mesh_approximation", "Split", Q_NULLPTR));
        label_4->setText(QApplication::translate("Surface_mesh_approximation", "Proxy index", Q_NULLPTR));
        label_5->setText(QApplication::translate("Surface_mesh_approximation", "#Sections", Q_NULLPTR));
        label_6->setText(QApplication::translate("Surface_mesh_approximation", "#Relaxation", Q_NULLPTR));
        buttonSplit->setText(QApplication::translate("Surface_mesh_approximation", "Split", Q_NULLPTR));
        mesh_extraction->setTitle(QApplication::translate("Surface_mesh_approximation", "Step3: Mesh extraction", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Surface_mesh_approximation", "Subdivision anchors", Q_NULLPTR));
        with_dihedral_angle->setText(QApplication::translate("Surface_mesh_approximation", "With dihedral angle", Q_NULLPTR));
        label_7->setText(QApplication::translate("Surface_mesh_approximation", "Relative to:", Q_NULLPTR));
        comboRelative->clear();
        comboRelative->insertItems(0, QStringList()
         << QApplication::translate("Surface_mesh_approximation", "Average edge length", Q_NULLPTR)
         << QApplication::translate("Surface_mesh_approximation", "Chord length", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("Surface_mesh_approximation", "Chord error:", Q_NULLPTR));
        if_optimize_anchor_location->setText(QApplication::translate("Surface_mesh_approximation", "Optimize anchor location", Q_NULLPTR));
        pca_plane->setText(QApplication::translate("Surface_mesh_approximation", "PCA plane", Q_NULLPTR));
        checkAutomatic->setText(QApplication::translate("Surface_mesh_approximation", "Automatic extraction", Q_NULLPTR));
        buttonMeshing->setText(QApplication::translate("Surface_mesh_approximation", "Extract", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Surface_mesh_approximation: public Ui_Surface_mesh_approximation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SURFACE_MESH_APPROXIMATION_DOCKWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'Selection_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTION_WIDGET_H
#define UI_SELECTION_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Selection
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Create_selection_item_button;
    QPushButton *Clear_all_button;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *hl_checkBox;
    QTabWidget *selectionOrEuler;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QComboBox *Selection_type_combo_box;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *lassoCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_7;
    QPushButton *Select_all_NTButton;
    QPushButton *Select_boundaryButton;
    QPushButton *Add_to_selection_button;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QRadioButton *Insertion_radio_button;
    QRadioButton *Removal_radio_button;
    QLabel *label;
    QSpinBox *Brush_size_spin_box;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpinBox *Threshold_size_spin_box;
    QPushButton *Get_minimum_button;
    QSpacerItem *verticalSpacer_7;
    QPushButton *Select_isolated_components_button;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpinBox *Sharp_angle_spinbox;
    QPushButton *Select_sharp_edges_button;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *Expand_reduce_button;
    QSpinBox *Expand_reduce_spin_box;
    QPushButton *Clear_button;
    QPushButton *Inverse_selection_button;
    QPushButton *Select_all_button;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *operationsBox;
    QPushButton *validateButton;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *edition_groupBox;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_9;
    QComboBox *editionBox;
    QLabel *instructionsLabel;
    QLabel *docImage_Label;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName(QStringLiteral("Selection"));
        Selection->resize(613, 365);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Create_selection_item_button = new QPushButton(dockWidgetContents);
        Create_selection_item_button->setObjectName(QStringLiteral("Create_selection_item_button"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Create_selection_item_button->setFont(font);

        horizontalLayout_4->addWidget(Create_selection_item_button);

        Clear_all_button = new QPushButton(dockWidgetContents);
        Clear_all_button->setObjectName(QStringLiteral("Clear_all_button"));

        horizontalLayout_4->addWidget(Clear_all_button);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        hl_checkBox = new QCheckBox(dockWidgetContents);
        hl_checkBox->setObjectName(QStringLiteral("hl_checkBox"));
        hl_checkBox->setChecked(true);

        horizontalLayout_2->addWidget(hl_checkBox);


        verticalLayout_6->addLayout(horizontalLayout_2);

        selectionOrEuler = new QTabWidget(dockWidgetContents);
        selectionOrEuler->setObjectName(QStringLiteral("selectionOrEuler"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tabWidget = new QTabWidget(tab_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_9->addWidget(label_2);

        Selection_type_combo_box = new QComboBox(tab);
        Selection_type_combo_box->setObjectName(QStringLiteral("Selection_type_combo_box"));

        horizontalLayout_9->addWidget(Selection_type_combo_box);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        lassoCheckBox = new QCheckBox(tab);
        lassoCheckBox->setObjectName(QStringLiteral("lassoCheckBox"));

        horizontalLayout_11->addWidget(lassoCheckBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        Select_all_NTButton = new QPushButton(tab);
        Select_all_NTButton->setObjectName(QStringLiteral("Select_all_NTButton"));

        verticalLayout_7->addWidget(Select_all_NTButton);

        Select_boundaryButton = new QPushButton(tab);
        Select_boundaryButton->setObjectName(QStringLiteral("Select_boundaryButton"));

        verticalLayout_7->addWidget(Select_boundaryButton);


        horizontalLayout_11->addLayout(verticalLayout_7);

        Add_to_selection_button = new QPushButton(tab);
        Add_to_selection_button->setObjectName(QStringLiteral("Add_to_selection_button"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Add_to_selection_button->sizePolicy().hasHeightForWidth());
        Add_to_selection_button->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(Add_to_selection_button);

        horizontalLayout_11->setStretch(1, 1);
        horizontalLayout_11->setStretch(3, 1);

        verticalLayout_2->addLayout(horizontalLayout_11);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Insertion_radio_button = new QRadioButton(tab);
        Insertion_radio_button->setObjectName(QStringLiteral("Insertion_radio_button"));
        Insertion_radio_button->setChecked(true);

        horizontalLayout->addWidget(Insertion_radio_button);

        Removal_radio_button = new QRadioButton(tab);
        Removal_radio_button->setObjectName(QStringLiteral("Removal_radio_button"));

        horizontalLayout->addWidget(Removal_radio_button);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Brush_size_spin_box = new QSpinBox(tab);
        Brush_size_spin_box->setObjectName(QStringLiteral("Brush_size_spin_box"));

        horizontalLayout->addWidget(Brush_size_spin_box);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_3);

        Threshold_size_spin_box = new QSpinBox(tab_2);
        Threshold_size_spin_box->setObjectName(QStringLiteral("Threshold_size_spin_box"));
        sizePolicy1.setHeightForWidth(Threshold_size_spin_box->sizePolicy().hasHeightForWidth());
        Threshold_size_spin_box->setSizePolicy(sizePolicy1);
        Threshold_size_spin_box->setMaximum(999999999);
        Threshold_size_spin_box->setValue(8);

        horizontalLayout_5->addWidget(Threshold_size_spin_box);

        Get_minimum_button = new QPushButton(tab_2);
        Get_minimum_button->setObjectName(QStringLiteral("Get_minimum_button"));
        sizePolicy1.setHeightForWidth(Get_minimum_button->sizePolicy().hasHeightForWidth());
        Get_minimum_button->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(Get_minimum_button);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_7);

        Select_isolated_components_button = new QPushButton(tab_2);
        Select_isolated_components_button->setObjectName(QStringLiteral("Select_isolated_components_button"));

        verticalLayout_3->addWidget(Select_isolated_components_button);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_6);

        Sharp_angle_spinbox = new QSpinBox(tab_2);
        Sharp_angle_spinbox->setObjectName(QStringLiteral("Sharp_angle_spinbox"));
        sizePolicy.setHeightForWidth(Sharp_angle_spinbox->sizePolicy().hasHeightForWidth());
        Sharp_angle_spinbox->setSizePolicy(sizePolicy);
        Sharp_angle_spinbox->setMaximum(180);
        Sharp_angle_spinbox->setValue(60);

        horizontalLayout_7->addWidget(Sharp_angle_spinbox);

        Select_sharp_edges_button = new QPushButton(tab_2);
        Select_sharp_edges_button->setObjectName(QStringLiteral("Select_sharp_edges_button"));

        horizontalLayout_7->addWidget(Select_sharp_edges_button);


        verticalLayout_3->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_3->addWidget(tabWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Expand_reduce_button = new QPushButton(tab_3);
        Expand_reduce_button->setObjectName(QStringLiteral("Expand_reduce_button"));
        sizePolicy1.setHeightForWidth(Expand_reduce_button->sizePolicy().hasHeightForWidth());
        Expand_reduce_button->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(Expand_reduce_button);

        Expand_reduce_spin_box = new QSpinBox(tab_3);
        Expand_reduce_spin_box->setObjectName(QStringLiteral("Expand_reduce_spin_box"));
        sizePolicy1.setHeightForWidth(Expand_reduce_spin_box->sizePolicy().hasHeightForWidth());
        Expand_reduce_spin_box->setSizePolicy(sizePolicy1);
        Expand_reduce_spin_box->setMinimum(-50);
        Expand_reduce_spin_box->setMaximum(50);

        horizontalLayout_6->addWidget(Expand_reduce_spin_box);


        verticalLayout->addLayout(horizontalLayout_6);

        Clear_button = new QPushButton(tab_3);
        Clear_button->setObjectName(QStringLiteral("Clear_button"));

        verticalLayout->addWidget(Clear_button);

        Inverse_selection_button = new QPushButton(tab_3);
        Inverse_selection_button->setObjectName(QStringLiteral("Inverse_selection_button"));

        verticalLayout->addWidget(Inverse_selection_button);

        Select_all_button = new QPushButton(tab_3);
        Select_all_button->setObjectName(QStringLiteral("Select_all_button"));

        verticalLayout->addWidget(Select_all_button);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        operationsBox = new QComboBox(tab_3);
        operationsBox->setObjectName(QStringLiteral("operationsBox"));

        horizontalLayout_13->addWidget(operationsBox);

        validateButton = new QPushButton(tab_3);
        validateButton->setObjectName(QStringLiteral("validateButton"));

        horizontalLayout_13->addWidget(validateButton);

        horizontalLayout_13->setStretch(0, 1);

        verticalLayout_5->addLayout(horizontalLayout_13);

        selectionOrEuler->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_4 = new QVBoxLayout(tab_5);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        edition_groupBox = new QGroupBox(tab_5);
        edition_groupBox->setObjectName(QStringLiteral("edition_groupBox"));
        verticalLayout_8 = new QVBoxLayout(edition_groupBox);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_9);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        editionBox = new QComboBox(edition_groupBox);
        editionBox->setObjectName(QStringLiteral("editionBox"));

        verticalLayout_9->addWidget(editionBox);

        instructionsLabel = new QLabel(edition_groupBox);
        instructionsLabel->setObjectName(QStringLiteral("instructionsLabel"));

        verticalLayout_9->addWidget(instructionsLabel);

        docImage_Label = new QLabel(edition_groupBox);
        docImage_Label->setObjectName(QStringLiteral("docImage_Label"));

        verticalLayout_9->addWidget(docImage_Label);

        label_4 = new QLabel(edition_groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_9->addWidget(label_4);

        verticalLayout_9->setStretch(1, 1);

        verticalLayout_8->addLayout(verticalLayout_9);


        verticalLayout_4->addWidget(edition_groupBox);

        selectionOrEuler->addTab(tab_5, QString());

        verticalLayout_6->addWidget(selectionOrEuler);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        Selection->setWidget(dockWidgetContents);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(Brush_size_spin_box);
        label_3->setBuddy(Threshold_size_spin_box);
#endif // QT_NO_SHORTCUT

        retranslateUi(Selection);

        selectionOrEuler->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Selection);
    } // setupUi

    void retranslateUi(QDockWidget *Selection)
    {
        Selection->setWindowTitle(QApplication::translate("Selection", "Selection", Q_NULLPTR));
        Create_selection_item_button->setText(QApplication::translate("Selection", "Create Selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Clear_all_button->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Clear_all_button->setText(QApplication::translate("Selection", "Clear Selection", Q_NULLPTR));
        hl_checkBox->setText(QApplication::translate("Selection", "Highlight", Q_NULLPTR));
        label_2->setText(QApplication::translate("Selection", "Selection Type :", Q_NULLPTR));
        Selection_type_combo_box->clear();
        Selection_type_combo_box->insertItems(0, QStringList()
         << QApplication::translate("Selection", "Vertex", Q_NULLPTR)
         << QApplication::translate("Selection", "Facet", Q_NULLPTR)
         << QApplication::translate("Selection", "Edge", Q_NULLPTR)
         << QApplication::translate("Selection", "Connected Component (Facet)", Q_NULLPTR)
         << QApplication::translate("Selection", "Path Between Vertices", Q_NULLPTR)
        );
        lassoCheckBox->setText(QApplication::translate("Selection", "Lasso", Q_NULLPTR));
        Select_all_NTButton->setText(QApplication::translate("Selection", "Select All Non Triangle", Q_NULLPTR));
        Select_boundaryButton->setText(QApplication::translate("Selection", "Select Boundary Edges", Q_NULLPTR));
        Add_to_selection_button->setText(QApplication::translate("Selection", "Add to Selection", Q_NULLPTR));
        Insertion_radio_button->setText(QApplication::translate("Selection", "Insertion", Q_NULLPTR));
        Removal_radio_button->setText(QApplication::translate("Selection", "Removal", Q_NULLPTR));
        label->setText(QApplication::translate("Selection", "Brush &size:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Selection", "Simplices", Q_NULLPTR));
        label_3->setText(QApplication::translate("Selection", "Threshold:", Q_NULLPTR));
        Get_minimum_button->setText(QApplication::translate("Selection", "&Get Minimum", Q_NULLPTR));
        Select_isolated_components_button->setText(QApplication::translate("Selection", "Select &Isolated Components Below Threshold", Q_NULLPTR));
        label_6->setText(QApplication::translate("Selection", "Sharp edges angle:", Q_NULLPTR));
        Select_sharp_edges_button->setText(QApplication::translate("Selection", "Select", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Selection", "Components", Q_NULLPTR));
        Expand_reduce_button->setText(QApplication::translate("Selection", "Expand/Reduce", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Clear_button->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Clear_button->setText(QApplication::translate("Selection", "&Clear Current Type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Inverse_selection_button->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Inverse_selection_button->setText(QApplication::translate("Selection", "Invert Selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Select_all_button->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Select_all_button->setText(QApplication::translate("Selection", "Select &All", Q_NULLPTR));
        operationsBox->clear();
        operationsBox->insertItems(0, QStringList()
         << QApplication::translate("Selection", "Create Point Set from Selected Vertices", Q_NULLPTR)
         << QApplication::translate("Selection", "Create Polyline from Selected Edges", Q_NULLPTR)
         << QApplication::translate("Selection", "Create Facegraph from Selected Facets", Q_NULLPTR)
         << QApplication::translate("Selection", "Erase Selected Facets", Q_NULLPTR)
         << QApplication::translate("Selection", "Keep Connected Components of Selected Facets", Q_NULLPTR)
         << QApplication::translate("Selection", "Expand Face Selection to Stay Manifold After Removal", Q_NULLPTR)
         << QApplication::translate("Selection", "Convert from Edge Selection to Facets Selection", Q_NULLPTR)
         << QApplication::translate("Selection", "Convert from Edge Selection to Point Selection", Q_NULLPTR)
         << QApplication::translate("Selection", "Convert from Facet Selection to Boundary Edge Selection", Q_NULLPTR)
         << QApplication::translate("Selection", "Convert from Facet Selection to Point Selection", Q_NULLPTR)
        );
        validateButton->setText(QApplication::translate("Selection", "Validate", Q_NULLPTR));
        selectionOrEuler->setTabText(selectionOrEuler->indexOf(tab_3), QApplication::translate("Selection", "Selection", Q_NULLPTR));
        edition_groupBox->setTitle(QApplication::translate("Selection", "Euler Operations", Q_NULLPTR));
        editionBox->clear();
        editionBox->insertItems(0, QStringList()
         << QApplication::translate("Selection", "Join vertex", Q_NULLPTR)
         << QApplication::translate("Selection", "Split vertex", Q_NULLPTR)
         << QApplication::translate("Selection", "Split edge", Q_NULLPTR)
         << QApplication::translate("Selection", "Join face", Q_NULLPTR)
         << QApplication::translate("Selection", "Split face", Q_NULLPTR)
         << QApplication::translate("Selection", "Collapse edge", Q_NULLPTR)
         << QApplication::translate("Selection", "Flip edge", Q_NULLPTR)
         << QApplication::translate("Selection", "Add center vertex", Q_NULLPTR)
         << QApplication::translate("Selection", "Remove center vertex", Q_NULLPTR)
         << QApplication::translate("Selection", "Add vertex and face to border (Advanced)", Q_NULLPTR)
         << QApplication::translate("Selection", "Add face to border (Advanced)", Q_NULLPTR)
         << QApplication::translate("Selection", "Move point", Q_NULLPTR)
        );
        instructionsLabel->setText(QApplication::translate("Selection", "Instructions \n"
"\n"
"", Q_NULLPTR));
        docImage_Label->setText(QString());
        label_4->setText(QApplication::translate("Selection", "Ctrl+Z to cancel the temporary selection. Ctrl+U to undo last operation (if applicable).", Q_NULLPTR));
        selectionOrEuler->setTabText(selectionOrEuler->indexOf(tab_5), QApplication::translate("Selection", "Edition", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_WIDGET_H

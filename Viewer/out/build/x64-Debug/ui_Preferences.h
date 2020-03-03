/********************************************************************************
** Form generated from reading UI file 'Preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *antialiasingCheckBox;
    QCheckBox *quick_cameraCheckBox;
    QCheckBox *offset_updateCheckBox;
    QSpinBox *max_itemsSpinBox;
    QSpinBox *transpSpinBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QComboBox *surface_meshComboBox;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QComboBox *point_setComboBox;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSlider *pointsHorizontalSlider;
    QSlider *normalsHorizontalSlider;
    QSlider *linesHorizontalSlider;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *background_colorPushButton;
    QPushButton *lightingPushButton;
    QPushButton *default_save_asPushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *detailsPushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QStringLiteral("PreferencesDialog"));
        PreferencesDialog->resize(631, 526);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PreferencesDialog->sizePolicy().hasHeightForWidth());
        PreferencesDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_2 = new QGroupBox(PreferencesDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        scrollArea = new QScrollArea(groupBox_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 278, 499));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        antialiasingCheckBox = new QCheckBox(scrollAreaWidgetContents);
        antialiasingCheckBox->setObjectName(QStringLiteral("antialiasingCheckBox"));

        verticalLayout_3->addWidget(antialiasingCheckBox);

        quick_cameraCheckBox = new QCheckBox(scrollAreaWidgetContents);
        quick_cameraCheckBox->setObjectName(QStringLiteral("quick_cameraCheckBox"));

        verticalLayout_3->addWidget(quick_cameraCheckBox);

        offset_updateCheckBox = new QCheckBox(scrollAreaWidgetContents);
        offset_updateCheckBox->setObjectName(QStringLiteral("offset_updateCheckBox"));

        verticalLayout_3->addWidget(offset_updateCheckBox);

        max_itemsSpinBox = new QSpinBox(scrollAreaWidgetContents);
        max_itemsSpinBox->setObjectName(QStringLiteral("max_itemsSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(max_itemsSpinBox->sizePolicy().hasHeightForWidth());
        max_itemsSpinBox->setSizePolicy(sizePolicy2);
        max_itemsSpinBox->setMinimum(1);
        max_itemsSpinBox->setMaximum(999999999);
        max_itemsSpinBox->setValue(100000);

        verticalLayout_3->addWidget(max_itemsSpinBox);

        transpSpinBox = new QSpinBox(scrollAreaWidgetContents);
        transpSpinBox->setObjectName(QStringLiteral("transpSpinBox"));
        sizePolicy2.setHeightForWidth(transpSpinBox->sizePolicy().hasHeightForWidth());
        transpSpinBox->setSizePolicy(sizePolicy2);
        transpSpinBox->setMinimum(4);
        transpSpinBox->setValue(4);

        verticalLayout_3->addWidget(transpSpinBox);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        surface_meshComboBox = new QComboBox(groupBox_3);
        surface_meshComboBox->setObjectName(QStringLiteral("surface_meshComboBox"));

        verticalLayout_5->addWidget(surface_meshComboBox);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        point_setComboBox = new QComboBox(groupBox_4);
        point_setComboBox->setObjectName(QStringLiteral("point_setComboBox"));

        verticalLayout_6->addWidget(point_setComboBox);


        verticalLayout_3->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        formLayout = new QFormLayout(groupBox_5);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        pointsHorizontalSlider = new QSlider(groupBox_5);
        pointsHorizontalSlider->setObjectName(QStringLiteral("pointsHorizontalSlider"));
        pointsHorizontalSlider->setMinimum(1);
        pointsHorizontalSlider->setMaximum(25);
        pointsHorizontalSlider->setValue(2);
        pointsHorizontalSlider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(0, QFormLayout::FieldRole, pointsHorizontalSlider);

        normalsHorizontalSlider = new QSlider(groupBox_5);
        normalsHorizontalSlider->setObjectName(QStringLiteral("normalsHorizontalSlider"));
        normalsHorizontalSlider->setValue(20);
        normalsHorizontalSlider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(2, QFormLayout::FieldRole, normalsHorizontalSlider);

        linesHorizontalSlider = new QSlider(groupBox_5);
        linesHorizontalSlider->setObjectName(QStringLiteral("linesHorizontalSlider"));
        linesHorizontalSlider->setValue(2);
        linesHorizontalSlider->setTracking(false);
        linesHorizontalSlider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(3, QFormLayout::FieldRole, linesHorizontalSlider);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);


        verticalLayout_3->addWidget(groupBox_5);

        background_colorPushButton = new QPushButton(scrollAreaWidgetContents);
        background_colorPushButton->setObjectName(QStringLiteral("background_colorPushButton"));

        verticalLayout_3->addWidget(background_colorPushButton);

        lightingPushButton = new QPushButton(scrollAreaWidgetContents);
        lightingPushButton->setObjectName(QStringLiteral("lightingPushButton"));

        verticalLayout_3->addWidget(lightingPushButton);

        default_save_asPushButton = new QPushButton(scrollAreaWidgetContents);
        default_save_asPushButton->setObjectName(QStringLiteral("default_save_asPushButton"));

        verticalLayout_3->addWidget(default_save_asPushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        horizontalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(PreferencesDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        treeWidget = new QTreeWidget(groupBox);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QStringLiteral("2"));
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeWidget->setHeaderHidden(true);
        treeWidget->setColumnCount(2);
        treeWidget->header()->setVisible(false);

        verticalLayout_2->addWidget(treeWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        detailsPushButton = new QPushButton(groupBox);
        detailsPushButton->setObjectName(QStringLiteral("detailsPushButton"));

        horizontalLayout_2->addWidget(detailsPushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        surface_meshComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("PreferencesDialog", "Settings", Q_NULLPTR));
        antialiasingCheckBox->setText(QApplication::translate("PreferencesDialog", "&Antialiasing", Q_NULLPTR));
        quick_cameraCheckBox->setText(QApplication::translate("PreferencesDialog", "&Quick Camera Mode", Q_NULLPTR));
        offset_updateCheckBox->setText(QApplication::translate("PreferencesDialog", "Visibility Changes Recenter", Q_NULLPTR));
        max_itemsSpinBox->setPrefix(QApplication::translate("PreferencesDialog", "Max Text Items Displayed:", Q_NULLPTR));
        transpSpinBox->setPrefix(QApplication::translate("PreferencesDialog", "Transparency Pass Number: ", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("PreferencesDialog", "Surface Mesh Default RenderingMode", Q_NULLPTR));
        surface_meshComboBox->clear();
        surface_meshComboBox->insertItems(0, QStringList()
         << QApplication::translate("PreferencesDialog", "Gouraud", Q_NULLPTR)
         << QApplication::translate("PreferencesDialog", "flat+edges", Q_NULLPTR)
         << QApplication::translate("PreferencesDialog", "flat", Q_NULLPTR)
         << QApplication::translate("PreferencesDialog", "wire", Q_NULLPTR)
         << QApplication::translate("PreferencesDialog", "points", Q_NULLPTR)
        );
        groupBox_4->setTitle(QApplication::translate("PreferencesDialog", "Point Set Default RenderingMode", Q_NULLPTR));
        point_setComboBox->clear();
        point_setComboBox->insertItems(0, QStringList()
         << QApplication::translate("PreferencesDialog", "points", Q_NULLPTR)
         << QApplication::translate("PreferencesDialog", "shaded points", Q_NULLPTR)
         << QApplication::translate("PreferencesDialog", "pts+normals", Q_NULLPTR)
        );
        groupBox_5->setTitle(QApplication::translate("PreferencesDialog", "Default Sizes", Q_NULLPTR));
        label_2->setText(QApplication::translate("PreferencesDialog", "Points: ", Q_NULLPTR));
        label_3->setText(QApplication::translate("PreferencesDialog", "Normals:", Q_NULLPTR));
        label_4->setText(QApplication::translate("PreferencesDialog", "Lines:", Q_NULLPTR));
        background_colorPushButton->setText(QApplication::translate("PreferencesDialog", "Change &Background Color...", Q_NULLPTR));
        lightingPushButton->setText(QApplication::translate("PreferencesDialog", "Change Lighting &Settings...", Q_NULLPTR));
        default_save_asPushButton->setText(QApplication::translate("PreferencesDialog", "Change Default Saveas Dir...", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PreferencesDialog", "Plugins Management", Q_NULLPTR));
        label->setText(QApplication::translate("PreferencesDialog", "Tick plugins you want to load at start up", Q_NULLPTR));
        detailsPushButton->setText(QApplication::translate("PreferencesDialog", "Details", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H

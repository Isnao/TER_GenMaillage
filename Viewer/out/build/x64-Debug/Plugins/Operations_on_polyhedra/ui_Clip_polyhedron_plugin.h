/********************************************************************************
** Form generated from reading UI file 'Clip_polyhedron_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIP_POLYHEDRON_PLUGIN_H
#define UI_CLIP_POLYHEDRON_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClipPolyhedronWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *flip_Button;
    QRadioButton *split_radioButton;
    QRadioButton *clip_radioButton;
    QPushButton *clipButton;
    QCheckBox *close_checkBox;
    QSpacerItem *verticalSpacer;
    QCheckBox *coplanarCheckBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDockWidget *ClipPolyhedronWidget)
    {
        if (ClipPolyhedronWidget->objectName().isEmpty())
            ClipPolyhedronWidget->setObjectName(QStringLiteral("ClipPolyhedronWidget"));
        ClipPolyhedronWidget->resize(313, 313);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClipPolyhedronWidget->sizePolicy().hasHeightForWidth());
        ClipPolyhedronWidget->setSizePolicy(sizePolicy);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        flip_Button = new QPushButton(groupBox);
        flip_Button->setObjectName(QStringLiteral("flip_Button"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(flip_Button->sizePolicy().hasHeightForWidth());
        flip_Button->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(flip_Button, 4, 1, 1, 1);

        split_radioButton = new QRadioButton(groupBox);
        split_radioButton->setObjectName(QStringLiteral("split_radioButton"));

        gridLayout->addWidget(split_radioButton, 0, 1, 1, 1);

        clip_radioButton = new QRadioButton(groupBox);
        clip_radioButton->setObjectName(QStringLiteral("clip_radioButton"));
        clip_radioButton->setChecked(true);

        gridLayout->addWidget(clip_radioButton, 0, 0, 1, 1);

        clipButton = new QPushButton(groupBox);
        clipButton->setObjectName(QStringLiteral("clipButton"));
        sizePolicy3.setHeightForWidth(clipButton->sizePolicy().hasHeightForWidth());
        clipButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(clipButton, 1, 1, 1, 1);

        close_checkBox = new QCheckBox(groupBox);
        close_checkBox->setObjectName(QStringLiteral("close_checkBox"));
        close_checkBox->setLayoutDirection(Qt::LeftToRight);
        close_checkBox->setAutoFillBackground(false);

        gridLayout->addWidget(close_checkBox, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        coplanarCheckBox = new QCheckBox(groupBox);
        coplanarCheckBox->setObjectName(QStringLiteral("coplanarCheckBox"));
        coplanarCheckBox->setEnabled(false);
        coplanarCheckBox->setChecked(true);

        gridLayout->addWidget(coplanarCheckBox, 4, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);

        verticalLayout->addWidget(groupBox);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        ClipPolyhedronWidget->setWidget(dockWidgetContents);

        retranslateUi(ClipPolyhedronWidget);

        QMetaObject::connectSlotsByName(ClipPolyhedronWidget);
    } // setupUi

    void retranslateUi(QDockWidget *ClipPolyhedronWidget)
    {
        ClipPolyhedronWidget->setWindowTitle(QApplication::translate("ClipPolyhedronWidget", "Clip Polyhedra", Q_NULLPTR));
        label->setText(QApplication::translate("ClipPolyhedronWidget", "<html><head/><body><p>This function allows to clip all the selected polyhedra against a halfspace. What is on the blue side of the clipping plane will be clipped, and what is on the yellow side will be kept.<br/><br/>If the option <span style=\" font-style:italic;\">keep closed</span> is checked, the clipped part of each polyhedron will be closed, if it has a closed contour on the clipping plane. Otherwise, it will be left open.</p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ClipPolyhedronWidget", "Behavior", Q_NULLPTR));
        flip_Button->setText(QApplication::translate("ClipPolyhedronWidget", "Flip plane", Q_NULLPTR));
        split_radioButton->setText(QApplication::translate("ClipPolyhedronWidget", "Split", Q_NULLPTR));
        clip_radioButton->setText(QApplication::translate("ClipPolyhedronWidget", "Clip", Q_NULLPTR));
        clipButton->setText(QApplication::translate("ClipPolyhedronWidget", "&Apply", Q_NULLPTR));
        close_checkBox->setText(QApplication::translate("ClipPolyhedronWidget", "&Keep Closed", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        coplanarCheckBox->setToolTip(QApplication::translate("ClipPolyhedronWidget", "<html><head/><body><p align=\"justify\"><span style=\" font-family:'Roboto,sans-serif'; font-size:14px; color:#000000; background-color:#ffffff;\">If this is un-checked, the parts of\302\240</span><span style=\" font-size:14px; color:#000000; background-color:#ffffff;\">the mesh that are</span><span style=\" font-family:'Roboto,sans-serif'; font-size:14px; color:#000000; background-color:#ffffff;\">\302\240coplanar with\302\240the </span><span style=\" font-size:14px; color:#000000; background-color:#ffffff;\">plane</span><span style=\" font-family:'Roboto,sans-serif'; font-size:14px; color:#000000; background-color:#ffffff;\">\302\240will not be part of the output.</span></p><p align=\"justify\"><span style=\" font-family:'Roboto,sans-serif'; font-size:14px; color:#000000; background-color:#ffffff;\">Only available in </span><span style=\" font-family:'Roboto,sans-serif'; font-size:14px; font-style:italic; color:#000000; background-color:#ffffff;\">Split</span><span style=\" font-family:'Roboto,sans-serif'; f"
                        "ont-size:14px; color:#000000; background-color:#ffffff;\"> mode.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        coplanarCheckBox->setText(QApplication::translate("ClipPolyhedronWidget", "Keep Coplanar Parts", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClipPolyhedronWidget: public Ui_ClipPolyhedronWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIP_POLYHEDRON_PLUGIN_H

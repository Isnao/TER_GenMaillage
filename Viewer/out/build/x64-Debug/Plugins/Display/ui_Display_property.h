/********************************************************************************
** Form generated from reading UI file 'Display_property.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_PROPERTY_H
#define UI_DISPLAY_PROPERTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayPropertyWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *legendLabel;
    QGridLayout *gridLayout;
    QPushButton *colorizeButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *zoomToMinButton;
    QPushButton *zoomToMaxButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *minColorButton;
    QPushButton *maxColorButton;
    QLabel *label_3;
    QPushButton *sourcePointsButton;
    QLabel *label_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *minBox;
    QDoubleSpinBox *maxBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetButton;
    QPushButton *deleteButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *propertyBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DisplayPropertyWidget)
    {
        if (DisplayPropertyWidget->objectName().isEmpty())
            DisplayPropertyWidget->setObjectName(QStringLiteral("DisplayPropertyWidget"));
        DisplayPropertyWidget->resize(292, 492);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        legendLabel = new QLabel(dockWidgetContents);
        legendLabel->setObjectName(QStringLiteral("legendLabel"));

        horizontalLayout_3->addWidget(legendLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        colorizeButton = new QPushButton(dockWidgetContents);
        colorizeButton->setObjectName(QStringLiteral("colorizeButton"));

        gridLayout->addWidget(colorizeButton, 4, 1, 1, 1);

        groupBox_3 = new QGroupBox(dockWidgetContents);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        zoomToMinButton = new QPushButton(groupBox_3);
        zoomToMinButton->setObjectName(QStringLiteral("zoomToMinButton"));

        verticalLayout_4->addWidget(zoomToMinButton);

        zoomToMaxButton = new QPushButton(groupBox_3);
        zoomToMaxButton->setObjectName(QStringLiteral("zoomToMaxButton"));

        verticalLayout_4->addWidget(zoomToMaxButton);


        gridLayout->addWidget(groupBox_3, 3, 1, 1, 1);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        minColorButton = new QPushButton(groupBox_2);
        minColorButton->setObjectName(QStringLiteral("minColorButton"));

        verticalLayout_3->addWidget(minColorButton);

        maxColorButton = new QPushButton(groupBox_2);
        maxColorButton->setObjectName(QStringLiteral("maxColorButton"));

        verticalLayout_3->addWidget(maxColorButton);


        gridLayout->addWidget(groupBox_2, 2, 1, 1, 1);

        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        sourcePointsButton = new QPushButton(dockWidgetContents);
        sourcePointsButton->setObjectName(QStringLiteral("sourcePointsButton"));
        sourcePointsButton->setCheckable(true);

        gridLayout->addWidget(sourcePointsButton, 6, 1, 1, 1);

        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        minBox = new QDoubleSpinBox(groupBox);
        minBox->setObjectName(QStringLiteral("minBox"));

        verticalLayout_2->addWidget(minBox);

        maxBox = new QDoubleSpinBox(groupBox);
        maxBox->setObjectName(QStringLiteral("maxBox"));
        maxBox->setValue(2);

        verticalLayout_2->addWidget(maxBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        resetButton = new QPushButton(groupBox);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setAutoRepeat(false);

        horizontalLayout_2->addWidget(resetButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addWidget(groupBox, 1, 1, 1, 1);

        deleteButton = new QPushButton(dockWidgetContents);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setEnabled(false);

        gridLayout->addWidget(deleteButton, 7, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        propertyBox = new QComboBox(dockWidgetContents);
        propertyBox->setObjectName(QStringLiteral("propertyBox"));

        horizontalLayout->addWidget(propertyBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        DisplayPropertyWidget->setWidget(dockWidgetContents);

        retranslateUi(DisplayPropertyWidget);

        QMetaObject::connectSlotsByName(DisplayPropertyWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DisplayPropertyWidget)
    {
        DisplayPropertyWidget->setWindowTitle(QApplication::translate("DisplayPropertyWidget", "Property Displaying", Q_NULLPTR));
        legendLabel->setText(QApplication::translate("DisplayPropertyWidget", "RAMP DISPLAYING", Q_NULLPTR));
        colorizeButton->setText(QApplication::translate("DisplayPropertyWidget", "Colorize", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("DisplayPropertyWidget", "Zoom ", Q_NULLPTR));
        zoomToMinButton->setText(QApplication::translate("DisplayPropertyWidget", "Zoom to min", Q_NULLPTR));
        zoomToMaxButton->setText(QApplication::translate("DisplayPropertyWidget", "Zoom to max", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("DisplayPropertyWidget", "Ramp Colors", Q_NULLPTR));
        minColorButton->setText(QApplication::translate("DisplayPropertyWidget", "Color Min...", Q_NULLPTR));
        maxColorButton->setText(QApplication::translate("DisplayPropertyWidget", "Color Max...", Q_NULLPTR));
        label_3->setText(QString());
        sourcePointsButton->setText(QApplication::translate("DisplayPropertyWidget", "Select Source Points", Q_NULLPTR));
        label_2->setText(QString());
        groupBox->setTitle(QApplication::translate("DisplayPropertyWidget", "Ramp Extrema", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("DisplayPropertyWidget", "Compute Ramp Extremas", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QApplication::translate("DisplayPropertyWidget", "Reset", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("DisplayPropertyWidget", "Delete Group", Q_NULLPTR));
        propertyBox->clear();
        propertyBox->insertItems(0, QStringList()
         << QApplication::translate("DisplayPropertyWidget", "Smallest Angle Per Face", Q_NULLPTR)
         << QApplication::translate("DisplayPropertyWidget", "Scaled Jacobian", Q_NULLPTR)
         << QApplication::translate("DisplayPropertyWidget", "Heat Intensity", Q_NULLPTR)
         << QApplication::translate("DisplayPropertyWidget", "Heat Intensity (Intrinsic Delaunay)", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class DisplayPropertyWidget: public Ui_DisplayPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_PROPERTY_H

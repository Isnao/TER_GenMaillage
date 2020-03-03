/********************************************************************************
** Form generated from reading UI file 'Point_set_to_mesh_distance_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT_SET_TO_MESH_DISTANCE_WIDGET_H
#define UI_POINT_SET_TO_MESH_DISTANCE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_DistanceWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *maxLabel;
    QLabel *lDecildeLabel;
    QLabel *label;
    QLabel *label_4;
    QLabel *fDecileLabel;
    QLabel *minLabel;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *medianLabel;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *distance_spinbox;
    QPushButton *select_button;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DistanceWidget)
    {
        if (DistanceWidget->objectName().isEmpty())
            DistanceWidget->setObjectName(QStringLiteral("DistanceWidget"));
        DistanceWidget->resize(316, 338);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        maxLabel = new QLabel(groupBox);
        maxLabel->setObjectName(QStringLiteral("maxLabel"));

        gridLayout->addWidget(maxLabel, 7, 1, 1, 1);

        lDecildeLabel = new QLabel(groupBox);
        lDecildeLabel->setObjectName(QStringLiteral("lDecildeLabel"));

        gridLayout->addWidget(lDecildeLabel, 5, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        fDecileLabel = new QLabel(groupBox);
        fDecileLabel->setObjectName(QStringLiteral("fDecileLabel"));

        gridLayout->addWidget(fDecileLabel, 3, 1, 1, 1);

        minLabel = new QLabel(groupBox);
        minLabel->setObjectName(QStringLiteral("minLabel"));

        gridLayout->addWidget(minLabel, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        medianLabel = new QLabel(groupBox);
        medianLabel->setObjectName(QStringLiteral("medianLabel"));

        gridLayout->addWidget(medianLabel, 4, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 8, 1, 1, 1);

        minLabel->raise();
        fDecileLabel->raise();
        lDecildeLabel->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        label_2->raise();
        maxLabel->raise();
        label_5->raise();
        medianLabel->raise();
        pushButton->raise();

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        distance_spinbox = new QDoubleSpinBox(groupBox_2);
        distance_spinbox->setObjectName(QStringLiteral("distance_spinbox"));
        distance_spinbox->setDecimals(6);

        gridLayout_2->addWidget(distance_spinbox, 0, 1, 1, 1);

        select_button = new QPushButton(groupBox_2);
        select_button->setObjectName(QStringLiteral("select_button"));

        gridLayout_2->addWidget(select_button, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);

        horizontalLayout_2->addLayout(gridLayout_2);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        DistanceWidget->setWidget(dockWidgetContents);

        retranslateUi(DistanceWidget);

        QMetaObject::connectSlotsByName(DistanceWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DistanceWidget)
    {
        DistanceWidget->setWindowTitle(QApplication::translate("DistanceWidget", "Distance Between Point Set and Mesh", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DistanceWidget", "Statistics", Q_NULLPTR));
        maxLabel->setText(QApplication::translate("DistanceWidget", "max", Q_NULLPTR));
        lDecildeLabel->setText(QApplication::translate("DistanceWidget", "last decile", Q_NULLPTR));
        label->setText(QApplication::translate("DistanceWidget", "Minimum Distance:", Q_NULLPTR));
        label_4->setText(QApplication::translate("DistanceWidget", "Last Decile:", Q_NULLPTR));
        fDecileLabel->setText(QApplication::translate("DistanceWidget", "first decile", Q_NULLPTR));
        minLabel->setText(QApplication::translate("DistanceWidget", "min", Q_NULLPTR));
        label_2->setText(QApplication::translate("DistanceWidget", "Maximum Distance:", Q_NULLPTR));
        label_3->setText(QApplication::translate("DistanceWidget", "First Decile:", Q_NULLPTR));
        label_5->setText(QApplication::translate("DistanceWidget", "Median Distance:", Q_NULLPTR));
        medianLabel->setText(QApplication::translate("DistanceWidget", "median", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("DistanceWidget", "Creates a new colored point set. The further a point is from the mesh, the darker it is displayed.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("DistanceWidget", "Compute Distance", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("DistanceWidget", "Selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        distance_spinbox->setToolTip(QApplication::translate("DistanceWidget", "Points further than this distance will be selected.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        select_button->setToolTip(QApplication::translate("DistanceWidget", "Selects the points that are further than the threshold.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        select_button->setText(QApplication::translate("DistanceWidget", "Select ", Q_NULLPTR));
        label_6->setText(QApplication::translate("DistanceWidget", "Threshold:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DistanceWidget: public Ui_DistanceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT_SET_TO_MESH_DISTANCE_WIDGET_H

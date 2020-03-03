/********************************************************************************
** Form generated from reading UI file 'Alpha_shape_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALPHA_SHAPE_WIDGET_H
#define UI_ALPHA_SHAPE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlphaShapesWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *as_itemPushButton;
    QPushButton *poly_itemPushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *AlphaShapesWidget)
    {
        if (AlphaShapesWidget->objectName().isEmpty())
            AlphaShapesWidget->setObjectName(QStringLiteral("AlphaShapesWidget"));
        AlphaShapesWidget->resize(400, 133);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(dockWidgetContents);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(100);

        horizontalLayout->addWidget(spinBox);

        horizontalSlider = new QSlider(dockWidgetContents);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        as_itemPushButton = new QPushButton(dockWidgetContents);
        as_itemPushButton->setObjectName(QStringLiteral("as_itemPushButton"));

        verticalLayout_3->addWidget(as_itemPushButton);

        poly_itemPushButton = new QPushButton(dockWidgetContents);
        poly_itemPushButton->setObjectName(QStringLiteral("poly_itemPushButton"));

        verticalLayout_3->addWidget(poly_itemPushButton);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        AlphaShapesWidget->setWidget(dockWidgetContents);

        retranslateUi(AlphaShapesWidget);

        QMetaObject::connectSlotsByName(AlphaShapesWidget);
    } // setupUi

    void retranslateUi(QDockWidget *AlphaShapesWidget)
    {
        AlphaShapesWidget->setWindowTitle(QApplication::translate("AlphaShapesWidget", "Alpha Shapes", Q_NULLPTR));
        label->setText(QApplication::translate("AlphaShapesWidget", "Alpha:", Q_NULLPTR));
        spinBox->setSuffix(QString());
        as_itemPushButton->setText(QApplication::translate("AlphaShapesWidget", "Create Alpha Shape Item", Q_NULLPTR));
        poly_itemPushButton->setText(QApplication::translate("AlphaShapesWidget", "Create Polygon Soup", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AlphaShapesWidget: public Ui_AlphaShapesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALPHA_SHAPE_WIDGET_H

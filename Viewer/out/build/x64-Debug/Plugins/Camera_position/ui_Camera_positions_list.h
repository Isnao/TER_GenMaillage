/********************************************************************************
** Form generated from reading UI file 'Camera_positions_list.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_POSITIONS_LIST_H
#define UI_CAMERA_POSITIONS_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Camera_positions_list
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *openButton;
    QToolButton *saveButton;
    QToolButton *plusButton;
    QToolButton *minusButton;
    QToolButton *clearButton;
    QToolButton *upButton;
    QToolButton *downButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *frontButton;
    QToolButton *backButton;
    QToolButton *topButton;
    QToolButton *botButton;
    QToolButton *leftButton;
    QToolButton *rightButton;
    QSpacerItem *horizontalSpacer_2;
    QListView *listView;

    void setupUi(QDockWidget *Camera_positions_list)
    {
        if (Camera_positions_list->objectName().isEmpty())
            Camera_positions_list->setObjectName(QStringLiteral("Camera_positions_list"));
        Camera_positions_list->resize(612, 507);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        openButton = new QToolButton(dockWidgetContents);
        openButton->setObjectName(QStringLiteral("openButton"));

        horizontalLayout->addWidget(openButton);

        saveButton = new QToolButton(dockWidgetContents);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout->addWidget(saveButton);

        plusButton = new QToolButton(dockWidgetContents);
        plusButton->setObjectName(QStringLiteral("plusButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/cgal/icons/plus"), QSize(), QIcon::Normal, QIcon::Off);
        plusButton->setIcon(icon);

        horizontalLayout->addWidget(plusButton);

        minusButton = new QToolButton(dockWidgetContents);
        minusButton->setObjectName(QStringLiteral("minusButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/cgal/icons/minus"), QSize(), QIcon::Normal, QIcon::Off);
        minusButton->setIcon(icon1);

        horizontalLayout->addWidget(minusButton);

        clearButton = new QToolButton(dockWidgetContents);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout->addWidget(clearButton);

        upButton = new QToolButton(dockWidgetContents);
        upButton->setObjectName(QStringLiteral("upButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/cgal/icons/resources/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton->setIcon(icon2);

        horizontalLayout->addWidget(upButton);

        downButton = new QToolButton(dockWidgetContents);
        downButton->setObjectName(QStringLiteral("downButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/cgal/icons/resources/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downButton->setIcon(icon3);

        horizontalLayout->addWidget(downButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frontButton = new QToolButton(dockWidgetContents);
        frontButton->setObjectName(QStringLiteral("frontButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/cgal/icons/resources/front.png"), QSize(), QIcon::Normal, QIcon::Off);
        frontButton->setIcon(icon4);

        horizontalLayout_2->addWidget(frontButton);

        backButton = new QToolButton(dockWidgetContents);
        backButton->setObjectName(QStringLiteral("backButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/cgal/icons/resources/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon5);

        horizontalLayout_2->addWidget(backButton);

        topButton = new QToolButton(dockWidgetContents);
        topButton->setObjectName(QStringLiteral("topButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/cgal/icons/resources/top.png"), QSize(), QIcon::Normal, QIcon::Off);
        topButton->setIcon(icon6);

        horizontalLayout_2->addWidget(topButton);

        botButton = new QToolButton(dockWidgetContents);
        botButton->setObjectName(QStringLiteral("botButton"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/cgal/icons/resources/bot.png"), QSize(), QIcon::Normal, QIcon::Off);
        botButton->setIcon(icon7);

        horizontalLayout_2->addWidget(botButton);

        leftButton = new QToolButton(dockWidgetContents);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/cgal/icons/resources/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftButton->setIcon(icon8);

        horizontalLayout_2->addWidget(leftButton);

        rightButton = new QToolButton(dockWidgetContents);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/cgal/icons/resources/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightButton->setIcon(icon9);

        horizontalLayout_2->addWidget(rightButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        listView = new QListView(dockWidgetContents);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        Camera_positions_list->setWidget(dockWidgetContents);

        retranslateUi(Camera_positions_list);

        QMetaObject::connectSlotsByName(Camera_positions_list);
    } // setupUi

    void retranslateUi(QDockWidget *Camera_positions_list)
    {
        Camera_positions_list->setWindowTitle(QApplication::translate("Camera_positions_list", "Camera Positions", Q_NULLPTR));
        openButton->setText(QApplication::translate("Camera_positions_list", "&Open List", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        openButton->setShortcut(QApplication::translate("Camera_positions_list", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        saveButton->setText(QApplication::translate("Camera_positions_list", "&Save List", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        saveButton->setShortcut(QApplication::translate("Camera_positions_list", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        plusButton->setText(QApplication::translate("Camera_positions_list", "...", Q_NULLPTR));
        minusButton->setText(QApplication::translate("Camera_positions_list", "...", Q_NULLPTR));
        clearButton->setText(QApplication::translate("Camera_positions_list", "&Clear", Q_NULLPTR));
        upButton->setText(QApplication::translate("Camera_positions_list", "&Up", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        upButton->setShortcut(QApplication::translate("Camera_positions_list", "Ctrl+U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        downButton->setText(QApplication::translate("Camera_positions_list", "&Down", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        downButton->setShortcut(QApplication::translate("Camera_positions_list", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        frontButton->setToolTip(QApplication::translate("Camera_positions_list", "Front", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        frontButton->setText(QApplication::translate("Camera_positions_list", "PushButton", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        backButton->setToolTip(QApplication::translate("Camera_positions_list", "Back", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        backButton->setText(QApplication::translate("Camera_positions_list", "PushButton", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        topButton->setToolTip(QApplication::translate("Camera_positions_list", "Top", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        topButton->setText(QApplication::translate("Camera_positions_list", "PushButton", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        botButton->setToolTip(QApplication::translate("Camera_positions_list", "Bottom", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        botButton->setText(QApplication::translate("Camera_positions_list", "PushButton", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        leftButton->setToolTip(QApplication::translate("Camera_positions_list", "Left", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        leftButton->setText(QApplication::translate("Camera_positions_list", "PushButton", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rightButton->setToolTip(QApplication::translate("Camera_positions_list", "Right", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rightButton->setText(QApplication::translate("Camera_positions_list", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Camera_positions_list: public Ui_Camera_positions_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_POSITIONS_LIST_H

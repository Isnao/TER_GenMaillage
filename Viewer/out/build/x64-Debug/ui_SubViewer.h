/********************************************************************************
** Form generated from reading UI file 'SubViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBVIEWER_H
#define UI_SUBVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubViewer
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *mainLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *menuButton;
    QPushButton *exitButton;

    void setupUi(QWidget *SubViewer)
    {
        if (SubViewer->objectName().isEmpty())
            SubViewer->setObjectName(QStringLiteral("SubViewer"));
        SubViewer->resize(400, 240);
        verticalLayout_2 = new QVBoxLayout(SubViewer);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mainLayout = new QVBoxLayout();
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        menuButton = new QPushButton(SubViewer);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        QIcon icon;
        icon.addFile(QStringLiteral("resources/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuButton->setIcon(icon);
        menuButton->setIconSize(QSize(10, 10));
        menuButton->setFlat(true);

        horizontalLayout->addWidget(menuButton);

        exitButton = new QPushButton(SubViewer);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/cgal/icons/resources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitButton->setIcon(icon1);
        exitButton->setIconSize(QSize(10, 10));
        exitButton->setFlat(true);

        horizontalLayout->addWidget(exitButton);


        mainLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(mainLayout);


        retranslateUi(SubViewer);

        menuButton->setDefault(false);


        QMetaObject::connectSlotsByName(SubViewer);
    } // setupUi

    void retranslateUi(QWidget *SubViewer)
    {
        SubViewer->setWindowTitle(QApplication::translate("SubViewer", "Form", Q_NULLPTR));
        menuButton->setText(QString());
        exitButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SubViewer: public Ui_SubViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBVIEWER_H

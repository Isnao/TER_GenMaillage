/********************************************************************************
** Form generated from reading UI file 'Point_set_selection_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT_SET_SELECTION_WIDGET_H
#define UI_POINT_SET_SELECTION_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PointSetSelection
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *rectangle;
    QToolButton *freeform;
    QToolButton *region;
    QToolButton *box;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *new_selection;
    QToolButton *union_selection;
    QToolButton *intersection;
    QToolButton *diff;
    QPushButton *menu;
    QPushButton *helpButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *PointSetSelection)
    {
        if (PointSetSelection->objectName().isEmpty())
            PointSetSelection->setObjectName(QStringLiteral("PointSetSelection"));
        PointSetSelection->resize(465, 101);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame = new QFrame(dockWidgetContents);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        rectangle = new QToolButton(frame);
        rectangle->setObjectName(QStringLiteral("rectangle"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rectangle->sizePolicy().hasHeightForWidth());
        rectangle->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/cgal/icons/resources/pss_rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        rectangle->setIcon(icon);
        rectangle->setCheckable(true);
        rectangle->setChecked(true);
        rectangle->setAutoExclusive(true);

        horizontalLayout_3->addWidget(rectangle);

        freeform = new QToolButton(frame);
        freeform->setObjectName(QStringLiteral("freeform"));
        sizePolicy.setHeightForWidth(freeform->sizePolicy().hasHeightForWidth());
        freeform->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/cgal/icons/resources/pss_freeform.png"), QSize(), QIcon::Normal, QIcon::Off);
        freeform->setIcon(icon1);
        freeform->setCheckable(true);
        freeform->setAutoExclusive(true);

        horizontalLayout_3->addWidget(freeform);

        region = new QToolButton(frame);
        region->setObjectName(QStringLiteral("region"));
        region->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/cgal/icons/resources/pss_region.png"), QSize(), QIcon::Normal, QIcon::Off);
        region->setIcon(icon2);
        region->setCheckable(true);
        region->setAutoExclusive(true);

        horizontalLayout_3->addWidget(region);

        box = new QToolButton(frame);
        box->setObjectName(QStringLiteral("box"));
        sizePolicy.setHeightForWidth(box->sizePolicy().hasHeightForWidth());
        box->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/cgal/icons/resources/pss_box.png"), QSize(), QIcon::Normal, QIcon::Off);
        box->setIcon(icon3);
        box->setCheckable(true);
        box->setAutoExclusive(true);

        horizontalLayout_3->addWidget(box);


        horizontalLayout_2->addWidget(frame);

        frame_2 = new QFrame(dockWidgetContents);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        new_selection = new QToolButton(frame_2);
        new_selection->setObjectName(QStringLiteral("new_selection"));
        sizePolicy.setHeightForWidth(new_selection->sizePolicy().hasHeightForWidth());
        new_selection->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/cgal/icons/resources/pss_new.png"), QSize(), QIcon::Normal, QIcon::Off);
        new_selection->setIcon(icon4);
        new_selection->setCheckable(true);
        new_selection->setChecked(true);
        new_selection->setAutoExclusive(true);

        horizontalLayout->addWidget(new_selection);

        union_selection = new QToolButton(frame_2);
        union_selection->setObjectName(QStringLiteral("union_selection"));
        sizePolicy.setHeightForWidth(union_selection->sizePolicy().hasHeightForWidth());
        union_selection->setSizePolicy(sizePolicy);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/cgal/icons/resources/pss_union.png"), QSize(), QIcon::Normal, QIcon::Off);
        union_selection->setIcon(icon5);
        union_selection->setCheckable(true);
        union_selection->setAutoExclusive(true);

        horizontalLayout->addWidget(union_selection);

        intersection = new QToolButton(frame_2);
        intersection->setObjectName(QStringLiteral("intersection"));
        sizePolicy.setHeightForWidth(intersection->sizePolicy().hasHeightForWidth());
        intersection->setSizePolicy(sizePolicy);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/cgal/icons/resources/pss_inter.png"), QSize(), QIcon::Normal, QIcon::Off);
        intersection->setIcon(icon6);
        intersection->setCheckable(true);
        intersection->setAutoExclusive(true);

        horizontalLayout->addWidget(intersection);

        diff = new QToolButton(frame_2);
        diff->setObjectName(QStringLiteral("diff"));
        sizePolicy.setHeightForWidth(diff->sizePolicy().hasHeightForWidth());
        diff->setSizePolicy(sizePolicy);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/cgal/icons/resources/pss_diff.png"), QSize(), QIcon::Normal, QIcon::Off);
        diff->setIcon(icon7);
        diff->setCheckable(true);
        diff->setAutoExclusive(true);

        horizontalLayout->addWidget(diff);


        horizontalLayout_2->addWidget(frame_2);

        menu = new QPushButton(dockWidgetContents);
        menu->setObjectName(QStringLiteral("menu"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        menu->setFont(font);

        horizontalLayout_2->addWidget(menu);

        helpButton = new QPushButton(dockWidgetContents);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/cgal/icons/resources/help_button.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon8);
        helpButton->setIconSize(QSize(16, 16));
        helpButton->setFlat(false);

        horizontalLayout_2->addWidget(helpButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        PointSetSelection->setWidget(dockWidgetContents);

        retranslateUi(PointSetSelection);

        QMetaObject::connectSlotsByName(PointSetSelection);
    } // setupUi

    void retranslateUi(QDockWidget *PointSetSelection)
    {
        PointSetSelection->setWindowTitle(QApplication::translate("PointSetSelection", "Point Set Selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        frame->setToolTip(QApplication::translate("PointSetSelection", "Selection tool", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        frame->setAccessibleName(QApplication::translate("PointSetSelection", "Tool", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        rectangle->setToolTip(QApplication::translate("PointSetSelection", "Rectangle selection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rectangle->setText(QString());
#ifndef QT_NO_TOOLTIP
        freeform->setToolTip(QApplication::translate("PointSetSelection", "Free form selection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        freeform->setText(QString());
#ifndef QT_NO_TOOLTIP
        region->setToolTip(QApplication::translate("PointSetSelection", "Region selection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        region->setText(QString());
#ifndef QT_NO_TOOLTIP
        box->setToolTip(QApplication::translate("PointSetSelection", "Box selection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        box->setText(QString());
#ifndef QT_NO_TOOLTIP
        frame_2->setToolTip(QApplication::translate("PointSetSelection", "Selection mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        frame_2->setAccessibleName(QApplication::translate("PointSetSelection", "Mode", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        new_selection->setToolTip(QApplication::translate("PointSetSelection", "New selection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        new_selection->setText(QString());
#ifndef QT_NO_TOOLTIP
        union_selection->setToolTip(QApplication::translate("PointSetSelection", "Union", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        union_selection->setText(QString());
#ifndef QT_NO_TOOLTIP
        intersection->setToolTip(QApplication::translate("PointSetSelection", "Intersection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        intersection->setText(QString());
#ifndef QT_NO_TOOLTIP
        diff->setToolTip(QApplication::translate("PointSetSelection", "Difference", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        diff->setText(QString());
        menu->setText(QApplication::translate("PointSetSelection", "Selection", Q_NULLPTR));
        helpButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PointSetSelection: public Ui_PointSetSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT_SET_SELECTION_WIDGET_H

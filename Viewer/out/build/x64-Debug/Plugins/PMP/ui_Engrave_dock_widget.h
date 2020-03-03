/********************************************************************************
** Form generated from reading UI file 'Engrave_dock_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENGRAVE_DOCK_WIDGET_H
#define UI_ENGRAVE_DOCK_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EngraveWidget
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *visualizeButton;
    QPushButton *engraveButton;
    QPushButton *text_meshButton;
    QPushButton *reset_button;
    QGridLayout *gridLayout_2;
    QPushButton *t_up_pushButton;
    QSlider *rot_slider;
    QPushButton *t_right_pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *t_down_pushButton;
    QLabel *label_2;
    QPushButton *t_left_pushButton;
    QLabel *label;
    QSlider *scalX_slider;
    QSlider *scalY_slider;
    QLabel *label_4;
    QSlider *text_prec_slider;
    QLabel *label_5;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QSlider *bot_slider;
    QSlider *top_slider;
    QLabel *label_3;
    QLabel *label_6;
    QCheckBox *letter_checkBox;

    void setupUi(QDockWidget *EngraveWidget)
    {
        if (EngraveWidget->objectName().isEmpty())
            EngraveWidget->setObjectName(QStringLiteral("EngraveWidget"));
        EngraveWidget->resize(293, 515);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(dockWidgetContents);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        visualizeButton = new QPushButton(dockWidgetContents);
        visualizeButton->setObjectName(QStringLiteral("visualizeButton"));

        verticalLayout->addWidget(visualizeButton);

        engraveButton = new QPushButton(dockWidgetContents);
        engraveButton->setObjectName(QStringLiteral("engraveButton"));
        engraveButton->setEnabled(false);

        verticalLayout->addWidget(engraveButton);

        text_meshButton = new QPushButton(dockWidgetContents);
        text_meshButton->setObjectName(QStringLiteral("text_meshButton"));
        text_meshButton->setEnabled(false);

        verticalLayout->addWidget(text_meshButton);

        reset_button = new QPushButton(dockWidgetContents);
        reset_button->setObjectName(QStringLiteral("reset_button"));

        verticalLayout->addWidget(reset_button);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        t_up_pushButton = new QPushButton(dockWidgetContents);
        t_up_pushButton->setObjectName(QStringLiteral("t_up_pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/cgal/icons/resources/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        t_up_pushButton->setIcon(icon);

        gridLayout_2->addWidget(t_up_pushButton, 1, 0, 1, 1);

        rot_slider = new QSlider(dockWidgetContents);
        rot_slider->setObjectName(QStringLiteral("rot_slider"));
        rot_slider->setMinimum(-179);
        rot_slider->setMaximum(179);
        rot_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(rot_slider, 5, 3, 1, 1);

        t_right_pushButton = new QPushButton(dockWidgetContents);
        t_right_pushButton->setObjectName(QStringLiteral("t_right_pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/cgal/icons/resources/right_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        t_right_pushButton->setIcon(icon1);

        gridLayout_2->addWidget(t_right_pushButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        t_down_pushButton = new QPushButton(dockWidgetContents);
        t_down_pushButton->setObjectName(QStringLiteral("t_down_pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/cgal/icons/resources/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        t_down_pushButton->setIcon(icon2);

        gridLayout_2->addWidget(t_down_pushButton, 1, 1, 1, 1);

        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 3, 2, 1, 1);

        t_left_pushButton = new QPushButton(dockWidgetContents);
        t_left_pushButton->setObjectName(QStringLiteral("t_left_pushButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/cgal/icons/resources/left_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        t_left_pushButton->setIcon(icon3);

        gridLayout_2->addWidget(t_left_pushButton, 0, 0, 1, 1);

        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 5, 2, 1, 1);

        scalX_slider = new QSlider(dockWidgetContents);
        scalX_slider->setObjectName(QStringLiteral("scalX_slider"));
        scalX_slider->setMaximum(2000);
        scalX_slider->setSingleStep(1);
        scalX_slider->setValue(1000);
        scalX_slider->setSliderPosition(1000);
        scalX_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(scalX_slider, 3, 3, 1, 1);

        scalY_slider = new QSlider(dockWidgetContents);
        scalY_slider->setObjectName(QStringLiteral("scalY_slider"));
        scalY_slider->setMaximum(2000);
        scalY_slider->setPageStep(10);
        scalY_slider->setValue(1000);
        scalY_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(scalY_slider, 4, 3, 1, 1);

        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 4, 2, 1, 1);

        text_prec_slider = new QSlider(dockWidgetContents);
        text_prec_slider->setObjectName(QStringLiteral("text_prec_slider"));
        text_prec_slider->setMinimum(1);
        text_prec_slider->setValue(15);
        text_prec_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(text_prec_slider, 6, 3, 1, 1);

        label_5 = new QLabel(dockWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 6, 2, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);

        graphicsView = new QGraphicsView(dockWidgetContents);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        bot_slider = new QSlider(groupBox);
        bot_slider->setObjectName(QStringLiteral("bot_slider"));
        bot_slider->setMaximum(10000);
        bot_slider->setValue(1000);
        bot_slider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(bot_slider, 0, 1, 1, 1);

        top_slider = new QSlider(groupBox);
        top_slider->setObjectName(QStringLiteral("top_slider"));
        top_slider->setMaximum(10000);
        top_slider->setValue(1000);
        top_slider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(top_slider, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        letter_checkBox = new QCheckBox(groupBox);
        letter_checkBox->setObjectName(QStringLiteral("letter_checkBox"));

        gridLayout_3->addWidget(letter_checkBox, 2, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        EngraveWidget->setWidget(dockWidgetContents);

        retranslateUi(EngraveWidget);

        QMetaObject::connectSlotsByName(EngraveWidget);
    } // setupUi

    void retranslateUi(QDockWidget *EngraveWidget)
    {
        EngraveWidget->setWindowTitle(QApplication::translate("EngraveWidget", "Engraving", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("EngraveWidget", "An Example Text", Q_NULLPTR));
        visualizeButton->setText(QApplication::translate("EngraveWidget", "Visualize", Q_NULLPTR));
        engraveButton->setText(QApplication::translate("EngraveWidget", "Engrave", Q_NULLPTR));
        text_meshButton->setText(QApplication::translate("EngraveWidget", "Generate Text Mesh", Q_NULLPTR));
        reset_button->setText(QApplication::translate("EngraveWidget", "Reset", Q_NULLPTR));
        t_up_pushButton->setText(QString());
        t_right_pushButton->setText(QString());
        t_down_pushButton->setText(QString());
        label_2->setText(QApplication::translate("EngraveWidget", "Scaling factor in X:", Q_NULLPTR));
        t_left_pushButton->setText(QString());
        label->setText(QApplication::translate("EngraveWidget", "Rotation degree:", Q_NULLPTR));
        label_4->setText(QApplication::translate("EngraveWidget", "Scaling factor in Y:", Q_NULLPTR));
        label_5->setText(QApplication::translate("EngraveWidget", "Text Precision", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("EngraveWidget", "Engraving Depth", Q_NULLPTR));
        label_3->setText(QApplication::translate("EngraveWidget", "Inside depth:", Q_NULLPTR));
        label_6->setText(QApplication::translate("EngraveWidget", "Outside depth:", Q_NULLPTR));
        letter_checkBox->setText(QApplication::translate("EngraveWidget", "Uniform letter mode", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EngraveWidget: public Ui_EngraveWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENGRAVE_DOCK_WIDGET_H

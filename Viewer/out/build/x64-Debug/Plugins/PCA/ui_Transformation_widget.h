/********************************************************************************
** Form generated from reading UI file 'Transformation_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFORMATION_WIDGET_H
#define UI_TRANSFORMATION_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransformationWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *matrix_22;
    QLabel *matrix_20;
    QLabel *matrix_03;
    QLabel *matrix_21;
    QLabel *matrix_12;
    QLabel *matrix_00;
    QLabel *matrix_01;
    QLabel *matrix_13;
    QLabel *matrix_23;
    QLabel *matrix_11;
    QLabel *matrix_10;
    QLabel *matrix_02;
    QLabel *matrix_30;
    QLabel *matrix_31;
    QLabel *matrix_32;
    QLabel *matrix_33;
    QHBoxLayout *horizontalLayout;
    QPushButton *resetMatrix_Button;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *transfo_ComboBox;
    QLineEdit *lineEditA;
    QLineEdit *lineEditX;
    QLineEdit *lineEditY;
    QLineEdit *lineEditZ;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *undoButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyTransfo_Button;
    QPushButton *clearButton;
    QHBoxLayout *validateLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *validatePushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *TransformationWidget)
    {
        if (TransformationWidget->objectName().isEmpty())
            TransformationWidget->setObjectName(QStringLiteral("TransformationWidget"));
        TransformationWidget->resize(328, 413);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        matrix_22 = new QLabel(groupBox);
        matrix_22->setObjectName(QStringLiteral("matrix_22"));

        gridLayout_3->addWidget(matrix_22, 2, 2, 1, 1);

        matrix_20 = new QLabel(groupBox);
        matrix_20->setObjectName(QStringLiteral("matrix_20"));

        gridLayout_3->addWidget(matrix_20, 2, 0, 1, 1);

        matrix_03 = new QLabel(groupBox);
        matrix_03->setObjectName(QStringLiteral("matrix_03"));

        gridLayout_3->addWidget(matrix_03, 0, 3, 1, 1);

        matrix_21 = new QLabel(groupBox);
        matrix_21->setObjectName(QStringLiteral("matrix_21"));

        gridLayout_3->addWidget(matrix_21, 2, 1, 1, 1);

        matrix_12 = new QLabel(groupBox);
        matrix_12->setObjectName(QStringLiteral("matrix_12"));

        gridLayout_3->addWidget(matrix_12, 1, 2, 1, 1);

        matrix_00 = new QLabel(groupBox);
        matrix_00->setObjectName(QStringLiteral("matrix_00"));

        gridLayout_3->addWidget(matrix_00, 0, 0, 1, 1);

        matrix_01 = new QLabel(groupBox);
        matrix_01->setObjectName(QStringLiteral("matrix_01"));

        gridLayout_3->addWidget(matrix_01, 0, 1, 1, 1);

        matrix_13 = new QLabel(groupBox);
        matrix_13->setObjectName(QStringLiteral("matrix_13"));

        gridLayout_3->addWidget(matrix_13, 1, 3, 1, 1);

        matrix_23 = new QLabel(groupBox);
        matrix_23->setObjectName(QStringLiteral("matrix_23"));

        gridLayout_3->addWidget(matrix_23, 2, 3, 1, 1);

        matrix_11 = new QLabel(groupBox);
        matrix_11->setObjectName(QStringLiteral("matrix_11"));

        gridLayout_3->addWidget(matrix_11, 1, 1, 1, 1);

        matrix_10 = new QLabel(groupBox);
        matrix_10->setObjectName(QStringLiteral("matrix_10"));

        gridLayout_3->addWidget(matrix_10, 1, 0, 1, 1);

        matrix_02 = new QLabel(groupBox);
        matrix_02->setObjectName(QStringLiteral("matrix_02"));

        gridLayout_3->addWidget(matrix_02, 0, 2, 1, 1);

        matrix_30 = new QLabel(groupBox);
        matrix_30->setObjectName(QStringLiteral("matrix_30"));

        gridLayout_3->addWidget(matrix_30, 3, 0, 1, 1);

        matrix_31 = new QLabel(groupBox);
        matrix_31->setObjectName(QStringLiteral("matrix_31"));

        gridLayout_3->addWidget(matrix_31, 3, 1, 1, 1);

        matrix_32 = new QLabel(groupBox);
        matrix_32->setObjectName(QStringLiteral("matrix_32"));

        gridLayout_3->addWidget(matrix_32, 3, 2, 1, 1);

        matrix_33 = new QLabel(groupBox);
        matrix_33->setObjectName(QStringLiteral("matrix_33"));

        gridLayout_3->addWidget(matrix_33, 3, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        resetMatrix_Button = new QPushButton(groupBox);
        resetMatrix_Button->setObjectName(QStringLiteral("resetMatrix_Button"));

        horizontalLayout->addWidget(resetMatrix_Button);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        transfo_ComboBox = new QComboBox(groupBox_2);
        transfo_ComboBox->setObjectName(QStringLiteral("transfo_ComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(transfo_ComboBox->sizePolicy().hasHeightForWidth());
        transfo_ComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(transfo_ComboBox);

        lineEditA = new QLineEdit(groupBox_2);
        lineEditA->setObjectName(QStringLiteral("lineEditA"));

        horizontalLayout_2->addWidget(lineEditA);

        lineEditX = new QLineEdit(groupBox_2);
        lineEditX->setObjectName(QStringLiteral("lineEditX"));

        horizontalLayout_2->addWidget(lineEditX);

        lineEditY = new QLineEdit(groupBox_2);
        lineEditY->setObjectName(QStringLiteral("lineEditY"));

        horizontalLayout_2->addWidget(lineEditY);

        lineEditZ = new QLineEdit(groupBox_2);
        lineEditZ->setObjectName(QStringLiteral("lineEditZ"));

        horizontalLayout_2->addWidget(lineEditZ);

        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        undoButton = new QPushButton(groupBox_2);
        undoButton->setObjectName(QStringLiteral("undoButton"));

        horizontalLayout_3->addWidget(undoButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        applyTransfo_Button = new QPushButton(groupBox_2);
        applyTransfo_Button->setObjectName(QStringLiteral("applyTransfo_Button"));

        horizontalLayout_3->addWidget(applyTransfo_Button);

        clearButton = new QPushButton(groupBox_2);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout_3->addWidget(clearButton);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(groupBox_2);


        verticalLayout_4->addWidget(groupBox);


        verticalLayout->addLayout(verticalLayout_4);

        validateLayout = new QHBoxLayout();
        validateLayout->setObjectName(QStringLiteral("validateLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        validateLayout->addItem(horizontalSpacer_2);

        validatePushButton = new QPushButton(dockWidgetContents);
        validatePushButton->setObjectName(QStringLiteral("validatePushButton"));
        validatePushButton->setEnabled(false);

        validateLayout->addWidget(validatePushButton);


        verticalLayout->addLayout(validateLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        TransformationWidget->setWidget(dockWidgetContents);

        retranslateUi(TransformationWidget);

        transfo_ComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TransformationWidget);
    } // setupUi

    void retranslateUi(QDockWidget *TransformationWidget)
    {
        TransformationWidget->setWindowTitle(QApplication::translate("TransformationWidget", "Affine Transformation", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("TransformationWidget", "Transformation Matrix", Q_NULLPTR));
        matrix_22->setText(QString());
        matrix_20->setText(QString());
        matrix_03->setText(QString());
        matrix_21->setText(QString());
        matrix_12->setText(QString());
        matrix_00->setText(QString());
        matrix_01->setText(QString());
        matrix_13->setText(QString());
        matrix_23->setText(QString());
        matrix_11->setText(QString());
        matrix_10->setText(QString());
        matrix_02->setText(QString());
        matrix_30->setText(QString());
        matrix_31->setText(QString());
        matrix_32->setText(QString());
        matrix_33->setText(QString());
#ifndef QT_NO_TOOLTIP
        resetMatrix_Button->setToolTip(QApplication::translate("TransformationWidget", "Resets the matrix to its initial state.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        resetMatrix_Button->setText(QApplication::translate("TransformationWidget", "Reset", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("TransformationWidget", "Individual Transformation:", Q_NULLPTR));
        transfo_ComboBox->clear();
        transfo_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("TransformationWidget", "Rotation: ", Q_NULLPTR)
         << QApplication::translate("TransformationWidget", "Translation: ", Q_NULLPTR)
         << QApplication::translate("TransformationWidget", "Scaling:", Q_NULLPTR)
         << QApplication::translate("TransformationWidget", "Normalize", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        transfo_ComboBox->setToolTip(QApplication::translate("TransformationWidget", "Angle, axis coordinates", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEditA->setToolTip(QApplication::translate("TransformationWidget", "Angle value in degrees.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lineEditA->setText(QString());
        lineEditA->setPlaceholderText(QApplication::translate("TransformationWidget", "A", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEditX->setToolTip(QApplication::translate("TransformationWidget", "Value along the x-axis.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lineEditX->setText(QString());
        lineEditX->setPlaceholderText(QApplication::translate("TransformationWidget", "X", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEditY->setToolTip(QApplication::translate("TransformationWidget", "Value along the y-axis.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lineEditY->setPlaceholderText(QApplication::translate("TransformationWidget", "Y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEditZ->setToolTip(QApplication::translate("TransformationWidget", "Value along the z-axis.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lineEditZ->setPlaceholderText(QApplication::translate("TransformationWidget", "Z", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        undoButton->setToolTip(QApplication::translate("TransformationWidget", "Restores the previous state once.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        undoButton->setText(QApplication::translate("TransformationWidget", "Undo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        applyTransfo_Button->setToolTip(QApplication::translate("TransformationWidget", "Saves the current state and applies the transformation.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        applyTransfo_Button->setText(QApplication::translate("TransformationWidget", "Apply", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("TransformationWidget", "Clears the fields.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("TransformationWidget", "Clear", Q_NULLPTR));
        validatePushButton->setText(QApplication::translate("TransformationWidget", "Validate", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TransformationWidget: public Ui_TransformationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFORMATION_WIDGET_H

/********************************************************************************
** Form generated from reading UI file 'Shortest_path_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTEST_PATH_WIDGET_H
#define UI_SHORTEST_PATH_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shortest_path
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QComboBox *Selection_type_combo_box;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *Primitives_type_combo_box;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *Shortest_path)
    {
        if (Shortest_path->objectName().isEmpty())
            Shortest_path->setObjectName(QStringLiteral("Shortest_path"));
        Shortest_path->resize(441, 108);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Selection_type_combo_box = new QComboBox(groupBox);
        Selection_type_combo_box->setObjectName(QStringLiteral("Selection_type_combo_box"));

        verticalLayout->addWidget(Selection_type_combo_box);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Primitives_type_combo_box = new QComboBox(groupBox_2);
        Primitives_type_combo_box->setObjectName(QStringLiteral("Primitives_type_combo_box"));

        verticalLayout_2->addWidget(Primitives_type_combo_box);


        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        Shortest_path->setWidget(dockWidgetContents);

        retranslateUi(Shortest_path);

        QMetaObject::connectSlotsByName(Shortest_path);
    } // setupUi

    void retranslateUi(QDockWidget *Shortest_path)
    {
        Shortest_path->setWindowTitle(QApplication::translate("Shortest_path", "Shortest Path", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Shortest_path", "Operation", Q_NULLPTR));
        Selection_type_combo_box->clear();
        Selection_type_combo_box->insertItems(0, QStringList()
         << QApplication::translate("Shortest_path", "Insert Source Point", Q_NULLPTR)
         << QApplication::translate("Shortest_path", "Remove Source Point", Q_NULLPTR)
         << QApplication::translate("Shortest_path", "Insert Target and Compute Path", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("Shortest_path", "Source/Target on:", Q_NULLPTR));
        Primitives_type_combo_box->clear();
        Primitives_type_combo_box->insertItems(0, QStringList()
         << QApplication::translate("Shortest_path", "Vertex", Q_NULLPTR)
         << QApplication::translate("Shortest_path", "Edge", Q_NULLPTR)
         << QApplication::translate("Shortest_path", "Face", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Shortest_path: public Ui_Shortest_path {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTEST_PATH_WIDGET_H

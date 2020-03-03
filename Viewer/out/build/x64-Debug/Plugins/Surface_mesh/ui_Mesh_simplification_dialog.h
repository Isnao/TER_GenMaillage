/********************************************************************************
** Form generated from reading UI file 'Mesh_simplification_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESH_SIMPLIFICATION_DIALOG_H
#define UI_MESH_SIMPLIFICATION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Mesh_simplification_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QCheckBox *m_use_nb_edges;
    QSpinBox *m_nb_edges;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *m_combinatorial;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *m_use_edge_length;
    QDoubleSpinBox *m_edge_length;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Mesh_simplification_dialog)
    {
        if (Mesh_simplification_dialog->objectName().isEmpty())
            Mesh_simplification_dialog->setObjectName(QStringLiteral("Mesh_simplification_dialog"));
        Mesh_simplification_dialog->resize(311, 171);
        verticalLayout = new QVBoxLayout(Mesh_simplification_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Mesh_simplification_dialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_use_nb_edges = new QCheckBox(Mesh_simplification_dialog);
        m_use_nb_edges->setObjectName(QStringLiteral("m_use_nb_edges"));
        m_use_nb_edges->setChecked(true);

        horizontalLayout->addWidget(m_use_nb_edges);

        m_nb_edges = new QSpinBox(Mesh_simplification_dialog);
        m_nb_edges->setObjectName(QStringLiteral("m_nb_edges"));
        m_nb_edges->setMinimum(1);
        m_nb_edges->setMaximum(400000000);

        horizontalLayout->addWidget(m_nb_edges);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        m_combinatorial = new QComboBox(Mesh_simplification_dialog);
        m_combinatorial->setObjectName(QStringLiteral("m_combinatorial"));
        m_combinatorial->setEnabled(true);

        horizontalLayout_3->addWidget(m_combinatorial);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_use_edge_length = new QCheckBox(Mesh_simplification_dialog);
        m_use_edge_length->setObjectName(QStringLiteral("m_use_edge_length"));
        m_use_edge_length->setEnabled(true);

        horizontalLayout_2->addWidget(m_use_edge_length);

        m_edge_length = new QDoubleSpinBox(Mesh_simplification_dialog);
        m_edge_length->setObjectName(QStringLiteral("m_edge_length"));
        m_edge_length->setEnabled(true);
        m_edge_length->setDecimals(5);
        m_edge_length->setMaximum(10000);

        horizontalLayout_2->addWidget(m_edge_length);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(Mesh_simplification_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Mesh_simplification_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Mesh_simplification_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Mesh_simplification_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Mesh_simplification_dialog);
    } // setupUi

    void retranslateUi(QDialog *Mesh_simplification_dialog)
    {
        Mesh_simplification_dialog->setWindowTitle(QApplication::translate("Mesh_simplification_dialog", "Stop Predicate", Q_NULLPTR));
        label->setText(QApplication::translate("Mesh_simplification_dialog", "Stop simplification as soon as:", Q_NULLPTR));
        m_use_nb_edges->setText(QApplication::translate("Mesh_simplification_dialog", "Number of edges =", Q_NULLPTR));
        m_combinatorial->clear();
        m_combinatorial->insertItems(0, QStringList()
         << QApplication::translate("Mesh_simplification_dialog", "AND", Q_NULLPTR)
         << QApplication::translate("Mesh_simplification_dialog", "OR", Q_NULLPTR)
        );
        m_use_edge_length->setText(QApplication::translate("Mesh_simplification_dialog", "Minimum edge length =", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mesh_simplification_dialog: public Ui_Mesh_simplification_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESH_SIMPLIFICATION_DIALOG_H

/********************************************************************************
** Form generated from reading UI file 'Statistics_on_item_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICS_ON_ITEM_DIALOG_H
#define UI_STATISTICS_ON_ITEM_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Statistics_on_item_dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *label_htmltab;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *exportButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *updateButton;
    QDialogButtonBox *okButtonBox;

    void setupUi(QDialog *Statistics_on_item_dialog)
    {
        if (Statistics_on_item_dialog->objectName().isEmpty())
            Statistics_on_item_dialog->setObjectName(QStringLiteral("Statistics_on_item_dialog"));
        Statistics_on_item_dialog->setWindowModality(Qt::NonModal);
        Statistics_on_item_dialog->resize(574, 691);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Statistics_on_item_dialog->sizePolicy().hasHeightForWidth());
        Statistics_on_item_dialog->setSizePolicy(sizePolicy);
        Statistics_on_item_dialog->setModal(false);
        verticalLayout_2 = new QVBoxLayout(Statistics_on_item_dialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_htmltab = new QTextEdit(Statistics_on_item_dialog);
        label_htmltab->setObjectName(QStringLiteral("label_htmltab"));
        sizePolicy.setHeightForWidth(label_htmltab->sizePolicy().hasHeightForWidth());
        label_htmltab->setSizePolicy(sizePolicy);
        label_htmltab->setUndoRedoEnabled(false);
        label_htmltab->setLineWrapMode(QTextEdit::NoWrap);
        label_htmltab->setReadOnly(true);

        verticalLayout->addWidget(label_htmltab);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        exportButton = new QPushButton(Statistics_on_item_dialog);
        exportButton->setObjectName(QStringLiteral("exportButton"));

        horizontalLayout_2->addWidget(exportButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        updateButton = new QPushButton(Statistics_on_item_dialog);
        updateButton->setObjectName(QStringLiteral("updateButton"));

        horizontalLayout_2->addWidget(updateButton);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        okButtonBox = new QDialogButtonBox(Statistics_on_item_dialog);
        okButtonBox->setObjectName(QStringLiteral("okButtonBox"));
        okButtonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(okButtonBox);

        verticalLayout_2->setStretch(0, 1);

        retranslateUi(Statistics_on_item_dialog);
        QObject::connect(okButtonBox, SIGNAL(rejected()), Statistics_on_item_dialog, SLOT(reject()));
        QObject::connect(okButtonBox, SIGNAL(accepted()), Statistics_on_item_dialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(Statistics_on_item_dialog);
    } // setupUi

    void retranslateUi(QDialog *Statistics_on_item_dialog)
    {
        Statistics_on_item_dialog->setWindowTitle(QApplication::translate("Statistics_on_item_dialog", "Statistics", Q_NULLPTR));
        exportButton->setText(QApplication::translate("Statistics_on_item_dialog", "&Export...", Q_NULLPTR));
        updateButton->setText(QApplication::translate("Statistics_on_item_dialog", "Update", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Statistics_on_item_dialog: public Ui_Statistics_on_item_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICS_ON_ITEM_DIALOG_H

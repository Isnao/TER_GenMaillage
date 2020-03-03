/********************************************************************************
** Form generated from reading UI file 'Image_res_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_RES_DIALOG_H
#define UI_IMAGE_RES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ImagePrecisionDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QComboBox *imageType;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QComboBox *precisionList;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *ImagePrecisionDialog)
    {
        if (ImagePrecisionDialog->objectName().isEmpty())
            ImagePrecisionDialog->setObjectName(QStringLiteral("ImagePrecisionDialog"));
        ImagePrecisionDialog->resize(421, 370);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImagePrecisionDialog->sizePolicy().hasHeightForWidth());
        ImagePrecisionDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ImagePrecisionDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 11, 0, 1, 2);

        imageType = new QComboBox(ImagePrecisionDialog);
        imageType->setObjectName(QStringLiteral("imageType"));

        gridLayout->addWidget(imageType, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ImagePrecisionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 12, 0, 1, 2);

        label_3 = new QLabel(ImagePrecisionDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        groupBox = new QGroupBox(ImagePrecisionDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        precisionList = new QComboBox(groupBox);
        precisionList->setObjectName(QStringLiteral("precisionList"));
        precisionList->setEditable(false);

        gridLayout_3->addWidget(precisionList, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(11);
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setWordWrap(true);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setLineWidth(1);
        label->setWordWrap(true);

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 2, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);
#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(imageType);
        label->setBuddy(precisionList);
#endif // QT_NO_SHORTCUT

        retranslateUi(ImagePrecisionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ImagePrecisionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ImagePrecisionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ImagePrecisionDialog);
    } // setupUi

    void retranslateUi(QDialog *ImagePrecisionDialog)
    {
        ImagePrecisionDialog->setWindowTitle(QApplication::translate("ImagePrecisionDialog", "Load a 3D image", Q_NULLPTR));
        label_3->setText(QApplication::translate("ImagePrecisionDialog", "Please choose the image &type", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ImagePrecisionDialog", "Drawing settings for a segment image", Q_NULLPTR));
        label_2->setText(QApplication::translate("ImagePrecisionDialog", "1:x means that x voxels of the original image are represented by 1 cube in the drawn image", Q_NULLPTR));
        label->setText(QApplication::translate("ImagePrecisionDialog", "Please choose the image drawing &precision", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImagePrecisionDialog: public Ui_ImagePrecisionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_RES_DIALOG_H

/********************************************************************************
** Form generated from reading UI file 'raw_image.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAW_IMAGE_H
#define UI_RAW_IMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Raw_image_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QRadioButton *short_bt;
    QRadioButton *float_bt;
    QRadioButton *int_bt;
    QRadioButton *double_bt;
    QCheckBox *signed_bt;
    QRadioButton *char_bt;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout1;
    QLabel *label_dim;
    QLabel *label_spacing;
    QSpinBox *dim_x;
    QSpinBox *dim_y;
    QSpinBox *dim_z;
    QDoubleSpinBox *spacing_x;
    QDoubleSpinBox *spacing_y;
    QDoubleSpinBox *spacing_z;
    QLabel *offset_label;
    QSpinBox *offset;
    QLabel *imagesize_budy;
    QLabel *label_image_size;
    QLabel *filesize_budy;
    QLabel *label_file_size;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Raw_image_dialog)
    {
        if (Raw_image_dialog->objectName().isEmpty())
            Raw_image_dialog->setObjectName(QStringLiteral("Raw_image_dialog"));
        Raw_image_dialog->resize(585, 326);
        verticalLayout = new QVBoxLayout(Raw_image_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(Raw_image_dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        short_bt = new QRadioButton(groupBox_2);
        short_bt->setObjectName(QStringLiteral("short_bt"));

        gridLayout->addWidget(short_bt, 2, 0, 1, 1);

        float_bt = new QRadioButton(groupBox_2);
        float_bt->setObjectName(QStringLiteral("float_bt"));

        gridLayout->addWidget(float_bt, 3, 0, 1, 1);

        int_bt = new QRadioButton(groupBox_2);
        int_bt->setObjectName(QStringLiteral("int_bt"));

        gridLayout->addWidget(int_bt, 0, 1, 1, 1);

        double_bt = new QRadioButton(groupBox_2);
        double_bt->setObjectName(QStringLiteral("double_bt"));

        gridLayout->addWidget(double_bt, 3, 1, 1, 1);

        signed_bt = new QCheckBox(groupBox_2);
        signed_bt->setObjectName(QStringLiteral("signed_bt"));

        gridLayout->addWidget(signed_bt, 2, 1, 1, 1);

        char_bt = new QRadioButton(groupBox_2);
        char_bt->setObjectName(QStringLiteral("char_bt"));

        gridLayout->addWidget(char_bt, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(Raw_image_dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label_dim = new QLabel(groupBox);
        label_dim->setObjectName(QStringLiteral("label_dim"));
        label_dim->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_dim, 0, 0, 1, 1);

        label_spacing = new QLabel(groupBox);
        label_spacing->setObjectName(QStringLiteral("label_spacing"));
        label_spacing->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_spacing, 2, 0, 1, 1);

        dim_x = new QSpinBox(groupBox);
        dim_x->setObjectName(QStringLiteral("dim_x"));
        dim_x->setMaximum(100000000);

        gridLayout1->addWidget(dim_x, 0, 1, 1, 1);

        dim_y = new QSpinBox(groupBox);
        dim_y->setObjectName(QStringLiteral("dim_y"));
        dim_y->setMaximum(100000000);

        gridLayout1->addWidget(dim_y, 0, 2, 1, 1);

        dim_z = new QSpinBox(groupBox);
        dim_z->setObjectName(QStringLiteral("dim_z"));
        dim_z->setMaximum(100000000);

        gridLayout1->addWidget(dim_z, 0, 3, 1, 1);

        spacing_x = new QDoubleSpinBox(groupBox);
        spacing_x->setObjectName(QStringLiteral("spacing_x"));
        spacing_x->setDecimals(5);
        spacing_x->setValue(1);

        gridLayout1->addWidget(spacing_x, 2, 1, 1, 1);

        spacing_y = new QDoubleSpinBox(groupBox);
        spacing_y->setObjectName(QStringLiteral("spacing_y"));
        spacing_y->setDecimals(5);
        spacing_y->setValue(1);

        gridLayout1->addWidget(spacing_y, 2, 2, 1, 1);

        spacing_z = new QDoubleSpinBox(groupBox);
        spacing_z->setObjectName(QStringLiteral("spacing_z"));
        spacing_z->setDecimals(5);
        spacing_z->setValue(1);

        gridLayout1->addWidget(spacing_z, 2, 3, 1, 1);

        offset_label = new QLabel(groupBox);
        offset_label->setObjectName(QStringLiteral("offset_label"));
        offset_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(offset_label, 3, 0, 1, 1);

        offset = new QSpinBox(groupBox);
        offset->setObjectName(QStringLiteral("offset"));
        offset->setMaximum(999999999);

        gridLayout1->addWidget(offset, 3, 1, 1, 1);

        imagesize_budy = new QLabel(groupBox);
        imagesize_budy->setObjectName(QStringLiteral("imagesize_budy"));
        imagesize_budy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(imagesize_budy, 1, 0, 1, 1);

        label_image_size = new QLabel(groupBox);
        label_image_size->setObjectName(QStringLiteral("label_image_size"));

        gridLayout1->addWidget(label_image_size, 1, 1, 1, 1);

        filesize_budy = new QLabel(groupBox);
        filesize_budy->setObjectName(QStringLiteral("filesize_budy"));
        filesize_budy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(filesize_budy, 1, 2, 1, 1);

        label_file_size = new QLabel(groupBox);
        label_file_size->setObjectName(QStringLiteral("label_file_size"));

        gridLayout1->addWidget(label_file_size, 1, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(Raw_image_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label_dim->setBuddy(dim_x);
        label_spacing->setBuddy(spacing_x);
        offset_label->setBuddy(offset);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(int_bt, short_bt);
        QWidget::setTabOrder(short_bt, signed_bt);
        QWidget::setTabOrder(signed_bt, float_bt);
        QWidget::setTabOrder(float_bt, double_bt);
        QWidget::setTabOrder(double_bt, dim_x);
        QWidget::setTabOrder(dim_x, dim_y);
        QWidget::setTabOrder(dim_y, dim_z);
        QWidget::setTabOrder(dim_z, spacing_x);
        QWidget::setTabOrder(spacing_x, spacing_y);
        QWidget::setTabOrder(spacing_y, spacing_z);
        QWidget::setTabOrder(spacing_z, offset);
        QWidget::setTabOrder(offset, buttonBox);

        retranslateUi(Raw_image_dialog);
        QObject::connect(float_bt, SIGNAL(toggled(bool)), signed_bt, SLOT(setDisabled(bool)));
        QObject::connect(double_bt, SIGNAL(toggled(bool)), signed_bt, SLOT(setDisabled(bool)));
        QObject::connect(buttonBox, SIGNAL(accepted()), Raw_image_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Raw_image_dialog, SLOT(reject()));
        QObject::connect(dim_x, SIGNAL(valueChanged(int)), Raw_image_dialog, SLOT(update_image_size()));
        QObject::connect(dim_z, SIGNAL(valueChanged(int)), Raw_image_dialog, SLOT(update_image_size()));
        QObject::connect(char_bt, SIGNAL(clicked()), Raw_image_dialog, SLOT(update_image_size()));
        QObject::connect(short_bt, SIGNAL(clicked()), Raw_image_dialog, SLOT(update_image_size()));
        QObject::connect(float_bt, SIGNAL(clicked()), Raw_image_dialog, SLOT(update_image_size()));
        QObject::connect(int_bt, SIGNAL(clicked()), Raw_image_dialog, SLOT(update_image_size()));
        QObject::connect(dim_y, SIGNAL(valueChanged(int)), Raw_image_dialog, SLOT(update_image_size()));
        QObject::connect(double_bt, SIGNAL(clicked()), Raw_image_dialog, SLOT(update_image_size()));
        QObject::connect(offset, SIGNAL(valueChanged(int)), Raw_image_dialog, SLOT(update_image_size()));

        QMetaObject::connectSlotsByName(Raw_image_dialog);
    } // setupUi

    void retranslateUi(QDialog *Raw_image_dialog)
    {
        Raw_image_dialog->setWindowTitle(QApplication::translate("Raw_image_dialog", "Open raw image", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Raw_image_dialog", "Image &value type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        short_bt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        short_bt->setText(QApplication::translate("Raw_image_dialog", "Short int (16 bits)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        float_bt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        float_bt->setText(QApplication::translate("Raw_image_dialog", "Float", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        int_bt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        int_bt->setText(QApplication::translate("Raw_image_dialog", "Int (32 bits)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        double_bt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        double_bt->setText(QApplication::translate("Raw_image_dialog", "Double", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        signed_bt->setToolTip(QApplication::translate("Raw_image_dialog", "Specifies if the image's word kind is signed.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        signed_bt->setText(QApplication::translate("Raw_image_dialog", "Signed", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        char_bt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        char_bt->setText(QApplication::translate("Raw_image_dialog", "char (8\302\240bits)", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Raw_image_dialog", "Image dimensions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_dim->setToolTip(QApplication::translate("Raw_image_dialog", "Number of voxel along the axis.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_dim->setText(QApplication::translate("Raw_image_dialog", "&Dimensions:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_spacing->setToolTip(QApplication::translate("Raw_image_dialog", "Changing those values will scale the image according to the proportions between vx, vy and vz.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_spacing->setText(QApplication::translate("Raw_image_dialog", "&Spacing:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        dim_x->setToolTip(QApplication::translate("Raw_image_dialog", "Number of voxels along the X axis.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        dim_x->setPrefix(QApplication::translate("Raw_image_dialog", "x: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        dim_y->setToolTip(QApplication::translate("Raw_image_dialog", "Number of voxels along the Y axis.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        dim_y->setPrefix(QApplication::translate("Raw_image_dialog", "y: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        dim_z->setToolTip(QApplication::translate("Raw_image_dialog", "Number of voxels along the Z axis.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        dim_z->setPrefix(QApplication::translate("Raw_image_dialog", "z: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spacing_x->setToolTip(QApplication::translate("Raw_image_dialog", "Voxel size in x.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        spacing_x->setPrefix(QApplication::translate("Raw_image_dialog", "vx: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spacing_y->setToolTip(QApplication::translate("Raw_image_dialog", "Voxel size in y.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        spacing_y->setPrefix(QApplication::translate("Raw_image_dialog", "vy: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spacing_z->setToolTip(QApplication::translate("Raw_image_dialog", "Voxel size in z.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        spacing_z->setPrefix(QApplication::translate("Raw_image_dialog", "vz: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        offset_label->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        offset_label->setText(QApplication::translate("Raw_image_dialog", "&Offset:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        offset->setToolTip(QApplication::translate("Raw_image_dialog", "Specifies how many bytes must be skipped before reading the data. (Use it to skip unhandled headers for example.)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        offset->setSuffix(QApplication::translate("Raw_image_dialog", " bytes", Q_NULLPTR));
        imagesize_budy->setText(QApplication::translate("Raw_image_dialog", "Image size:", Q_NULLPTR));
        label_image_size->setText(QApplication::translate("Raw_image_dialog", "0", Q_NULLPTR));
        filesize_budy->setText(QApplication::translate("Raw_image_dialog", "File size:", Q_NULLPTR));
        label_file_size->setText(QApplication::translate("Raw_image_dialog", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Raw_image_dialog: public Ui_Raw_image_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAW_IMAGE_H

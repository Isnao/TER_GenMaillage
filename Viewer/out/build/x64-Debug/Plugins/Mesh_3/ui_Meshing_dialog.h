/********************************************************************************
** Form generated from reading UI file 'Meshing_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESHING_DIALOG_H
#define UI_MESHING_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Meshing_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *objectName;
    QLabel *objectNameSize;
    QGroupBox *initializationGroup;
    QGridLayout *gridLayout_5;
    QLabel *detectComponentsLabel;
    QCheckBox *detectComponents;
    QSpacerItem *horizontalSpacer;
    QGroupBox *sharpFeaturesGroup;
    QGridLayout *gridLayout;
    QComboBox *protectEdges;
    QLabel *sharpEdgesAngleLabel;
    QLabel *edgeLabel;
    QCheckBox *noEdgeSizing;
    QDoubleSpinBox *edgeSizing;
    QDoubleSpinBox *sharpEdgesAngle;
    QLabel *protectLabel;
    QCheckBox *protect;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *noFacetSizing;
    QLabel *approxLabel;
    QCheckBox *noApprox;
    QDoubleSpinBox *approx;
    QLabel *angleLabel;
    QDoubleSpinBox *facetSizing;
    QFrame *advanced;
    QVBoxLayout *advancedLayout;
    QLabel *manifoldLabel;
    QCheckBox *manifoldCheckBox;
    QLabel *facetTopologyLabel;
    QCheckBox *facetTopology;
    QCheckBox *checkBox;
    QCheckBox *noAngle;
    QLabel *sizingLabel;
    QDoubleSpinBox *facetAngle;
    QGroupBox *volumeGroup;
    QGridLayout *gridLayout_3;
    QCheckBox *noTetSizing;
    QCheckBox *noTetShape;
    QDoubleSpinBox *tetShape;
    QDoubleSpinBox *tetSizing;
    QLabel *label_2;
    QLabel *label;
    QGroupBox *grayImgGroup;
    QGridLayout *gridLayout_4;
    QCheckBox *inside_is_less_checkBox;
    QDoubleSpinBox *iso_value_spinBox;
    QDoubleSpinBox *value_outside_spinBox;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QCheckBox *facegraphCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Meshing_dialog)
    {
        if (Meshing_dialog->objectName().isEmpty())
            Meshing_dialog->setObjectName(QStringLiteral("Meshing_dialog"));
        Meshing_dialog->setEnabled(true);
        Meshing_dialog->resize(576, 928);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Meshing_dialog->sizePolicy().hasHeightForWidth());
        Meshing_dialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Meshing_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        objectName = new QLabel(Meshing_dialog);
        objectName->setObjectName(QStringLiteral("objectName"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        objectName->setFont(font);

        verticalLayout->addWidget(objectName);

        objectNameSize = new QLabel(Meshing_dialog);
        objectNameSize->setObjectName(QStringLiteral("objectNameSize"));

        verticalLayout->addWidget(objectNameSize);

        initializationGroup = new QGroupBox(Meshing_dialog);
        initializationGroup->setObjectName(QStringLiteral("initializationGroup"));
        gridLayout_5 = new QGridLayout(initializationGroup);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        detectComponentsLabel = new QLabel(initializationGroup);
        detectComponentsLabel->setObjectName(QStringLiteral("detectComponentsLabel"));
        detectComponentsLabel->setLayoutDirection(Qt::LeftToRight);
        detectComponentsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(detectComponentsLabel, 0, 0, 1, 1);

        detectComponents = new QCheckBox(initializationGroup);
        detectComponents->setObjectName(QStringLiteral("detectComponents"));

        gridLayout_5->addWidget(detectComponents, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 1, 1, 1);

        gridLayout_5->setColumnStretch(1, 1);

        verticalLayout->addWidget(initializationGroup);

        sharpFeaturesGroup = new QGroupBox(Meshing_dialog);
        sharpFeaturesGroup->setObjectName(QStringLiteral("sharpFeaturesGroup"));
        sharpFeaturesGroup->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(sharpFeaturesGroup);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        protectEdges = new QComboBox(sharpFeaturesGroup);
        protectEdges->setObjectName(QStringLiteral("protectEdges"));

        gridLayout->addWidget(protectEdges, 1, 1, 1, 1);

        sharpEdgesAngleLabel = new QLabel(sharpFeaturesGroup);
        sharpEdgesAngleLabel->setObjectName(QStringLiteral("sharpEdgesAngleLabel"));
        sharpEdgesAngleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sharpEdgesAngleLabel, 3, 0, 1, 1);

        edgeLabel = new QLabel(sharpFeaturesGroup);
        edgeLabel->setObjectName(QStringLiteral("edgeLabel"));
        edgeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(edgeLabel, 7, 0, 1, 1);

        noEdgeSizing = new QCheckBox(sharpFeaturesGroup);
        noEdgeSizing->setObjectName(QStringLiteral("noEdgeSizing"));

        gridLayout->addWidget(noEdgeSizing, 7, 2, 1, 1);

        edgeSizing = new QDoubleSpinBox(sharpFeaturesGroup);
        edgeSizing->setObjectName(QStringLiteral("edgeSizing"));
        edgeSizing->setDecimals(4);
        edgeSizing->setMinimum(0);
        edgeSizing->setValue(0);

        gridLayout->addWidget(edgeSizing, 7, 1, 1, 1);

        sharpEdgesAngle = new QDoubleSpinBox(sharpFeaturesGroup);
        sharpEdgesAngle->setObjectName(QStringLiteral("sharpEdgesAngle"));
        sharpEdgesAngle->setMaximum(180);
        sharpEdgesAngle->setValue(60);

        gridLayout->addWidget(sharpEdgesAngle, 3, 1, 1, 1);

        protectLabel = new QLabel(sharpFeaturesGroup);
        protectLabel->setObjectName(QStringLiteral("protectLabel"));
        protectLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(protectLabel, 1, 0, 1, 1);

        protect = new QCheckBox(sharpFeaturesGroup);
        protect->setObjectName(QStringLiteral("protect"));
        protect->setChecked(true);

        gridLayout->addWidget(protect, 1, 2, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(sharpFeaturesGroup);

        groupBox = new QGroupBox(Meshing_dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        noFacetSizing = new QCheckBox(groupBox);
        noFacetSizing->setObjectName(QStringLiteral("noFacetSizing"));
        noFacetSizing->setChecked(true);

        gridLayout_2->addWidget(noFacetSizing, 2, 2, 1, 1);

        approxLabel = new QLabel(groupBox);
        approxLabel->setObjectName(QStringLiteral("approxLabel"));
        approxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(approxLabel, 1, 0, 1, 1);

        noApprox = new QCheckBox(groupBox);
        noApprox->setObjectName(QStringLiteral("noApprox"));
        noApprox->setChecked(true);

        gridLayout_2->addWidget(noApprox, 1, 2, 1, 1);

        approx = new QDoubleSpinBox(groupBox);
        approx->setObjectName(QStringLiteral("approx"));
        approx->setMinimumSize(QSize(110, 0));

        gridLayout_2->addWidget(approx, 1, 1, 1, 1);

        angleLabel = new QLabel(groupBox);
        angleLabel->setObjectName(QStringLiteral("angleLabel"));
        angleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(angleLabel, 3, 0, 1, 1);

        facetSizing = new QDoubleSpinBox(groupBox);
        facetSizing->setObjectName(QStringLiteral("facetSizing"));
        facetSizing->setMinimumSize(QSize(110, 0));
        facetSizing->setDecimals(4);

        gridLayout_2->addWidget(facetSizing, 2, 1, 1, 1);

        advanced = new QFrame(groupBox);
        advanced->setObjectName(QStringLiteral("advanced"));
        advanced->setVisible(true);
        advanced->setFrameShape(QFrame::StyledPanel);
        advanced->setFrameShadow(QFrame::Plain);
        advancedLayout = new QVBoxLayout(advanced);
        advancedLayout->setObjectName(QStringLiteral("advancedLayout"));
        manifoldLabel = new QLabel(advanced);
        manifoldLabel->setObjectName(QStringLiteral("manifoldLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(manifoldLabel->sizePolicy().hasHeightForWidth());
        manifoldLabel->setSizePolicy(sizePolicy1);
        manifoldLabel->setWordWrap(true);

        advancedLayout->addWidget(manifoldLabel);

        manifoldCheckBox = new QCheckBox(advanced);
        manifoldCheckBox->setObjectName(QStringLiteral("manifoldCheckBox"));
        manifoldCheckBox->setLayoutDirection(Qt::RightToLeft);

        advancedLayout->addWidget(manifoldCheckBox);

        facetTopologyLabel = new QLabel(advanced);
        facetTopologyLabel->setObjectName(QStringLiteral("facetTopologyLabel"));
        facetTopologyLabel->setWordWrap(true);

        advancedLayout->addWidget(facetTopologyLabel);

        facetTopology = new QCheckBox(advanced);
        facetTopology->setObjectName(QStringLiteral("facetTopology"));
        facetTopology->setLayoutDirection(Qt::RightToLeft);

        advancedLayout->addWidget(facetTopology);


        gridLayout_2->addWidget(advanced, 9, 0, 1, 3);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 5, 0, 1, 1);

        noAngle = new QCheckBox(groupBox);
        noAngle->setObjectName(QStringLiteral("noAngle"));
        noAngle->setChecked(true);

        gridLayout_2->addWidget(noAngle, 3, 2, 1, 1);

        sizingLabel = new QLabel(groupBox);
        sizingLabel->setObjectName(QStringLiteral("sizingLabel"));
        sizingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(sizingLabel, 2, 0, 1, 1);

        facetAngle = new QDoubleSpinBox(groupBox);
        facetAngle->setObjectName(QStringLiteral("facetAngle"));
        facetAngle->setMinimumSize(QSize(110, 0));
        facetAngle->setMinimum(0);
        facetAngle->setMaximum(30);
        facetAngle->setValue(25);

        gridLayout_2->addWidget(facetAngle, 3, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        volumeGroup = new QGroupBox(Meshing_dialog);
        volumeGroup->setObjectName(QStringLiteral("volumeGroup"));
        gridLayout_3 = new QGridLayout(volumeGroup);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        noTetSizing = new QCheckBox(volumeGroup);
        noTetSizing->setObjectName(QStringLiteral("noTetSizing"));
        noTetSizing->setChecked(true);

        gridLayout_3->addWidget(noTetSizing, 0, 2, 1, 1);

        noTetShape = new QCheckBox(volumeGroup);
        noTetShape->setObjectName(QStringLiteral("noTetShape"));
        noTetShape->setChecked(true);

        gridLayout_3->addWidget(noTetShape, 1, 2, 1, 1);

        tetShape = new QDoubleSpinBox(volumeGroup);
        tetShape->setObjectName(QStringLiteral("tetShape"));
        tetShape->setMinimumSize(QSize(110, 0));
        tetShape->setMinimum(1);
        tetShape->setValue(3);

        gridLayout_3->addWidget(tetShape, 1, 1, 1, 1);

        tetSizing = new QDoubleSpinBox(volumeGroup);
        tetSizing->setObjectName(QStringLiteral("tetSizing"));
        tetSizing->setMinimumSize(QSize(110, 0));
        tetSizing->setDecimals(4);

        gridLayout_3->addWidget(tetSizing, 0, 1, 1, 1);

        label_2 = new QLabel(volumeGroup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(volumeGroup);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        verticalLayout->addWidget(volumeGroup);

        grayImgGroup = new QGroupBox(Meshing_dialog);
        grayImgGroup->setObjectName(QStringLiteral("grayImgGroup"));
        gridLayout_4 = new QGridLayout(grayImgGroup);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        inside_is_less_checkBox = new QCheckBox(grayImgGroup);
        inside_is_less_checkBox->setObjectName(QStringLiteral("inside_is_less_checkBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(inside_is_less_checkBox->sizePolicy().hasHeightForWidth());
        inside_is_less_checkBox->setSizePolicy(sizePolicy2);
        inside_is_less_checkBox->setLayoutDirection(Qt::LeftToRight);
        inside_is_less_checkBox->setChecked(true);

        gridLayout_4->addWidget(inside_is_less_checkBox, 2, 1, 1, 1);

        iso_value_spinBox = new QDoubleSpinBox(grayImgGroup);
        iso_value_spinBox->setObjectName(QStringLiteral("iso_value_spinBox"));
        iso_value_spinBox->setMinimum(-65536);
        iso_value_spinBox->setMaximum(65536);
        iso_value_spinBox->setValue(3);

        gridLayout_4->addWidget(iso_value_spinBox, 1, 1, 1, 1);

        value_outside_spinBox = new QDoubleSpinBox(grayImgGroup);
        value_outside_spinBox->setObjectName(QStringLiteral("value_outside_spinBox"));

        gridLayout_4->addWidget(value_outside_spinBox, 0, 1, 1, 1);

        label_4 = new QLabel(grayImgGroup);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        label_3 = new QLabel(grayImgGroup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_3, 1, 0, 1, 1);

        label_5 = new QLabel(grayImgGroup);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_5, 2, 0, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        verticalLayout->addWidget(grayImgGroup);

        facegraphCheckBox = new QCheckBox(Meshing_dialog);
        facegraphCheckBox->setObjectName(QStringLiteral("facegraphCheckBox"));

        verticalLayout->addWidget(facegraphCheckBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(Meshing_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        detectComponentsLabel->setBuddy(detectComponents);
        sharpEdgesAngleLabel->setBuddy(sharpEdgesAngle);
        edgeLabel->setBuddy(edgeSizing);
        protectLabel->setBuddy(protect);
        approxLabel->setBuddy(approx);
        angleLabel->setBuddy(facetAngle);
        sizingLabel->setBuddy(facetSizing);
        label_2->setBuddy(tetShape);
        label->setBuddy(tetSizing);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(approx, noApprox);
        QWidget::setTabOrder(noApprox, facetSizing);
        QWidget::setTabOrder(facetSizing, noFacetSizing);
        QWidget::setTabOrder(noFacetSizing, facetAngle);
        QWidget::setTabOrder(facetAngle, noAngle);
        QWidget::setTabOrder(noAngle, tetSizing);
        QWidget::setTabOrder(tetSizing, noTetSizing);
        QWidget::setTabOrder(noTetSizing, tetShape);
        QWidget::setTabOrder(tetShape, noTetShape);
        QWidget::setTabOrder(noTetShape, checkBox);
        QWidget::setTabOrder(checkBox, manifoldCheckBox);

        retranslateUi(Meshing_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Meshing_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Meshing_dialog, SLOT(reject()));
        QObject::connect(checkBox, SIGNAL(toggled(bool)), advanced, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(Meshing_dialog);
    } // setupUi

    void retranslateUi(QDialog *Meshing_dialog)
    {
        Meshing_dialog->setWindowTitle(QApplication::translate("Meshing_dialog", "Meshing criteria", Q_NULLPTR));
        objectName->setText(QApplication::translate("Meshing_dialog", "NO OBJECT", Q_NULLPTR));
        objectNameSize->setText(QApplication::translate("Meshing_dialog", "No size", Q_NULLPTR));
        initializationGroup->setTitle(QApplication::translate("Meshing_dialog", "Mesh initialization", Q_NULLPTR));
        detectComponentsLabel->setText(QApplication::translate("Meshing_dialog", "&Detect all connected components", Q_NULLPTR));
        detectComponents->setText(QString());
        sharpFeaturesGroup->setTitle(QApplication::translate("Meshing_dialog", "Sharp features", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        sharpEdgesAngleLabel->setToolTip(QApplication::translate("Meshing_dialog", "For the detection of sharp edges, this is the lower bound on the angle between normals of incident facets of sharp edges", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        sharpEdgesAngleLabel->setText(QApplication::translate("Meshing_dialog", "Angle bound for &sharp edges (deg)", Q_NULLPTR));
        edgeLabel->setText(QApplication::translate("Meshing_dialog", "Edge &size", Q_NULLPTR));
        noEdgeSizing->setText(QString());
        protectLabel->setText(QApplication::translate("Meshing_dialog", "&Protect sharp edges", Q_NULLPTR));
        protect->setText(QString());
        groupBox->setTitle(QApplication::translate("Meshing_dialog", "Surface", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        noFacetSizing->setToolTip(QApplication::translate("Meshing_dialog", "Enable/Disable parameter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        noFacetSizing->setText(QString());
        approxLabel->setText(QApplication::translate("Meshing_dialog", "Approximation &error", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        noApprox->setToolTip(QApplication::translate("Meshing_dialog", "Enable/Disable parameter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        noApprox->setText(QString());
        angleLabel->setText(QApplication::translate("Meshing_dialog", "Facet min. &angle (deg)", Q_NULLPTR));
        manifoldLabel->setText(QApplication::translate("Meshing_dialog", "The following option forces the meshing engine to produce a 3D mesh with a manifold boundary. That may lead to an infinite loop if the input domain has a non-manifold 2D component.", Q_NULLPTR));
        manifoldCheckBox->setText(QApplication::translate("Meshing_dialog", "&manifold", Q_NULLPTR));
        facetTopologyLabel->setText(QApplication::translate("Meshing_dialog", "The following option enables the <a href=\"https://doc.cgal.org/latest/Mesh_3/group__PkgMesh__3Enum.html#gaac682a581ddebf8daff681621911d1f3\"> <code>FACET_VERTICES_ON_SAME_SURFACE_PATCH_WITH_ADJACENCY_CHECK </code></a> facet topology criterion (click on the link to see the manual page).", Q_NULLPTR));
        facetTopology->setText(QApplication::translate("Meshing_dialog", "force facets vertices on same surface patch", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Meshing_dialog", "See advanced &controls...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        noAngle->setToolTip(QApplication::translate("Meshing_dialog", "Enable/Disable parameter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        noAngle->setText(QString());
        sizingLabel->setText(QApplication::translate("Meshing_dialog", "&Facet max. size", Q_NULLPTR));
        volumeGroup->setTitle(QApplication::translate("Meshing_dialog", "Volume", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        noTetSizing->setToolTip(QApplication::translate("Meshing_dialog", "Enable/Disable parameter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        noTetSizing->setText(QString());
#ifndef QT_NO_TOOLTIP
        noTetShape->setToolTip(QApplication::translate("Meshing_dialog", "Enable/Disable parameter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        noTetShape->setText(QString());
        label_2->setText(QApplication::translate("Meshing_dialog", "Tetrahedron shape (radius-edge ratio)", Q_NULLPTR));
        label->setText(QApplication::translate("Meshing_dialog", "&Tetrahedron max. size", Q_NULLPTR));
        grayImgGroup->setTitle(QApplication::translate("Meshing_dialog", "Gray Images", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        inside_is_less_checkBox->setToolTip(QApplication::translate("Meshing_dialog", "if unchecked, value inside the domain is greater than isovalue", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        inside_is_less_checkBox->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("Meshing_dialog", "image value outside the image bounding box", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("Meshing_dialog", "Value outside", Q_NULLPTR));
        label_3->setText(QApplication::translate("Meshing_dialog", "Iso value", Q_NULLPTR));
        label_5->setText(QApplication::translate("Meshing_dialog", "Value inside is less than iso value", Q_NULLPTR));
        facegraphCheckBox->setText(QApplication::translate("Meshing_dialog", "Create as FaceGraph", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Meshing_dialog: public Ui_Meshing_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHING_DIALOG_H

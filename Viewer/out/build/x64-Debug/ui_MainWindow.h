/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionLoad;
    QAction *actionErase;
    QAction *actionDuplicate;
    QAction *dummyAction;
    QAction *actionEraseAll;
    QAction *actionSaveAs;
    QAction *actionShowHide;
    QAction *actionSetPolyhedronA;
    QAction *actionSetPolyhedronB;
    QAction *actionSaveSnapshot;
    QAction *actionSelectAllItems;
    QAction *actionLoadScript;
    QAction *actionPreferences;
    QAction *actionLoadPlugin;
    QAction *actionColorItems;
    QAction *actionAdd_Viewer;
    QAction *action_Rearrange_Viewers;
    QAction *actionSa_ve_Scene_as_Script;
    QAction *action_Save;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *hl;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuOperations;
    QMenu *menuView;
    QMenu *menuDockWindows;
    QStatusBar *statusbar;
    QDockWidget *sceneDockWidget;
    QWidget *dockWidgetContent;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *addButton;
    QToolButton *removeButton;
    QToolButton *duplicateButton;
    QToolButton *upButton;
    QToolButton *downButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *searchEdit;
    QTreeView *sceneView;
    QDockWidget *consoleDockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *consoleTextEdit;
    QDockWidget *infoDockWidget;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *infoLabel;
    QLabel *displayLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1503, 984);
        QIcon icon;
        icon.addFile(QStringLiteral(":/cgal/icons/resources/cgal_logo.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/cgal/icons/plus"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad->setIcon(icon1);
        actionErase = new QAction(MainWindow);
        actionErase->setObjectName(QStringLiteral("actionErase"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/cgal/icons/minus"), QSize(), QIcon::Normal, QIcon::Off);
        actionErase->setIcon(icon2);
        actionDuplicate = new QAction(MainWindow);
        actionDuplicate->setObjectName(QStringLiteral("actionDuplicate"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/cgal/icons/duplicate"), QSize(), QIcon::Normal, QIcon::Off);
        actionDuplicate->setIcon(icon3);
        dummyAction = new QAction(MainWindow);
        dummyAction->setObjectName(QStringLiteral("dummyAction"));
        actionEraseAll = new QAction(MainWindow);
        actionEraseAll->setObjectName(QStringLiteral("actionEraseAll"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        actionShowHide = new QAction(MainWindow);
        actionShowHide->setObjectName(QStringLiteral("actionShowHide"));
        actionSetPolyhedronA = new QAction(MainWindow);
        actionSetPolyhedronA->setObjectName(QStringLiteral("actionSetPolyhedronA"));
        actionSetPolyhedronB = new QAction(MainWindow);
        actionSetPolyhedronB->setObjectName(QStringLiteral("actionSetPolyhedronB"));
        actionSaveSnapshot = new QAction(MainWindow);
        actionSaveSnapshot->setObjectName(QStringLiteral("actionSaveSnapshot"));
        actionSelectAllItems = new QAction(MainWindow);
        actionSelectAllItems->setObjectName(QStringLiteral("actionSelectAllItems"));
        actionLoadScript = new QAction(MainWindow);
        actionLoadScript->setObjectName(QStringLiteral("actionLoadScript"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionLoadPlugin = new QAction(MainWindow);
        actionLoadPlugin->setObjectName(QStringLiteral("actionLoadPlugin"));
        actionColorItems = new QAction(MainWindow);
        actionColorItems->setObjectName(QStringLiteral("actionColorItems"));
        actionAdd_Viewer = new QAction(MainWindow);
        actionAdd_Viewer->setObjectName(QStringLiteral("actionAdd_Viewer"));
        action_Rearrange_Viewers = new QAction(MainWindow);
        action_Rearrange_Viewers->setObjectName(QStringLiteral("action_Rearrange_Viewers"));
        actionSa_ve_Scene_as_Script = new QAction(MainWindow);
        actionSa_ve_Scene_as_Script->setObjectName(QStringLiteral("actionSa_ve_Scene_as_Script"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        hl = new QHBoxLayout();
        hl->setObjectName(QStringLiteral("hl"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mdiArea->sizePolicy().hasHeightForWidth());
        mdiArea->setSizePolicy(sizePolicy);
        mdiArea->setTabPosition(QTabWidget::South);

        hl->addWidget(mdiArea);


        verticalLayout_2->addLayout(hl);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1503, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuOperations = new QMenu(menubar);
        menuOperations->setObjectName(QStringLiteral("menuOperations"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuDockWindows = new QMenu(menuView);
        menuDockWindows->setObjectName(QStringLiteral("menuDockWindows"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        sceneDockWidget = new QDockWidget(MainWindow);
        sceneDockWidget->setObjectName(QStringLiteral("sceneDockWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sceneDockWidget->sizePolicy().hasHeightForWidth());
        sceneDockWidget->setSizePolicy(sizePolicy1);
        sceneDockWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dockWidgetContent = new QWidget();
        dockWidgetContent->setObjectName(QStringLiteral("dockWidgetContent"));
        gridLayout_2 = new QGridLayout(dockWidgetContent);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addButton = new QToolButton(dockWidgetContent);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setIcon(icon1);

        horizontalLayout->addWidget(addButton);

        removeButton = new QToolButton(dockWidgetContent);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setIcon(icon2);

        horizontalLayout->addWidget(removeButton);

        duplicateButton = new QToolButton(dockWidgetContent);
        duplicateButton->setObjectName(QStringLiteral("duplicateButton"));
        duplicateButton->setIcon(icon3);

        horizontalLayout->addWidget(duplicateButton);

        upButton = new QToolButton(dockWidgetContent);
        upButton->setObjectName(QStringLiteral("upButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/cgal/icons/resources/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton->setIcon(icon4);

        horizontalLayout->addWidget(upButton);

        downButton = new QToolButton(dockWidgetContent);
        downButton->setObjectName(QStringLiteral("downButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/cgal/icons/resources/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downButton->setIcon(icon5);

        horizontalLayout->addWidget(downButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchEdit = new QLineEdit(dockWidgetContent);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));

        horizontalLayout->addWidget(searchEdit);


        verticalLayout->addLayout(horizontalLayout);

        sceneView = new QTreeView(dockWidgetContent);
        sceneView->setObjectName(QStringLiteral("sceneView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sceneView->sizePolicy().hasHeightForWidth());
        sceneView->setSizePolicy(sizePolicy2);
        sceneView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        sceneView->setDragDropMode(QAbstractItemView::InternalMove);
        sceneView->setAlternatingRowColors(true);
        sceneView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        sceneView->setSelectionBehavior(QAbstractItemView::SelectRows);
        sceneView->setIndentation(10);

        verticalLayout->addWidget(sceneView);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        sceneDockWidget->setWidget(dockWidgetContent);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), sceneDockWidget);
        consoleDockWidget = new QDockWidget(MainWindow);
        consoleDockWidget->setObjectName(QStringLiteral("consoleDockWidget"));
        consoleDockWidget->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::LeftDockWidgetArea|Qt::TopDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        consoleTextEdit = new QTextEdit(dockWidgetContents);
        consoleTextEdit->setObjectName(QStringLiteral("consoleTextEdit"));
        consoleTextEdit->setReadOnly(true);

        verticalLayout_3->addWidget(consoleTextEdit);

        consoleDockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), consoleDockWidget);
        infoDockWidget = new QDockWidget(MainWindow);
        infoDockWidget->setObjectName(QStringLiteral("infoDockWidget"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        scrollArea = new QScrollArea(dockWidgetContents_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(350, 0));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 843, 176));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        infoLabel = new QLabel(scrollAreaWidgetContents);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(infoLabel->sizePolicy().hasHeightForWidth());
        infoLabel->setSizePolicy(sizePolicy3);
        infoLabel->setContextMenuPolicy(Qt::DefaultContextMenu);
        infoLabel->setLineWidth(0);
        infoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        infoLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(infoLabel, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        displayLabel = new QLabel(dockWidgetContents_2);
        displayLabel->setObjectName(QStringLiteral("displayLabel"));

        verticalLayout_4->addWidget(displayLabel);


        horizontalLayout_2->addLayout(verticalLayout_4);

        infoDockWidget->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), infoDockWidget);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuOperations->menuAction());
        menubar->addAction(menuView->menuAction());
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionErase);
        menuFile->addAction(actionEraseAll);
        menuFile->addAction(actionDuplicate);
        menuFile->addAction(action_Save);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionSa_ve_Scene_as_Script);
        menuFile->addAction(actionSaveSnapshot);
        menuFile->addSeparator();
        menuFile->addAction(actionLoadScript);
        menuFile->addSeparator();
        menuFile->addAction(actionLoadPlugin);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionShowHide);
        menuEdit->addAction(actionSetPolyhedronA);
        menuEdit->addAction(actionSetPolyhedronB);
        menuEdit->addAction(actionSelectAllItems);
        menuEdit->addAction(actionPreferences);
        menuEdit->addAction(actionColorItems);
        menuView->addAction(actionAdd_Viewer);
        menuView->addAction(action_Rearrange_Viewers);
        menuView->addAction(menuDockWindows->menuAction());
        menuView->addSeparator();
        menuDockWindows->addAction(dummyAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CGAL Three", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionLoad->setText(QApplication::translate("MainWindow", "&Load...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionLoad->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionErase->setText(QApplication::translate("MainWindow", "&Erase", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionErase->setShortcut(QApplication::translate("MainWindow", "Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDuplicate->setText(QApplication::translate("MainWindow", "&Duplicate", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionDuplicate->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        dummyAction->setText(QApplication::translate("MainWindow", "n/a", Q_NULLPTR));
        actionEraseAll->setText(QApplication::translate("MainWindow", "&Erase All", Q_NULLPTR));
        actionSaveAs->setText(QApplication::translate("MainWindow", "Save &as...", Q_NULLPTR));
        actionShowHide->setText(QApplication::translate("MainWindow", "Show/Hide", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionShowHide->setShortcut(QApplication::translate("MainWindow", "Ctrl+Space", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetPolyhedronA->setText(QApplication::translate("MainWindow", "Set Facegraph A", Q_NULLPTR));
        actionSetPolyhedronB->setText(QApplication::translate("MainWindow", "Set Facegraph B", Q_NULLPTR));
        actionSaveSnapshot->setText(QApplication::translate("MainWindow", "Save Snapshot", Q_NULLPTR));
        actionSelectAllItems->setText(QApplication::translate("MainWindow", "Select All Items", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSelectAllItems->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionLoadScript->setText(QApplication::translate("MainWindow", "Load &Script", Q_NULLPTR));
        actionPreferences->setText(QApplication::translate("MainWindow", "&Preferences", Q_NULLPTR));
        actionLoadPlugin->setText(QApplication::translate("MainWindow", "Load Plugin", Q_NULLPTR));
        actionColorItems->setText(QApplication::translate("MainWindow", "Set Different Colors for Selected Items", Q_NULLPTR));
        actionAdd_Viewer->setText(QApplication::translate("MainWindow", "Add &Viewer", Q_NULLPTR));
        action_Rearrange_Viewers->setText(QApplication::translate("MainWindow", "&Rearrange Viewers", Q_NULLPTR));
        actionSa_ve_Scene_as_Script->setText(QApplication::translate("MainWindow", "Sa&ve the Scene as a Script File...", Q_NULLPTR));
        action_Save->setText(QApplication::translate("MainWindow", "&Save", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", Q_NULLPTR));
        menuOperations->setTitle(QApplication::translate("MainWindow", "&Operations", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", Q_NULLPTR));
        menuDockWindows->setTitle(QApplication::translate("MainWindow", "&Dock Windows", Q_NULLPTR));
        sceneDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Geometric Objects", Q_NULLPTR));
        addButton->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        removeButton->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        duplicateButton->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        upButton->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        downButton->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        searchEdit->setPlaceholderText(QApplication::translate("MainWindow", "Quick filter... <Alt+Q>", Q_NULLPTR));
        consoleDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Console", Q_NULLPTR));
        infoDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Infos", Q_NULLPTR));
        displayLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

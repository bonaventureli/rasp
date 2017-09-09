/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSettings;
    QAction *actionAbout_B9Creator;
    QAction *actionIndex;
    QAction *actionMaterialsCatalog;
    QAction *actionExit;
    QAction *actionContents;
    QAction *actionContext;
    QAction *actionExit_Open_Log_File;
    QAction *actionB9Creator_Terminal_Utility;
    QAction *actionCheck_For_Updates;
    QAction *actionEdit_Job;
    QAction *action_Printer_Cycle_Settings;
    QAction *action_Layout;
    QAction *action_Slice;
    QAction *action_Print;
    QAction *actionBuild_Table;
    QAction *actionProjector;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QCommandLinkButton *commandLayout;
    QCommandLinkButton *commandSlice;
    QCommandLinkButton *commandPrint;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menuSettings;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(190, 204);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(143, 143, 143, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/B9Edit/icons/editoriconbright.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionAbout_B9Creator = new QAction(MainWindow);
        actionAbout_B9Creator->setObjectName(QStringLiteral("actionAbout_B9Creator"));
        actionIndex = new QAction(MainWindow);
        actionIndex->setObjectName(QStringLiteral("actionIndex"));
        actionMaterialsCatalog = new QAction(MainWindow);
        actionMaterialsCatalog->setObjectName(QStringLiteral("actionMaterialsCatalog"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionContents = new QAction(MainWindow);
        actionContents->setObjectName(QStringLiteral("actionContents"));
        actionContents->setEnabled(false);
        actionContext = new QAction(MainWindow);
        actionContext->setObjectName(QStringLiteral("actionContext"));
        actionExit_Open_Log_File = new QAction(MainWindow);
        actionExit_Open_Log_File->setObjectName(QStringLiteral("actionExit_Open_Log_File"));
        actionB9Creator_Terminal_Utility = new QAction(MainWindow);
        actionB9Creator_Terminal_Utility->setObjectName(QStringLiteral("actionB9Creator_Terminal_Utility"));
        actionB9Creator_Terminal_Utility->setShortcutContext(Qt::WindowShortcut);
        actionB9Creator_Terminal_Utility->setVisible(true);
        //actionB9Creator_Terminal_Utility->setSoftKeyRole(QAction::NoSoftKey);
        actionCheck_For_Updates = new QAction(MainWindow);
        actionCheck_For_Updates->setObjectName(QStringLiteral("actionCheck_For_Updates"));
        actionEdit_Job = new QAction(MainWindow);
        actionEdit_Job->setObjectName(QStringLiteral("actionEdit_Job"));
        action_Printer_Cycle_Settings = new QAction(MainWindow);
        action_Printer_Cycle_Settings->setObjectName(QStringLiteral("action_Printer_Cycle_Settings"));
        action_Layout = new QAction(MainWindow);
        action_Layout->setObjectName(QStringLiteral("action_Layout"));
        action_Slice = new QAction(MainWindow);
        action_Slice->setObjectName(QStringLiteral("action_Slice"));
        action_Print = new QAction(MainWindow);
        action_Print->setObjectName(QStringLiteral("action_Print"));
        actionBuild_Table = new QAction(MainWindow);
        actionBuild_Table->setObjectName(QStringLiteral("actionBuild_Table"));
        actionProjector = new QAction(MainWindow);
        actionProjector->setObjectName(QStringLiteral("actionProjector"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setFocusPolicy(Qt::NoFocus);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        commandLayout = new QCommandLinkButton(centralWidget);
        commandLayout->setObjectName(QStringLiteral("commandLayout"));
        commandLayout->setCheckable(true);

        gridLayout->addWidget(commandLayout, 0, 0, 1, 1);

        commandSlice = new QCommandLinkButton(centralWidget);
        commandSlice->setObjectName(QStringLiteral("commandSlice"));
        commandSlice->setCheckable(true);

        gridLayout->addWidget(commandSlice, 1, 0, 1, 1);

        commandPrint = new QCommandLinkButton(centralWidget);
        commandPrint->setObjectName(QStringLiteral("commandPrint"));
        commandPrint->setCheckable(false);

        gridLayout->addWidget(commandPrint, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QPalette palette1;
        QBrush brush2(QColor(117, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        statusBar->setPalette(palette1);
        QFont font;
        font.setPointSize(9);
        statusBar->setFont(font);
        statusBar->setLayoutDirection(Qt::RightToLeft);
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 190, 21));
        menuBar->setFont(font);
        menuBar->setMouseTracking(true);
        menuBar->setFocusPolicy(Qt::NoFocus);
        menuBar->setAcceptDrops(true);
        menuBar->setStyleSheet(QStringLiteral(""));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(true);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setFocusPolicy(Qt::NoFocus);
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(action_Layout);
        menuFile->addAction(action_Slice);
        menuFile->addAction(actionEdit_Job);
        menuFile->addAction(action_Print);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionB9Creator_Terminal_Utility);
        menuAbout->addAction(actionAbout_B9Creator);
        menuSettings->addAction(actionCheck_For_Updates);
        menuSettings->addSeparator();
        menuSettings->addAction(actionMaterialsCatalog);
        menuSettings->addAction(action_Printer_Cycle_Settings);
        menuSettings->addSeparator();
        menuSettings->addAction(actionBuild_Table);
        menuSettings->addAction(actionProjector);

        retranslateUi(MainWindow);
        QObject::connect(actionExit_Open_Log_File, SIGNAL(triggered()), MainWindow, SLOT(showLogAndExit()));
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionB9Creator_Terminal_Utility, SIGNAL(triggered()), MainWindow, SLOT(showTerminal()));
        QObject::connect(actionContents, SIGNAL(triggered()), MainWindow, SLOT(showHelp()));
        QObject::connect(actionMaterialsCatalog, SIGNAL(triggered()), MainWindow, SLOT(showCatalog()));
        QObject::connect(actionAbout_B9Creator, SIGNAL(triggered()), MainWindow, SLOT(showAbout()));
        QObject::connect(actionCheck_For_Updates, SIGNAL(triggered()), MainWindow, SLOT(CheckForUpdates()));
        QObject::connect(actionEdit_Job, SIGNAL(triggered()), MainWindow, SLOT(showEdit()));
        QObject::connect(action_Printer_Cycle_Settings, SIGNAL(triggered()), MainWindow, SLOT(showPrinterCycles()));
        QObject::connect(action_Layout, SIGNAL(triggered()), MainWindow, SLOT(showLayout()));
        QObject::connect(action_Slice, SIGNAL(triggered()), MainWindow, SLOT(showSlice()));
        QObject::connect(action_Print, SIGNAL(triggered()), MainWindow, SLOT(showPrint()));
        QObject::connect(actionBuild_Table, SIGNAL(triggered()), MainWindow, SLOT(showCalibrateBuildTable()));
        QObject::connect(actionProjector, SIGNAL(triggered()), MainWindow, SLOT(showCalibrateProjector()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "B9Creator", 0));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        MainWindow->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        MainWindow->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        actionSettings->setText(QApplication::translate("MainWindow", "&Settings...", 0));
        actionAbout_B9Creator->setText(QApplication::translate("MainWindow", "&About B9Creator", 0));
        actionIndex->setText(QApplication::translate("MainWindow", "Index", 0));
        actionMaterialsCatalog->setText(QApplication::translate("MainWindow", "&Materials Catalog...", 0));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", 0));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "Exit", 0));
#endif // QT_NO_TOOLTIP
        actionContents->setText(QApplication::translate("MainWindow", "&Contents", 0));
        actionContext->setText(QApplication::translate("MainWindow", "Context", 0));
        actionContext->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        actionExit_Open_Log_File->setText(QApplication::translate("MainWindow", "Exit && Open &Log File", 0));
        actionB9Creator_Terminal_Utility->setText(QApplication::translate("MainWindow", "B9Creator &Terminal Utility...", 0));
#ifndef QT_NO_TOOLTIP
        actionB9Creator_Terminal_Utility->setToolTip(QApplication::translate("MainWindow", "Monitor Serial Communications", 0));
#endif // QT_NO_TOOLTIP
        actionCheck_For_Updates->setText(QApplication::translate("MainWindow", "Check For &Updates", 0));
        actionEdit_Job->setText(QApplication::translate("MainWindow", "&Edit...", 0));
        action_Printer_Cycle_Settings->setText(QApplication::translate("MainWindow", "Printer &Cycle Settings...", 0));
        action_Layout->setText(QApplication::translate("MainWindow", "&Layout...", 0));
        action_Slice->setText(QApplication::translate("MainWindow", "&Slice...", 0));
        action_Print->setText(QApplication::translate("MainWindow", "&Print...", 0));
        actionBuild_Table->setText(QApplication::translate("MainWindow", "Calibrate &Build Table...", 0));
        actionProjector->setText(QApplication::translate("MainWindow", "Calibrate &Projector...", 0));
#ifndef QT_NO_TOOLTIP
        commandLayout->setToolTip(QApplication::translate("MainWindow", "Prepare a Layout containing your 3D Model(s)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        commandLayout->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        commandLayout->setText(QApplication::translate("MainWindow", "Layout", 0));
#ifndef QT_NO_TOOLTIP
        commandSlice->setToolTip(QApplication::translate("MainWindow", "Slice your 3D Layout in preparation for printing", 0));
#endif // QT_NO_TOOLTIP
        commandSlice->setText(QApplication::translate("MainWindow", "Slice", 0));
#ifndef QT_NO_TOOLTIP
        commandPrint->setToolTip(QApplication::translate("MainWindow", "Select your Print Job and begin the printing process.", 0));
#endif // QT_NO_TOOLTIP
        commandPrint->setText(QApplication::translate("MainWindow", "Print", 0));
#ifndef QT_NO_STATUSTIP
        menuBar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "&Help", 0));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

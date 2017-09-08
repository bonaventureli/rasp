/********************************************************************************
** Form generated from reading UI file 'b9edit.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B9EDIT_H
#define UI_B9EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_B9EditClass
{
public:
    QAction *actionOpen_Image_Folder;
    QAction *actionOpen_Exsisting_Job_File;
    QAction *actionSave_To_Job;
    QAction *actionFill;
    QAction *actionFlood_Void;
    QAction *actionShow_Unsupported_Pixels;
    QAction *actionShow_Slice_Window;
    QAction *actionNew_Job;
    QAction *actionSaveAs;
    QAction *actionExport_Slices;
    QAction *actionAbout_B9Edit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QLineEdit *lineEdit_6;
    QLabel *label_5;
    QLineEdit *lineEdit_7;
    QLabel *label_6;
    QLineEdit *lineEdit_8;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *B9EditClass)
    {
        if (B9EditClass->objectName().isEmpty())
            B9EditClass->setObjectName(QStringLiteral("B9EditClass"));
        B9EditClass->setEnabled(true);
        B9EditClass->resize(317, 238);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(B9EditClass->sizePolicy().hasHeightForWidth());
        B9EditClass->setSizePolicy(sizePolicy);
        B9EditClass->setMinimumSize(QSize(0, 238));
        B9EditClass->setMaximumSize(QSize(1000, 238));
        QIcon icon;
        icon.addFile(QStringLiteral(":/B9Edit/icons/editoriconbright.png"), QSize(), QIcon::Normal, QIcon::Off);
        B9EditClass->setWindowIcon(icon);
        B9EditClass->setStyleSheet(QStringLiteral(""));
        B9EditClass->setDocumentMode(false);
        B9EditClass->setTabShape(QTabWidget::Rounded);
        B9EditClass->setUnifiedTitleAndToolBarOnMac(false);
        actionOpen_Image_Folder = new QAction(B9EditClass);
        actionOpen_Image_Folder->setObjectName(QStringLiteral("actionOpen_Image_Folder"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/B9Edit/icons/importslices.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Image_Folder->setIcon(icon1);
        actionOpen_Exsisting_Job_File = new QAction(B9EditClass);
        actionOpen_Exsisting_Job_File->setObjectName(QStringLiteral("actionOpen_Exsisting_Job_File"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/B9Edit/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Exsisting_Job_File->setIcon(icon2);
        actionSave_To_Job = new QAction(B9EditClass);
        actionSave_To_Job->setObjectName(QStringLiteral("actionSave_To_Job"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/B9Edit/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_To_Job->setIcon(icon3);
        actionFill = new QAction(B9EditClass);
        actionFill->setObjectName(QStringLiteral("actionFill"));
        actionFlood_Void = new QAction(B9EditClass);
        actionFlood_Void->setObjectName(QStringLiteral("actionFlood_Void"));
        actionShow_Unsupported_Pixels = new QAction(B9EditClass);
        actionShow_Unsupported_Pixels->setObjectName(QStringLiteral("actionShow_Unsupported_Pixels"));
        actionShow_Slice_Window = new QAction(B9EditClass);
        actionShow_Slice_Window->setObjectName(QStringLiteral("actionShow_Slice_Window"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/B9Edit/icons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_Slice_Window->setIcon(icon4);
        actionNew_Job = new QAction(B9EditClass);
        actionNew_Job->setObjectName(QStringLiteral("actionNew_Job"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/B9Edit/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Job->setIcon(icon5);
        actionSaveAs = new QAction(B9EditClass);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        actionExport_Slices = new QAction(B9EditClass);
        actionExport_Slices->setObjectName(QStringLiteral("actionExport_Slices"));
        actionAbout_B9Edit = new QAction(B9EditClass);
        actionAbout_B9Edit->setObjectName(QStringLiteral("actionAbout_B9Edit"));
        centralWidget = new QWidget(B9EditClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMaximumSize(QSize(16777215, 10000));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 0, 2, 1, 3);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 4);

        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 1, 4, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 4);

        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 2, 4, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 3);

        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 3, 3, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setEnabled(false);
        lineEdit_8->setReadOnly(true);

        gridLayout->addWidget(lineEdit_8, 4, 1, 1, 4);


        verticalLayout->addWidget(groupBox);

        B9EditClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(B9EditClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 317, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        B9EditClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(B9EditClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(16, 16));
        B9EditClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuFile->addAction(actionNew_Job);
        menuFile->addAction(actionOpen_Exsisting_Job_File);
        menuFile->addAction(actionSave_To_Job);
        menuFile->addAction(actionSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen_Image_Folder);
        menuFile->addAction(actionExport_Slices);
        menuView->addAction(actionShow_Slice_Window);

        retranslateUi(B9EditClass);
        QObject::connect(B9EditClass, SIGNAL(setName(QString)), lineEdit_4, SLOT(setText(QString)));
        QObject::connect(B9EditClass, SIGNAL(setDescription(QString)), lineEdit_5, SLOT(setText(QString)));
        QObject::connect(B9EditClass, SIGNAL(setXYPixel(QString)), lineEdit_6, SLOT(setText(QString)));
        QObject::connect(B9EditClass, SIGNAL(setZLayer(QString)), lineEdit_7, SLOT(setText(QString)));
        QObject::connect(lineEdit_4, SIGNAL(textEdited(QString)), B9EditClass, SLOT(updateName(QString)));
        QObject::connect(lineEdit_5, SIGNAL(textEdited(QString)), B9EditClass, SLOT(updateDescription(QString)));
        QObject::connect(lineEdit_6, SIGNAL(textEdited(QString)), B9EditClass, SLOT(updateXY(QString)));
        QObject::connect(lineEdit_7, SIGNAL(textEdited(QString)), B9EditClass, SLOT(updateZ(QString)));
        QObject::connect(actionShow_Slice_Window, SIGNAL(triggered()), B9EditClass, SLOT(ShowSliceWindow()));
        QObject::connect(actionNew_Job, SIGNAL(triggered()), B9EditClass, SLOT(newJob()));
        QObject::connect(actionOpen_Exsisting_Job_File, SIGNAL(triggered()), B9EditClass, SLOT(openJob()));
        QObject::connect(actionSave_To_Job, SIGNAL(triggered()), B9EditClass, SLOT(saveJob()));
        QObject::connect(actionSaveAs, SIGNAL(triggered()), B9EditClass, SLOT(saveJobAs()));
        QObject::connect(actionOpen_Image_Folder, SIGNAL(triggered()), B9EditClass, SLOT(importSlices()));
        QObject::connect(B9EditClass, SIGNAL(setSliceIndicator(QString)), lineEdit_8, SLOT(setText(QString)));
        QObject::connect(actionExport_Slices, SIGNAL(triggered()), B9EditClass, SLOT(ExportToFolder()));
        QObject::connect(actionAbout_B9Edit, SIGNAL(triggered()), B9EditClass, SLOT(ShowAboutBox()));

        QMetaObject::connectSlotsByName(B9EditClass);
    } // setupUi

    void retranslateUi(QMainWindow *B9EditClass)
    {
        B9EditClass->setWindowTitle(QApplication::translate("B9EditClass", "B9Creator - Edit", 0));
        actionOpen_Image_Folder->setText(QApplication::translate("B9EditClass", "&Import Images...", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen_Image_Folder->setToolTip(QApplication::translate("B9EditClass", "Import Slices from a series of images", 0));
#endif // QT_NO_TOOLTIP
        actionOpen_Exsisting_Job_File->setText(QApplication::translate("B9EditClass", "&Open...", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen_Exsisting_Job_File->setToolTip(QApplication::translate("B9EditClass", "Opens an exsisting Job", 0));
#endif // QT_NO_TOOLTIP
        actionOpen_Exsisting_Job_File->setShortcut(QApplication::translate("B9EditClass", "Ctrl+O", 0));
        actionSave_To_Job->setText(QApplication::translate("B9EditClass", "&Save", 0));
#ifndef QT_NO_TOOLTIP
        actionSave_To_Job->setToolTip(QApplication::translate("B9EditClass", "Saves the current Job", 0));
#endif // QT_NO_TOOLTIP
        actionSave_To_Job->setShortcut(QApplication::translate("B9EditClass", "Ctrl+S", 0));
        actionFill->setText(QApplication::translate("B9EditClass", "Flood Fill", 0));
        actionFlood_Void->setText(QApplication::translate("B9EditClass", "Flood Void", 0));
        actionShow_Unsupported_Pixels->setText(QApplication::translate("B9EditClass", "Show Unsupported Pixels", 0));
        actionShow_Slice_Window->setText(QApplication::translate("B9EditClass", "&Slice Manager...", 0));
        actionNew_Job->setText(QApplication::translate("B9EditClass", "&New ", 0));
        actionNew_Job->setIconText(QApplication::translate("B9EditClass", "New", 0));
#ifndef QT_NO_TOOLTIP
        actionNew_Job->setToolTip(QApplication::translate("B9EditClass", "Creates A New Job", 0));
#endif // QT_NO_TOOLTIP
        actionNew_Job->setShortcut(QApplication::translate("B9EditClass", "Ctrl+N", 0));
        actionSaveAs->setText(QApplication::translate("B9EditClass", "Save &As...", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveAs->setToolTip(QApplication::translate("B9EditClass", "Saves the current Job to a new file", 0));
#endif // QT_NO_TOOLTIP
        actionExport_Slices->setText(QApplication::translate("B9EditClass", "&Export Images...", 0));
        actionAbout_B9Edit->setText(QApplication::translate("B9EditClass", "About B9Edit...", 0));
        groupBox->setTitle(QApplication::translate("B9EditClass", "Job Properties", 0));
        label_2->setText(QApplication::translate("B9EditClass", "Job Name:", 0));
        label_3->setText(QApplication::translate("B9EditClass", "Job Description:", 0));
        label_4->setText(QApplication::translate("B9EditClass", "X-Y Pixels (\302\265m):", 0));
        label_5->setText(QApplication::translate("B9EditClass", "Z Layer (\302\265m):", 0));
        label_6->setText(QApplication::translate("B9EditClass", "Slices :", 0));
        menuFile->setTitle(QApplication::translate("B9EditClass", "&File", 0));
        menuView->setTitle(QApplication::translate("B9EditClass", "&View", 0));
    } // retranslateUi

};

namespace Ui {
    class B9EditClass: public Ui_B9EditClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B9EDIT_H

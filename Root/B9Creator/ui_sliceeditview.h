/********************************************************************************
** Form generated from reading UI file 'sliceeditview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLICEEDITVIEW_H
#define UI_SLICEEDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SliceEditViewClass
{
public:
    QAction *actionTools;
    QAction *actionUndo;
    QAction *actionFlood_Fill;
    QAction *actionFlood_Void;
    QAction *actionSetPen;
    QAction *actionWhite_Pen;
    QAction *actionBlack_Pen;
    QAction *actionRedo;
    QAction *actionNext_Slice;
    QAction *actionPrev_Slice;
    QAction *actionBase;
    QAction *actionTop;
    QAction *actionSetColor;
    QAction *actionPrepare_Base_Gap;
    QAction *actionAdd_Supports;
    QAction *actionShow_Unsupported_Pixels;
    QAction *actionSupport_Mode;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCircle;
    QAction *actionSquare;
    QAction *actionTriangle_2;
    QAction *actionSetSupportSize;
    QAction *actionNext;
    QAction *actionDiamond;
    QAction *actionRemove_All_Supports;
    QAction *actionDelete_Support;
    QAction *actionAuto_Support_End;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QMenu *menuPoo;
    QMenu *menuDrawing;
    QMenu *menuSupports;
    QMenu *menuView;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *SliceEditViewClass)
    {
        if (SliceEditViewClass->objectName().isEmpty())
            SliceEditViewClass->setObjectName(QStringLiteral("SliceEditViewClass"));
        SliceEditViewClass->setEnabled(true);
        SliceEditViewClass->resize(275, 291);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SliceEditViewClass->sizePolicy().hasHeightForWidth());
        SliceEditViewClass->setSizePolicy(sizePolicy);
        SliceEditViewClass->setMinimumSize(QSize(275, 291));
        actionTools = new QAction(SliceEditViewClass);
        actionTools->setObjectName(QStringLiteral("actionTools"));
        actionUndo = new QAction(SliceEditViewClass);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionFlood_Fill = new QAction(SliceEditViewClass);
        actionFlood_Fill->setObjectName(QStringLiteral("actionFlood_Fill"));
        actionFlood_Fill->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/icons/bucketwhiteicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFlood_Fill->setIcon(icon);
        actionFlood_Void = new QAction(SliceEditViewClass);
        actionFlood_Void->setObjectName(QStringLiteral("actionFlood_Void"));
        actionFlood_Void->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/icons/bucketblackicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFlood_Void->setIcon(icon1);
        actionSetPen = new QAction(SliceEditViewClass);
        actionSetPen->setObjectName(QStringLiteral("actionSetPen"));
        actionWhite_Pen = new QAction(SliceEditViewClass);
        actionWhite_Pen->setObjectName(QStringLiteral("actionWhite_Pen"));
        actionWhite_Pen->setCheckable(true);
        actionWhite_Pen->setChecked(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icons/icons/penwhiteicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWhite_Pen->setIcon(icon2);
        actionBlack_Pen = new QAction(SliceEditViewClass);
        actionBlack_Pen->setObjectName(QStringLiteral("actionBlack_Pen"));
        actionBlack_Pen->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Icons/icons/penblackicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBlack_Pen->setIcon(icon3);
        actionRedo = new QAction(SliceEditViewClass);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionNext_Slice = new QAction(SliceEditViewClass);
        actionNext_Slice->setObjectName(QStringLiteral("actionNext_Slice"));
        actionNext_Slice->setShortcutContext(Qt::WindowShortcut);
        actionPrev_Slice = new QAction(SliceEditViewClass);
        actionPrev_Slice->setObjectName(QStringLiteral("actionPrev_Slice"));
        actionBase = new QAction(SliceEditViewClass);
        actionBase->setObjectName(QStringLiteral("actionBase"));
        actionTop = new QAction(SliceEditViewClass);
        actionTop->setObjectName(QStringLiteral("actionTop"));
        actionSetColor = new QAction(SliceEditViewClass);
        actionSetColor->setObjectName(QStringLiteral("actionSetColor"));
        actionPrepare_Base_Gap = new QAction(SliceEditViewClass);
        actionPrepare_Base_Gap->setObjectName(QStringLiteral("actionPrepare_Base_Gap"));
        actionAdd_Supports = new QAction(SliceEditViewClass);
        actionAdd_Supports->setObjectName(QStringLiteral("actionAdd_Supports"));
        actionShow_Unsupported_Pixels = new QAction(SliceEditViewClass);
        actionShow_Unsupported_Pixels->setObjectName(QStringLiteral("actionShow_Unsupported_Pixels"));
        actionShow_Unsupported_Pixels->setCheckable(true);
        actionSupport_Mode = new QAction(SliceEditViewClass);
        actionSupport_Mode->setObjectName(QStringLiteral("actionSupport_Mode"));
        actionSupport_Mode->setCheckable(false);
        actionCopy = new QAction(SliceEditViewClass);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(SliceEditViewClass);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionCircle = new QAction(SliceEditViewClass);
        actionCircle->setObjectName(QStringLiteral("actionCircle"));
        actionCircle->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icons/icons/cylindersupporticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircle->setIcon(icon4);
        actionSquare = new QAction(SliceEditViewClass);
        actionSquare->setObjectName(QStringLiteral("actionSquare"));
        actionSquare->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Icons/icons/boxsupporticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSquare->setIcon(icon5);
        actionTriangle_2 = new QAction(SliceEditViewClass);
        actionTriangle_2->setObjectName(QStringLiteral("actionTriangle_2"));
        actionTriangle_2->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Icons/icons/trianglesupporticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTriangle_2->setIcon(icon6);
        actionSetSupportSize = new QAction(SliceEditViewClass);
        actionSetSupportSize->setObjectName(QStringLiteral("actionSetSupportSize"));
        actionNext = new QAction(SliceEditViewClass);
        actionNext->setObjectName(QStringLiteral("actionNext"));
        actionDiamond = new QAction(SliceEditViewClass);
        actionDiamond->setObjectName(QStringLiteral("actionDiamond"));
        actionDiamond->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Icons/icons/diamondsupporticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDiamond->setIcon(icon7);
        actionRemove_All_Supports = new QAction(SliceEditViewClass);
        actionRemove_All_Supports->setObjectName(QStringLiteral("actionRemove_All_Supports"));
        actionDelete_Support = new QAction(SliceEditViewClass);
        actionDelete_Support->setObjectName(QStringLiteral("actionDelete_Support"));
        actionDelete_Support->setEnabled(false);
        actionAuto_Support_End = new QAction(SliceEditViewClass);
        actionAuto_Support_End->setObjectName(QStringLiteral("actionAuto_Support_End"));
        actionAuto_Support_End->setCheckable(true);
        actionAuto_Support_End->setChecked(true);
        centralwidget = new QWidget(SliceEditViewClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setMinimumSize(QSize(35, 0));
        horizontalSlider->setFocusPolicy(Qt::NoFocus);
        horizontalSlider->setOrientation(Qt::Vertical);
        horizontalSlider->setInvertedControls(false);

        verticalLayout->addWidget(horizontalSlider);


        horizontalLayout->addLayout(verticalLayout);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 212, 218));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        SliceEditViewClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SliceEditViewClass);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 275, 21));
        menuPoo = new QMenu(menubar);
        menuPoo->setObjectName(QStringLiteral("menuPoo"));
        menuDrawing = new QMenu(menuPoo);
        menuDrawing->setObjectName(QStringLiteral("menuDrawing"));
        menuSupports = new QMenu(menuPoo);
        menuSupports->setObjectName(QStringLiteral("menuSupports"));
        menuSupports->setMinimumSize(QSize(1, 0));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        SliceEditViewClass->setMenuBar(menubar);
        statusbar = new QStatusBar(SliceEditViewClass);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SliceEditViewClass->setStatusBar(statusbar);
        toolBar = new QToolBar(SliceEditViewClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setIconSize(QSize(16, 16));
        SliceEditViewClass->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuPoo->menuAction());
        menuPoo->addAction(menuDrawing->menuAction());
        menuPoo->addAction(menuSupports->menuAction());
        menuDrawing->addAction(actionFlood_Fill);
        menuDrawing->addAction(actionFlood_Void);
        menuDrawing->addAction(actionWhite_Pen);
        menuDrawing->addAction(actionBlack_Pen);
        menuDrawing->addSeparator();
        menuDrawing->addAction(actionSetPen);
        menuSupports->addAction(actionCircle);
        menuSupports->addAction(actionSquare);
        menuSupports->addAction(actionTriangle_2);
        menuSupports->addAction(actionDiamond);
        menuSupports->addSeparator();
        menuSupports->addAction(actionRemove_All_Supports);
        menuView->addAction(actionNext_Slice);
        menuView->addAction(actionPrev_Slice);
        menuView->addSeparator();
        menuView->addAction(actionBase);
        menuView->addAction(actionTop);
        menuEdit->addAction(actionSupport_Mode);
        menuEdit->addAction(actionPrepare_Base_Gap);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);

        retranslateUi(SliceEditViewClass);
        QObject::connect(actionUndo, SIGNAL(triggered()), SliceEditViewClass, SLOT(Undo()));
        QObject::connect(actionSetPen, SIGNAL(triggered()), SliceEditViewClass, SLOT(SelectPenWidth()));
        QObject::connect(actionSetColor, SIGNAL(triggered()), SliceEditViewClass, SLOT(SelectPenColor()));
        QObject::connect(actionRedo, SIGNAL(triggered()), SliceEditViewClass, SLOT(Redo()));
        QObject::connect(actionPrepare_Base_Gap, SIGNAL(triggered()), SliceEditViewClass, SLOT(PromptBaseOptions()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), SliceEditViewClass, SLOT(GoToSlice(int)));
        QObject::connect(actionSupport_Mode, SIGNAL(triggered()), SliceEditViewClass, SLOT(TogSupportMode()));
        QObject::connect(actionNext_Slice, SIGNAL(triggered()), SliceEditViewClass, SLOT(NextSlice()));
        QObject::connect(actionPrev_Slice, SIGNAL(triggered()), SliceEditViewClass, SLOT(PrevSlice()));
        QObject::connect(actionBase, SIGNAL(triggered()), SliceEditViewClass, SLOT(BaseSlice()));
        QObject::connect(actionTop, SIGNAL(triggered()), SliceEditViewClass, SLOT(TopSlice()));
        QObject::connect(actionCopy, SIGNAL(triggered()), SliceEditViewClass, SLOT(CopyToClipboard()));
        QObject::connect(actionPaste, SIGNAL(triggered()), SliceEditViewClass, SLOT(PasteFromClipboard()));
        QObject::connect(actionRemove_All_Supports, SIGNAL(triggered()), SliceEditViewClass, SLOT(DeleteAllSupports()));

        QMetaObject::connectSlotsByName(SliceEditViewClass);
    } // setupUi

    void retranslateUi(QMainWindow *SliceEditViewClass)
    {
        SliceEditViewClass->setWindowTitle(QApplication::translate("SliceEditViewClass", "Slice Editor", 0));
        actionTools->setText(QApplication::translate("SliceEditViewClass", "Tools", 0));
        actionUndo->setText(QApplication::translate("SliceEditViewClass", "&Undo", 0));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("SliceEditViewClass", "reverses the flow of the space-time continuum", 0));
#endif // QT_NO_TOOLTIP
        actionUndo->setShortcut(QApplication::translate("SliceEditViewClass", "Ctrl+Z", 0));
        actionFlood_Fill->setText(QApplication::translate("SliceEditViewClass", "Flood Fill", 0));
        actionFlood_Void->setText(QApplication::translate("SliceEditViewClass", "Flood Void", 0));
        actionSetPen->setText(QApplication::translate("SliceEditViewClass", "SetPenWidth...", 0));
        actionWhite_Pen->setText(QApplication::translate("SliceEditViewClass", "White Pen", 0));
        actionBlack_Pen->setText(QApplication::translate("SliceEditViewClass", "Black Pen", 0));
        actionRedo->setText(QApplication::translate("SliceEditViewClass", "&Redo", 0));
        actionRedo->setShortcut(QApplication::translate("SliceEditViewClass", "Ctrl+Y", 0));
        actionNext_Slice->setText(QApplication::translate("SliceEditViewClass", "&Next", 0));
        actionNext_Slice->setShortcut(QApplication::translate("SliceEditViewClass", "Up", 0));
        actionPrev_Slice->setText(QApplication::translate("SliceEditViewClass", "&Prev", 0));
        actionPrev_Slice->setShortcut(QApplication::translate("SliceEditViewClass", "Down", 0));
        actionBase->setText(QApplication::translate("SliceEditViewClass", "&Base", 0));
        actionBase->setShortcut(QApplication::translate("SliceEditViewClass", "Home", 0));
        actionTop->setText(QApplication::translate("SliceEditViewClass", "&Top", 0));
        actionTop->setShortcut(QApplication::translate("SliceEditViewClass", "End", 0));
        actionSetColor->setText(QApplication::translate("SliceEditViewClass", "SetColor", 0));
        actionPrepare_Base_Gap->setText(QApplication::translate("SliceEditViewClass", "Attachment Offset...", 0));
        actionPrepare_Base_Gap->setShortcut(QApplication::translate("SliceEditViewClass", "O", 0));
        actionAdd_Supports->setText(QApplication::translate("SliceEditViewClass", "Add Supports", 0));
        actionShow_Unsupported_Pixels->setText(QApplication::translate("SliceEditViewClass", "Show Unsupported Pixels", 0));
        actionShow_Unsupported_Pixels->setShortcut(QApplication::translate("SliceEditViewClass", "P", 0));
        actionSupport_Mode->setText(QApplication::translate("SliceEditViewClass", "Enter Support Mode", 0));
        actionSupport_Mode->setShortcut(QApplication::translate("SliceEditViewClass", "M", 0));
        actionCopy->setText(QApplication::translate("SliceEditViewClass", "&Copy", 0));
        actionCopy->setShortcut(QApplication::translate("SliceEditViewClass", "Ctrl+C", 0));
        actionPaste->setText(QApplication::translate("SliceEditViewClass", "&Paste", 0));
        actionPaste->setShortcut(QApplication::translate("SliceEditViewClass", "Ctrl+V", 0));
        actionCircle->setText(QApplication::translate("SliceEditViewClass", "Circle", 0));
        actionSquare->setText(QApplication::translate("SliceEditViewClass", "Square", 0));
        actionTriangle_2->setText(QApplication::translate("SliceEditViewClass", "Triangle", 0));
        actionSetSupportSize->setText(QApplication::translate("SliceEditViewClass", "SetSupportSize...", 0));
        actionNext->setText(QApplication::translate("SliceEditViewClass", "next", 0));
        actionNext->setShortcut(QApplication::translate("SliceEditViewClass", "Up", 0));
        actionDiamond->setText(QApplication::translate("SliceEditViewClass", "Diamond", 0));
        actionRemove_All_Supports->setText(QApplication::translate("SliceEditViewClass", "Remove All Supports", 0));
        actionRemove_All_Supports->setShortcut(QApplication::translate("SliceEditViewClass", "Ctrl+Del", 0));
        actionDelete_Support->setText(QApplication::translate("SliceEditViewClass", "Delete Support", 0));
        actionDelete_Support->setShortcut(QApplication::translate("SliceEditViewClass", "Del", 0));
        actionAuto_Support_End->setText(QApplication::translate("SliceEditViewClass", "Auto Support End", 0));
#ifndef QT_NO_TOOLTIP
        horizontalSlider->setToolTip(QApplication::translate("SliceEditViewClass", "Select Layer", 0));
#endif // QT_NO_TOOLTIP
        menuPoo->setTitle(QApplication::translate("SliceEditViewClass", "&Tools", 0));
        menuDrawing->setTitle(QApplication::translate("SliceEditViewClass", "Drawing", 0));
        menuSupports->setTitle(QApplication::translate("SliceEditViewClass", "&&Supports", 0));
        menuView->setTitle(QApplication::translate("SliceEditViewClass", "&View", 0));
        menuEdit->setTitle(QApplication::translate("SliceEditViewClass", "&Edit", 0));
        toolBar->setWindowTitle(QApplication::translate("SliceEditViewClass", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class SliceEditViewClass: public Ui_SliceEditViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLICEEDITVIEW_H

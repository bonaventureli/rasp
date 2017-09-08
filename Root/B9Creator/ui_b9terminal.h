/********************************************************************************
** Form generated from reading UI file 'b9terminal.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B9TERMINAL_H
#define UI_B9TERMINAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_B9Terminal
{
public:
    QGridLayout *gridLayout_10;
    QLabel *label_10;
    QLineEdit *commStatus;
    QGroupBox *groupBoxMain;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxPrinterInfo;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QLineEdit *lineEditModelInfo;
    QLabel *label_9;
    QLineEdit *lineEditFirmVersion;
    QLabel *label_5;
    QLineEdit *lineEditPUinMicrons;
    QGroupBox *groupBoxZLimits;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLineEdit *lineEditUpperZLimPU;
    QLabel *label_11;
    QLineEdit *lineEditUpperZLimMM;
    QLabel *label_12;
    QLineEdit *lineEditUpperZLimInches;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_11;
    QLabel *label_32;
    QLineEdit *lineEditHalfLife;
    QLabel *label_29;
    QLineEdit *lineEditNativeX;
    QLabel *label_30;
    QLineEdit *lineEditNativeY;
    QLabel *label_31;
    QComboBox *comboBoxXPPixelSize;
    QPushButton *pushButtonModMatCat;
    QPushButton *pushButtonFirmwareReset;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_13;
    QLabel *label_27;
    QLineEdit *lineEditNeedsInit;
    QLabel *label_26;
    QLineEdit *lineEditZDiff;
    QPushButton *pushButtonCmdReset;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_9;
    QPushButton *pushButtonCycleSettings;
    QGroupBox *groupBoxZPosition_2;
    QGridLayout *gridLayout_8;
    QPushButton *pushButtonPrintBase;
    QPushButton *pushButtonPrintNext;
    QPushButton *pushButtonPrintFinal;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QLabel *label_22;
    QLineEdit *lineEditTgtZPU;
    QLabel *label_23;
    QLineEdit *lineEditTgtZMM;
    QLabel *label_24;
    QLineEdit *lineEditTgtZInches;
    QLineEdit *lineEditCycleStatus;
    QLabel *label_28;
    QGroupBox *groupBoxProjector;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *pushButtonProjPower;
    QLabel *label_3;
    QLineEdit *lineEditProjState;
    QLabel *label;
    QLineEdit *lineEditLampHrs;
    QGroupBox *groupBoxZPosition;
    QGridLayout *gridLayout_5;
    QLabel *label_13;
    QLineEdit *lineEditCurZPosInPU;
    QLabel *label_14;
    QLineEdit *lineEditCurZPosInMM;
    QLabel *label_15;
    QLineEdit *lineEditCurZPosInInches;
    QGroupBox *groupBoxVAT;
    QGridLayout *gridLayout1;
    QLabel *label_7;
    QPushButton *pushButtonVOpen;
    QPushButton *pushButtonVClose;
    QSpinBox *spinBoxVatPercentOpen;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QPushButton *pushButtonStop;
    QTextEdit *textEditCommOut;
    QLabel *label_25;
    QLineEdit *lineEditCommand;
    QCheckBox *checkBoxVerbose;

    void setupUi(QWidget *B9Terminal)
    {
        if (B9Terminal->objectName().isEmpty())
            B9Terminal->setObjectName(QStringLiteral("B9Terminal"));
        B9Terminal->resize(607, 596);
        gridLayout_10 = new QGridLayout(B9Terminal);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_10 = new QLabel(B9Terminal);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_10->addWidget(label_10, 0, 0, 1, 1);

        commStatus = new QLineEdit(B9Terminal);
        commStatus->setObjectName(QStringLiteral("commStatus"));
        commStatus->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(195, 195, 195, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush3(QColor(240, 240, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        commStatus->setPalette(palette);
        commStatus->setReadOnly(true);

        gridLayout_10->addWidget(commStatus, 0, 1, 1, 1);

        groupBoxMain = new QGroupBox(B9Terminal);
        groupBoxMain->setObjectName(QStringLiteral("groupBoxMain"));
        gridLayout_2 = new QGridLayout(groupBoxMain);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBoxPrinterInfo = new QGroupBox(groupBoxMain);
        groupBoxPrinterInfo->setObjectName(QStringLiteral("groupBoxPrinterInfo"));
        groupBoxPrinterInfo->setEnabled(true);
        gridLayout_4 = new QGridLayout(groupBoxPrinterInfo);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_8 = new QLabel(groupBoxPrinterInfo);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        lineEditModelInfo = new QLineEdit(groupBoxPrinterInfo);
        lineEditModelInfo->setObjectName(QStringLiteral("lineEditModelInfo"));
        lineEditModelInfo->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditModelInfo->sizePolicy().hasHeightForWidth());
        lineEditModelInfo->setSizePolicy(sizePolicy);
        lineEditModelInfo->setMinimumSize(QSize(65, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditModelInfo->setPalette(palette1);
        lineEditModelInfo->setReadOnly(true);

        gridLayout_4->addWidget(lineEditModelInfo, 0, 1, 1, 1);

        label_9 = new QLabel(groupBoxPrinterInfo);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        lineEditFirmVersion = new QLineEdit(groupBoxPrinterInfo);
        lineEditFirmVersion->setObjectName(QStringLiteral("lineEditFirmVersion"));
        lineEditFirmVersion->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEditFirmVersion->sizePolicy().hasHeightForWidth());
        lineEditFirmVersion->setSizePolicy(sizePolicy);
        lineEditFirmVersion->setMinimumSize(QSize(65, 0));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditFirmVersion->setPalette(palette2);
        lineEditFirmVersion->setReadOnly(true);

        gridLayout_4->addWidget(lineEditFirmVersion, 1, 1, 1, 1);

        label_5 = new QLabel(groupBoxPrinterInfo);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 2, 0, 1, 1);

        lineEditPUinMicrons = new QLineEdit(groupBoxPrinterInfo);
        lineEditPUinMicrons->setObjectName(QStringLiteral("lineEditPUinMicrons"));
        lineEditPUinMicrons->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEditPUinMicrons->sizePolicy().hasHeightForWidth());
        lineEditPUinMicrons->setSizePolicy(sizePolicy);
        lineEditPUinMicrons->setMinimumSize(QSize(65, 0));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditPUinMicrons->setPalette(palette3);
        lineEditPUinMicrons->setReadOnly(true);

        gridLayout_4->addWidget(lineEditPUinMicrons, 2, 1, 1, 1);

        groupBoxZLimits = new QGroupBox(groupBoxPrinterInfo);
        groupBoxZLimits->setObjectName(QStringLiteral("groupBoxZLimits"));
        gridLayout_3 = new QGridLayout(groupBoxZLimits);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_6 = new QLabel(groupBoxZLimits);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        lineEditUpperZLimPU = new QLineEdit(groupBoxZLimits);
        lineEditUpperZLimPU->setObjectName(QStringLiteral("lineEditUpperZLimPU"));
        lineEditUpperZLimPU->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEditUpperZLimPU->sizePolicy().hasHeightForWidth());
        lineEditUpperZLimPU->setSizePolicy(sizePolicy);
        lineEditUpperZLimPU->setMinimumSize(QSize(65, 0));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditUpperZLimPU->setPalette(palette4);
        lineEditUpperZLimPU->setReadOnly(true);

        gridLayout_3->addWidget(lineEditUpperZLimPU, 0, 1, 1, 1);

        label_11 = new QLabel(groupBoxZLimits);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        lineEditUpperZLimMM = new QLineEdit(groupBoxZLimits);
        lineEditUpperZLimMM->setObjectName(QStringLiteral("lineEditUpperZLimMM"));
        lineEditUpperZLimMM->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEditUpperZLimMM->sizePolicy().hasHeightForWidth());
        lineEditUpperZLimMM->setSizePolicy(sizePolicy);
        lineEditUpperZLimMM->setMinimumSize(QSize(65, 0));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditUpperZLimMM->setPalette(palette5);
        lineEditUpperZLimMM->setReadOnly(true);

        gridLayout_3->addWidget(lineEditUpperZLimMM, 1, 1, 1, 1);

        label_12 = new QLabel(groupBoxZLimits);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 2, 0, 1, 1);

        lineEditUpperZLimInches = new QLineEdit(groupBoxZLimits);
        lineEditUpperZLimInches->setObjectName(QStringLiteral("lineEditUpperZLimInches"));
        lineEditUpperZLimInches->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEditUpperZLimInches->sizePolicy().hasHeightForWidth());
        lineEditUpperZLimInches->setSizePolicy(sizePolicy);
        lineEditUpperZLimInches->setMinimumSize(QSize(65, 0));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditUpperZLimInches->setPalette(palette6);
        lineEditUpperZLimInches->setReadOnly(true);

        gridLayout_3->addWidget(lineEditUpperZLimInches, 2, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxZLimits, 4, 0, 1, 2);

        groupBox_7 = new QGroupBox(groupBoxPrinterInfo);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_11 = new QGridLayout(groupBox_7);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_32 = new QLabel(groupBox_7);
        label_32->setObjectName(QStringLiteral("label_32"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(label_32, 0, 0, 1, 1);

        lineEditHalfLife = new QLineEdit(groupBox_7);
        lineEditHalfLife->setObjectName(QStringLiteral("lineEditHalfLife"));
        lineEditHalfLife->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEditHalfLife->sizePolicy().hasHeightForWidth());
        lineEditHalfLife->setSizePolicy(sizePolicy);
        lineEditHalfLife->setMinimumSize(QSize(65, 0));
        lineEditHalfLife->setMaximumSize(QSize(40, 16777215));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditHalfLife->setPalette(palette7);
        lineEditHalfLife->setReadOnly(true);

        gridLayout_11->addWidget(lineEditHalfLife, 0, 1, 1, 1);

        label_29 = new QLabel(groupBox_7);
        label_29->setObjectName(QStringLiteral("label_29"));
        sizePolicy1.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(label_29, 1, 0, 1, 1);

        lineEditNativeX = new QLineEdit(groupBox_7);
        lineEditNativeX->setObjectName(QStringLiteral("lineEditNativeX"));
        lineEditNativeX->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEditNativeX->sizePolicy().hasHeightForWidth());
        lineEditNativeX->setSizePolicy(sizePolicy);
        lineEditNativeX->setMinimumSize(QSize(65, 0));
        lineEditNativeX->setMaximumSize(QSize(40, 16777215));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditNativeX->setPalette(palette8);
        lineEditNativeX->setReadOnly(true);

        gridLayout_11->addWidget(lineEditNativeX, 1, 1, 1, 1);

        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QStringLiteral("label_30"));
        sizePolicy1.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(label_30, 2, 0, 1, 1);

        lineEditNativeY = new QLineEdit(groupBox_7);
        lineEditNativeY->setObjectName(QStringLiteral("lineEditNativeY"));
        lineEditNativeY->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEditNativeY->sizePolicy().hasHeightForWidth());
        lineEditNativeY->setSizePolicy(sizePolicy);
        lineEditNativeY->setMinimumSize(QSize(65, 0));
        lineEditNativeY->setMaximumSize(QSize(40, 16777215));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditNativeY->setPalette(palette9);
        lineEditNativeY->setReadOnly(true);

        gridLayout_11->addWidget(lineEditNativeY, 2, 1, 1, 1);

        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName(QStringLiteral("label_31"));
        sizePolicy1.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy1);

        gridLayout_11->addWidget(label_31, 3, 0, 1, 1);

        comboBoxXPPixelSize = new QComboBox(groupBox_7);
        comboBoxXPPixelSize->setObjectName(QStringLiteral("comboBoxXPPixelSize"));

        gridLayout_11->addWidget(comboBoxXPPixelSize, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_7, 5, 0, 1, 2);

        pushButtonModMatCat = new QPushButton(groupBoxPrinterInfo);
        pushButtonModMatCat->setObjectName(QStringLiteral("pushButtonModMatCat"));

        gridLayout_4->addWidget(pushButtonModMatCat, 3, 0, 1, 2);

        pushButtonFirmwareReset = new QPushButton(groupBoxPrinterInfo);
        pushButtonFirmwareReset->setObjectName(QStringLiteral("pushButtonFirmwareReset"));

        gridLayout_4->addWidget(pushButtonFirmwareReset, 6, 0, 1, 2);


        gridLayout_2->addWidget(groupBoxPrinterInfo, 0, 0, 4, 1);

        groupBox_6 = new QGroupBox(groupBoxMain);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_13 = new QGridLayout(groupBox_6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_27 = new QLabel(groupBox_6);
        label_27->setObjectName(QStringLiteral("label_27"));
        sizePolicy1.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy1);

        gridLayout_13->addWidget(label_27, 0, 0, 1, 1);

        lineEditNeedsInit = new QLineEdit(groupBox_6);
        lineEditNeedsInit->setObjectName(QStringLiteral("lineEditNeedsInit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditNeedsInit->sizePolicy().hasHeightForWidth());
        lineEditNeedsInit->setSizePolicy(sizePolicy2);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditNeedsInit->setPalette(palette10);
        lineEditNeedsInit->setReadOnly(true);

        gridLayout_13->addWidget(lineEditNeedsInit, 0, 1, 1, 1);

        label_26 = new QLabel(groupBox_6);
        label_26->setObjectName(QStringLiteral("label_26"));
        sizePolicy1.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy1);

        gridLayout_13->addWidget(label_26, 2, 0, 1, 1);

        lineEditZDiff = new QLineEdit(groupBox_6);
        lineEditZDiff->setObjectName(QStringLiteral("lineEditZDiff"));
        sizePolicy2.setHeightForWidth(lineEditZDiff->sizePolicy().hasHeightForWidth());
        lineEditZDiff->setSizePolicy(sizePolicy2);
        lineEditZDiff->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditZDiff->setPalette(palette11);
        lineEditZDiff->setReadOnly(true);

        gridLayout_13->addWidget(lineEditZDiff, 2, 1, 1, 1);

        pushButtonCmdReset = new QPushButton(groupBox_6);
        pushButtonCmdReset->setObjectName(QStringLiteral("pushButtonCmdReset"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonCmdReset->sizePolicy().hasHeightForWidth());
        pushButtonCmdReset->setSizePolicy(sizePolicy3);

        gridLayout_13->addWidget(pushButtonCmdReset, 1, 0, 1, 2);


        gridLayout_2->addWidget(groupBox_6, 0, 1, 1, 1);

        groupBox_4 = new QGroupBox(groupBoxMain);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_9 = new QGridLayout(groupBox_4);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        pushButtonCycleSettings = new QPushButton(groupBox_4);
        pushButtonCycleSettings->setObjectName(QStringLiteral("pushButtonCycleSettings"));

        gridLayout_9->addWidget(pushButtonCycleSettings, 0, 0, 1, 1);

        groupBoxZPosition_2 = new QGroupBox(groupBox_4);
        groupBoxZPosition_2->setObjectName(QStringLiteral("groupBoxZPosition_2"));
        gridLayout_8 = new QGridLayout(groupBoxZPosition_2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        pushButtonPrintBase = new QPushButton(groupBoxZPosition_2);
        pushButtonPrintBase->setObjectName(QStringLiteral("pushButtonPrintBase"));

        gridLayout_8->addWidget(pushButtonPrintBase, 5, 1, 1, 1);

        pushButtonPrintNext = new QPushButton(groupBoxZPosition_2);
        pushButtonPrintNext->setObjectName(QStringLiteral("pushButtonPrintNext"));

        gridLayout_8->addWidget(pushButtonPrintNext, 6, 1, 1, 1);

        pushButtonPrintFinal = new QPushButton(groupBoxZPosition_2);
        pushButtonPrintFinal->setObjectName(QStringLiteral("pushButtonPrintFinal"));

        gridLayout_8->addWidget(pushButtonPrintFinal, 7, 1, 1, 1);

        groupBox_3 = new QGroupBox(groupBoxZPosition_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_7->addWidget(label_22, 0, 0, 1, 1);

        lineEditTgtZPU = new QLineEdit(groupBox_3);
        lineEditTgtZPU->setObjectName(QStringLiteral("lineEditTgtZPU"));
        sizePolicy.setHeightForWidth(lineEditTgtZPU->sizePolicy().hasHeightForWidth());
        lineEditTgtZPU->setSizePolicy(sizePolicy);
        lineEditTgtZPU->setMinimumSize(QSize(65, 0));
        lineEditTgtZPU->setReadOnly(false);

        gridLayout_7->addWidget(lineEditTgtZPU, 0, 1, 1, 1);

        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_7->addWidget(label_23, 1, 0, 1, 1);

        lineEditTgtZMM = new QLineEdit(groupBox_3);
        lineEditTgtZMM->setObjectName(QStringLiteral("lineEditTgtZMM"));
        sizePolicy.setHeightForWidth(lineEditTgtZMM->sizePolicy().hasHeightForWidth());
        lineEditTgtZMM->setSizePolicy(sizePolicy);
        lineEditTgtZMM->setMinimumSize(QSize(65, 0));
        lineEditTgtZMM->setReadOnly(false);

        gridLayout_7->addWidget(lineEditTgtZMM, 1, 1, 1, 1);

        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_7->addWidget(label_24, 2, 0, 1, 1);

        lineEditTgtZInches = new QLineEdit(groupBox_3);
        lineEditTgtZInches->setObjectName(QStringLiteral("lineEditTgtZInches"));
        sizePolicy.setHeightForWidth(lineEditTgtZInches->sizePolicy().hasHeightForWidth());
        lineEditTgtZInches->setSizePolicy(sizePolicy);
        lineEditTgtZInches->setMinimumSize(QSize(65, 0));
        lineEditTgtZInches->setReadOnly(false);

        gridLayout_7->addWidget(lineEditTgtZInches, 2, 1, 1, 1);


        gridLayout_8->addWidget(groupBox_3, 0, 1, 1, 1);

        lineEditCycleStatus = new QLineEdit(groupBoxZPosition_2);
        lineEditCycleStatus->setObjectName(QStringLiteral("lineEditCycleStatus"));
        sizePolicy.setHeightForWidth(lineEditCycleStatus->sizePolicy().hasHeightForWidth());
        lineEditCycleStatus->setSizePolicy(sizePolicy);
        lineEditCycleStatus->setMinimumSize(QSize(65, 0));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditCycleStatus->setPalette(palette12);
        lineEditCycleStatus->setReadOnly(true);

        gridLayout_8->addWidget(lineEditCycleStatus, 3, 1, 1, 1);

        label_28 = new QLabel(groupBoxZPosition_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        sizePolicy2.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy2);

        gridLayout_8->addWidget(label_28, 2, 1, 1, 1);


        gridLayout_9->addWidget(groupBoxZPosition_2, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_4, 0, 2, 4, 1);

        groupBoxProjector = new QGroupBox(groupBoxMain);
        groupBoxProjector->setObjectName(QStringLiteral("groupBoxProjector"));
        gridLayout = new QGridLayout(groupBoxProjector);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBoxProjector);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        pushButtonProjPower = new QPushButton(groupBoxProjector);
        pushButtonProjPower->setObjectName(QStringLiteral("pushButtonProjPower"));
        pushButtonProjPower->setCheckable(true);
        pushButtonProjPower->setChecked(false);
        pushButtonProjPower->setFlat(false);

        gridLayout->addWidget(pushButtonProjPower, 0, 1, 1, 1);

        label_3 = new QLabel(groupBoxProjector);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEditProjState = new QLineEdit(groupBoxProjector);
        lineEditProjState->setObjectName(QStringLiteral("lineEditProjState"));
        lineEditProjState->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEditProjState->sizePolicy().hasHeightForWidth());
        lineEditProjState->setSizePolicy(sizePolicy);
        lineEditProjState->setMinimumSize(QSize(65, 0));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditProjState->setPalette(palette13);
        lineEditProjState->setReadOnly(true);

        gridLayout->addWidget(lineEditProjState, 1, 1, 1, 1);

        label = new QLabel(groupBoxProjector);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEditLampHrs = new QLineEdit(groupBoxProjector);
        lineEditLampHrs->setObjectName(QStringLiteral("lineEditLampHrs"));
        lineEditLampHrs->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEditLampHrs->sizePolicy().hasHeightForWidth());
        lineEditLampHrs->setSizePolicy(sizePolicy);
        lineEditLampHrs->setMinimumSize(QSize(65, 0));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditLampHrs->setPalette(palette14);
        lineEditLampHrs->setReadOnly(true);

        gridLayout->addWidget(lineEditLampHrs, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBoxProjector, 1, 1, 1, 1);

        groupBoxZPosition = new QGroupBox(groupBoxMain);
        groupBoxZPosition->setObjectName(QStringLiteral("groupBoxZPosition"));
        gridLayout_5 = new QGridLayout(groupBoxZPosition);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_13 = new QLabel(groupBoxZPosition);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_5->addWidget(label_13, 0, 0, 1, 1);

        lineEditCurZPosInPU = new QLineEdit(groupBoxZPosition);
        lineEditCurZPosInPU->setObjectName(QStringLiteral("lineEditCurZPosInPU"));
        sizePolicy.setHeightForWidth(lineEditCurZPosInPU->sizePolicy().hasHeightForWidth());
        lineEditCurZPosInPU->setSizePolicy(sizePolicy);
        lineEditCurZPosInPU->setMinimumSize(QSize(65, 0));
        lineEditCurZPosInPU->setReadOnly(false);

        gridLayout_5->addWidget(lineEditCurZPosInPU, 0, 1, 1, 1);

        label_14 = new QLabel(groupBoxZPosition);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_5->addWidget(label_14, 1, 0, 1, 1);

        lineEditCurZPosInMM = new QLineEdit(groupBoxZPosition);
        lineEditCurZPosInMM->setObjectName(QStringLiteral("lineEditCurZPosInMM"));
        sizePolicy.setHeightForWidth(lineEditCurZPosInMM->sizePolicy().hasHeightForWidth());
        lineEditCurZPosInMM->setSizePolicy(sizePolicy);
        lineEditCurZPosInMM->setMinimumSize(QSize(65, 0));
        lineEditCurZPosInMM->setReadOnly(false);

        gridLayout_5->addWidget(lineEditCurZPosInMM, 1, 1, 1, 1);

        label_15 = new QLabel(groupBoxZPosition);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_5->addWidget(label_15, 2, 0, 1, 1);

        lineEditCurZPosInInches = new QLineEdit(groupBoxZPosition);
        lineEditCurZPosInInches->setObjectName(QStringLiteral("lineEditCurZPosInInches"));
        sizePolicy.setHeightForWidth(lineEditCurZPosInInches->sizePolicy().hasHeightForWidth());
        lineEditCurZPosInInches->setSizePolicy(sizePolicy);
        lineEditCurZPosInInches->setMinimumSize(QSize(65, 0));
        lineEditCurZPosInInches->setReadOnly(false);

        gridLayout_5->addWidget(lineEditCurZPosInInches, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBoxZPosition, 2, 1, 1, 1);

        groupBoxVAT = new QGroupBox(groupBoxMain);
        groupBoxVAT->setObjectName(QStringLiteral("groupBoxVAT"));
        gridLayout1 = new QGridLayout(groupBoxVAT);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label_7 = new QLabel(groupBoxVAT);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout1->addWidget(label_7, 0, 0, 1, 1);

        pushButtonVOpen = new QPushButton(groupBoxVAT);
        pushButtonVOpen->setObjectName(QStringLiteral("pushButtonVOpen"));

        gridLayout1->addWidget(pushButtonVOpen, 2, 0, 1, 1);

        pushButtonVClose = new QPushButton(groupBoxVAT);
        pushButtonVClose->setObjectName(QStringLiteral("pushButtonVClose"));

        gridLayout1->addWidget(pushButtonVClose, 2, 1, 1, 1);

        spinBoxVatPercentOpen = new QSpinBox(groupBoxVAT);
        spinBoxVatPercentOpen->setObjectName(QStringLiteral("spinBoxVatPercentOpen"));
        spinBoxVatPercentOpen->setMaximum(125);
        spinBoxVatPercentOpen->setSingleStep(5);

        gridLayout1->addWidget(spinBoxVatPercentOpen, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBoxVAT, 3, 1, 1, 1);

        groupBox_5 = new QGroupBox(groupBoxMain);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButtonStop = new QPushButton(groupBox_5);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));
        pushButtonStop->setEnabled(true);

        gridLayout_6->addWidget(pushButtonStop, 0, 0, 1, 2);

        textEditCommOut = new QTextEdit(groupBox_5);
        textEditCommOut->setObjectName(QStringLiteral("textEditCommOut"));
        textEditCommOut->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(textEditCommOut->sizePolicy().hasHeightForWidth());
        textEditCommOut->setSizePolicy(sizePolicy4);
        textEditCommOut->setMinimumSize(QSize(65, 0));
        textEditCommOut->setReadOnly(true);

        gridLayout_6->addWidget(textEditCommOut, 0, 2, 3, 1);

        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy5);

        gridLayout_6->addWidget(label_25, 1, 0, 1, 1);

        lineEditCommand = new QLineEdit(groupBox_5);
        lineEditCommand->setObjectName(QStringLiteral("lineEditCommand"));
        sizePolicy2.setHeightForWidth(lineEditCommand->sizePolicy().hasHeightForWidth());
        lineEditCommand->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(lineEditCommand, 1, 1, 1, 1);

        checkBoxVerbose = new QCheckBox(groupBox_5);
        checkBoxVerbose->setObjectName(QStringLiteral("checkBoxVerbose"));
        sizePolicy2.setHeightForWidth(checkBoxVerbose->sizePolicy().hasHeightForWidth());
        checkBoxVerbose->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(checkBoxVerbose, 2, 0, 1, 2);


        gridLayout_2->addWidget(groupBox_5, 4, 0, 1, 3);


        gridLayout_10->addWidget(groupBoxMain, 1, 0, 1, 2);

        QWidget::setTabOrder(commStatus, lineEditModelInfo);
        QWidget::setTabOrder(lineEditModelInfo, lineEditFirmVersion);
        QWidget::setTabOrder(lineEditFirmVersion, lineEditPUinMicrons);
        QWidget::setTabOrder(lineEditPUinMicrons, pushButtonModMatCat);
        QWidget::setTabOrder(pushButtonModMatCat, lineEditUpperZLimPU);
        QWidget::setTabOrder(lineEditUpperZLimPU, lineEditUpperZLimMM);
        QWidget::setTabOrder(lineEditUpperZLimMM, lineEditUpperZLimInches);
        QWidget::setTabOrder(lineEditUpperZLimInches, lineEditHalfLife);
        QWidget::setTabOrder(lineEditHalfLife, lineEditNativeX);
        QWidget::setTabOrder(lineEditNativeX, lineEditNativeY);
        QWidget::setTabOrder(lineEditNativeY, comboBoxXPPixelSize);
        QWidget::setTabOrder(comboBoxXPPixelSize, lineEditNeedsInit);
        QWidget::setTabOrder(lineEditNeedsInit, pushButtonCmdReset);
        QWidget::setTabOrder(pushButtonCmdReset, lineEditZDiff);
        QWidget::setTabOrder(lineEditZDiff, pushButtonProjPower);
        QWidget::setTabOrder(pushButtonProjPower, lineEditProjState);
        QWidget::setTabOrder(lineEditProjState, lineEditLampHrs);
        QWidget::setTabOrder(lineEditLampHrs, lineEditCurZPosInPU);
        QWidget::setTabOrder(lineEditCurZPosInPU, lineEditCurZPosInMM);
        QWidget::setTabOrder(lineEditCurZPosInMM, lineEditCurZPosInInches);
        QWidget::setTabOrder(lineEditCurZPosInInches, spinBoxVatPercentOpen);
        QWidget::setTabOrder(spinBoxVatPercentOpen, pushButtonVOpen);
        QWidget::setTabOrder(pushButtonVOpen, pushButtonVClose);
        QWidget::setTabOrder(pushButtonVClose, pushButtonCycleSettings);
        QWidget::setTabOrder(pushButtonCycleSettings, lineEditTgtZPU);
        QWidget::setTabOrder(lineEditTgtZPU, lineEditTgtZMM);
        QWidget::setTabOrder(lineEditTgtZMM, lineEditTgtZInches);
        QWidget::setTabOrder(lineEditTgtZInches, lineEditCycleStatus);
        QWidget::setTabOrder(lineEditCycleStatus, pushButtonPrintBase);
        QWidget::setTabOrder(pushButtonPrintBase, pushButtonPrintNext);
        QWidget::setTabOrder(pushButtonPrintNext, pushButtonPrintFinal);
        QWidget::setTabOrder(pushButtonPrintFinal, pushButtonStop);
        QWidget::setTabOrder(pushButtonStop, lineEditCommand);
        QWidget::setTabOrder(lineEditCommand, textEditCommOut);
        QWidget::setTabOrder(textEditCommOut, checkBoxVerbose);

        retranslateUi(B9Terminal);
        QObject::connect(lineEditCommand, SIGNAL(returnPressed()), B9Terminal, SLOT(sendCommand()));

        QMetaObject::connectSlotsByName(B9Terminal);
    } // setupUi

    void retranslateUi(QWidget *B9Terminal)
    {
        B9Terminal->setWindowTitle(QApplication::translate("B9Terminal", "B9Creator Terminal Utility", 0));
        label_10->setText(QApplication::translate("B9Terminal", "Connection Status:", 0));
#ifndef QT_NO_TOOLTIP
        commStatus->setToolTip(QApplication::translate("B9Terminal", "Status of the serial connection with the printer.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        commStatus->setWhatsThis(QApplication::translate("B9Terminal", "Current status of the serial communications (via USB) with the printer.", 0));
#endif // QT_NO_WHATSTHIS
        groupBoxMain->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        groupBoxPrinterInfo->setToolTip(QApplication::translate("B9Terminal", "Information provided by the connected printer.", 0));
#endif // QT_NO_TOOLTIP
        groupBoxPrinterInfo->setTitle(QApplication::translate("B9Terminal", "Printer Information", 0));
        label_8->setText(QApplication::translate("B9Terminal", "Printer Model:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditModelInfo->setToolTip(QApplication::translate("B9Terminal", "Connected printer's model number.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditModelInfo->setWhatsThis(QApplication::translate("B9Terminal", "Model number information provided by the connected printer.", 0));
#endif // QT_NO_WHATSTHIS
        label_9->setText(QApplication::translate("B9Terminal", "Firmware Version:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditFirmVersion->setToolTip(QApplication::translate("B9Terminal", "Printer's currently loaded firmware version information.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditFirmVersion->setWhatsThis(QApplication::translate("B9Terminal", "Currently loaded firmware version information, as provided by the printer.", 0));
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("B9Terminal", "Z Step Size (mm):", 0));
#ifndef QT_NO_TOOLTIP
        lineEditPUinMicrons->setToolTip(QApplication::translate("B9Terminal", "Minimum z axis (vertical axis) step size, aka \"Printer Unit\".", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditPUinMicrons->setWhatsThis(QApplication::translate("B9Terminal", "This is the size (in millimeters) of the minimum vertical axis motion increment.  Information provided by the printer.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        groupBoxZLimits->setToolTip(QApplication::translate("B9Terminal", "Maximum vertical build table position, provided by printer.", 0));
#endif // QT_NO_TOOLTIP
        groupBoxZLimits->setTitle(QApplication::translate("B9Terminal", "Z Axis Upper Limit", 0));
        label_6->setText(QApplication::translate("B9Terminal", "Z Steps:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditUpperZLimPU->setToolTip(QApplication::translate("B9Terminal", "Vertical limit of the build platform measured in steps (printer units).", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditUpperZLimPU->setWhatsThis(QApplication::translate("B9Terminal", "Vertical limit of the build platform measured in steps (printer units).", 0));
#endif // QT_NO_WHATSTHIS
        lineEditUpperZLimPU->setText(QString());
        label_11->setText(QApplication::translate("B9Terminal", "Millimeters:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditUpperZLimMM->setToolTip(QApplication::translate("B9Terminal", "Vertical limit of the build platform measured in millimeters.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditUpperZLimMM->setWhatsThis(QApplication::translate("B9Terminal", "Vertical limit of the build platform measured in millimeters.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditUpperZLimMM->setText(QString());
        label_12->setText(QApplication::translate("B9Terminal", "Inches:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditUpperZLimInches->setToolTip(QApplication::translate("B9Terminal", "Vertical limit of the build platform measured in inches.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditUpperZLimInches->setWhatsThis(QApplication::translate("B9Terminal", "Vertical limit of the build platform measured in inches.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditUpperZLimInches->setText(QString());
#ifndef QT_NO_TOOLTIP
        groupBox_7->setToolTip(QApplication::translate("B9Terminal", "Information about the printer's projector setup.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_7->setTitle(QApplication::translate("B9Terminal", "Projector Calibration", 0));
        label_32->setText(QApplication::translate("B9Terminal", "Lamp 1/2 Life:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditHalfLife->setToolTip(QApplication::translate("B9Terminal", "Hours before Projector's output drops to half its original value", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditHalfLife->setWhatsThis(QApplication::translate("B9Terminal", "Hours before Projector's output drops to half its original value", 0));
#endif // QT_NO_WHATSTHIS
        lineEditHalfLife->setText(QString());
        label_29->setText(QApplication::translate("B9Terminal", "Native X Res:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditNativeX->setToolTip(QApplication::translate("B9Terminal", "Projector's native X Pixel count (resolution).", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditNativeX->setWhatsThis(QApplication::translate("B9Terminal", "Projector's native X Pixel count (resolution). Printer specific.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditNativeX->setText(QString());
        label_30->setText(QApplication::translate("B9Terminal", "Native Y Res:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditNativeY->setToolTip(QApplication::translate("B9Terminal", "Projector's native Y Pixel count (resolution).", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditNativeY->setWhatsThis(QApplication::translate("B9Terminal", "Projector's native Y Pixel count (resolution). Printer specific.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditNativeY->setText(QString());
        label_31->setText(QApplication::translate("B9Terminal", "XY Pixel Size:", 0));
        comboBoxXPPixelSize->clear();
        comboBoxXPPixelSize->insertItems(0, QStringList()
         << QApplication::translate("B9Terminal", "50 microns", 0)
         << QApplication::translate("B9Terminal", "75 microns", 0)
         << QApplication::translate("B9Terminal", "100 microns", 0)
        );
#ifndef QT_NO_TOOLTIP
        comboBoxXPPixelSize->setToolTip(QApplication::translate("B9Terminal", "The current XY pixel size, determined by projector position and calibration", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        comboBoxXPPixelSize->setWhatsThis(QApplication::translate("B9Terminal", "The current XY pixel size, determined by projector position and calibration", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonModMatCat->setText(QApplication::translate("B9Terminal", "Modify Materials Catalog...", 0));
        pushButtonFirmwareReset->setText(QApplication::translate("B9Terminal", "Reset Firmware Defaults", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_6->setToolTip(QApplication::translate("B9Terminal", "Initialize the printer.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_6->setTitle(QApplication::translate("B9Terminal", "Initialize Home Positions", 0));
        label_27->setText(QApplication::translate("B9Terminal", "Needs Initialized:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditNeedsInit->setToolTip(QApplication::translate("B9Terminal", "Printer Initialization status.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditNeedsInit->setWhatsThis(QApplication::translate("B9Terminal", "Printer Initialization status.  After turning on the printer, it must seek and find the optical \"home\" switches before printing.  This requires movement of the components and disables communications during the process.", 0));
#endif // QT_NO_WHATSTHIS
        label_26->setText(QApplication::translate("B9Terminal", "Last Z Diff:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditZDiff->setToolTip(QApplication::translate("B9Terminal", "After the first Reset, subsequent resets report difference (in Printer Units) between expected home and found home locations.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditZDiff->setWhatsThis(QApplication::translate("B9Terminal", "After the first Reset, subsequent resets report difference (in Printer Units) between expected home and found home locations.  If this difference is large (>+/- 3) it can indicate that the Z axis is sticking and may need lubricated.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        pushButtonCmdReset->setToolTip(QApplication::translate("B9Terminal", "Move printer components to \"home\" positions.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonCmdReset->setWhatsThis(QApplication::translate("B9Terminal", "Initiates the \"seek and find\" process.  This requires movement of the components and disables communications during the process.", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonCmdReset->setText(QApplication::translate("B9Terminal", "Find Home (Reset)", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_4->setToolTip(QApplication::translate("B9Terminal", "Settings for the print position and release cycles", 0));
#endif // QT_NO_TOOLTIP
        groupBox_4->setTitle(QApplication::translate("B9Terminal", "Layer Release - Settings", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonCycleSettings->setToolTip(QApplication::translate("B9Terminal", "Opens the Release Cycle Settings Dialog", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonCycleSettings->setWhatsThis(QApplication::translate("B9Terminal", "Opens the Release Cycle Settings Dialog", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonCycleSettings->setText(QApplication::translate("B9Terminal", "Printer Cycle Settings...", 0));
#ifndef QT_NO_TOOLTIP
        groupBoxZPosition_2->setToolTip(QApplication::translate("B9Terminal", "Cycle Control", 0));
#endif // QT_NO_TOOLTIP
        groupBoxZPosition_2->setTitle(QApplication::translate("B9Terminal", "Release Cycle Control", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonPrintBase->setToolTip(QApplication::translate("B9Terminal", "Command \"Base\" cycle.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonPrintBase->setWhatsThis(QApplication::translate("B9Terminal", "The Base cycle opens the VAT/Shutter, lowers to the target z position, delays the \"settle\" time and broadcasts cycle finished.", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonPrintBase->setText(QApplication::translate("B9Terminal", "Base Position", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonPrintNext->setToolTip(QApplication::translate("B9Terminal", "Command \"Next\" cycle.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonPrintNext->setWhatsThis(QApplication::translate("B9Terminal", "The Next cycle closes the VAT/Shutter, raises the z position to the next target level + overlift distance, delays for \"breathe\" amount of time, opens the VAT/Shutter, lowers to the target z position, delays the \"settle\" time and broadcasts cycle finished.", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonPrintNext->setText(QApplication::translate("B9Terminal", "Next Position", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonPrintFinal->setToolTip(QApplication::translate("B9Terminal", "Command \"Final\" cycle.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonPrintFinal->setWhatsThis(QApplication::translate("B9Terminal", "The \"Final\" command closes the VAT/Shutter raises to the target z position, commands the projector to Off and broadcasts cycle finished.", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonPrintFinal->setText(QApplication::translate("B9Terminal", "Final Release", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_3->setToolTip(QApplication::translate("B9Terminal", "Target layer's vertical position.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("B9Terminal", "Z Layer Position", 0));
        label_22->setText(QApplication::translate("B9Terminal", "Z Steps:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditTgtZPU->setToolTip(QApplication::translate("B9Terminal", "Target layer's vertical position in Printer Units.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditTgtZPU->setWhatsThis(QApplication::translate("B9Terminal", "Target layer's vertical position in Printer Units.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditTgtZPU->setText(QApplication::translate("B9Terminal", "0", 0));
        label_23->setText(QApplication::translate("B9Terminal", "Millimeters:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditTgtZMM->setToolTip(QApplication::translate("B9Terminal", "Target layer's vertical position in millimeters.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditTgtZMM->setWhatsThis(QApplication::translate("B9Terminal", "Target layer's vertical position in millimeters.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditTgtZMM->setText(QApplication::translate("B9Terminal", "0", 0));
        label_24->setText(QApplication::translate("B9Terminal", "Inches:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditTgtZInches->setToolTip(QApplication::translate("B9Terminal", "Target layer's vertical position in inches.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditTgtZInches->setWhatsThis(QApplication::translate("B9Terminal", "Target layer's vertical position in inches.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditTgtZInches->setText(QApplication::translate("B9Terminal", "0", 0));
#ifndef QT_NO_TOOLTIP
        lineEditCycleStatus->setToolTip(QApplication::translate("B9Terminal", "Cycle status, set to Finished when cycle is completed.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditCycleStatus->setWhatsThis(QApplication::translate("B9Terminal", "Cycle status, set to Finished when cycle is completed.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditCycleStatus->setText(QApplication::translate("B9Terminal", "Not Printing", 0));
        label_28->setText(QApplication::translate("B9Terminal", "Cycle Status", 0));
#ifndef QT_NO_TOOLTIP
        groupBoxProjector->setToolTip(QApplication::translate("B9Terminal", "Control & Status of the Projector's power state.", 0));
#endif // QT_NO_TOOLTIP
        groupBoxProjector->setTitle(QApplication::translate("B9Terminal", "Projector Power", 0));
        label_2->setText(QApplication::translate("B9Terminal", "Commanded", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonProjPower->setToolTip(QApplication::translate("B9Terminal", "Toggle desired projector state on/off", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonProjPower->setWhatsThis(QApplication::translate("B9Terminal", "Toggling to \"Commanded On\" will begin the turn on and warm up process.  Once powered on, commanding power Off will start the cool down and turn off process.", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonProjPower->setText(QApplication::translate("B9Terminal", "Off", 0));
        label_3->setText(QApplication::translate("B9Terminal", "Current State", 0));
#ifndef QT_NO_TOOLTIP
        lineEditProjState->setToolTip(QApplication::translate("B9Terminal", "Current power state of the printer's DLP Projector", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditProjState->setWhatsThis(QApplication::translate("B9Terminal", "Current power state of the printer's DLP Projector", 0));
#endif // QT_NO_WHATSTHIS
        lineEditProjState->setText(QApplication::translate("B9Terminal", "UNKNOWN", 0));
        label->setText(QApplication::translate("B9Terminal", "Lamp Hours", 0));
#ifndef QT_NO_TOOLTIP
        lineEditLampHrs->setToolTip(QApplication::translate("B9Terminal", "Total Lamp Hours, as reported by the printer's projector (when powered on).", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditLampHrs->setWhatsThis(QApplication::translate("B9Terminal", "Total Lamp Hours, as reported by the printer's projector (when powered on).  If the lamp is replaced, follow the projector's instruction manual to reset the it's hour counter back to zero.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditLampHrs->setText(QApplication::translate("B9Terminal", "UNKNOWN", 0));
#ifndef QT_NO_TOOLTIP
        groupBoxZPosition->setToolTip(QApplication::translate("B9Terminal", "Current vertical position of the build table", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        groupBoxZPosition->setWhatsThis(QApplication::translate("B9Terminal", "Current vertical position of the build table, with \"zero\" lowered to contact the floor of the VAT.", 0));
#endif // QT_NO_WHATSTHIS
        groupBoxZPosition->setTitle(QApplication::translate("B9Terminal", "Z Position", 0));
        label_13->setText(QApplication::translate("B9Terminal", "Z Steps:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditCurZPosInPU->setToolTip(QApplication::translate("B9Terminal", "Current vertical position of the build table in Steps above zero (printer units).   Enter a new value to move to a new position.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditCurZPosInPU->setWhatsThis(QApplication::translate("B9Terminal", "Current vertical position of the build table in Steps above zero (printer units).   Enter a new value to move to a new position.", 0));
#endif // QT_NO_WHATSTHIS
        label_14->setText(QApplication::translate("B9Terminal", "Millimeters:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditCurZPosInMM->setToolTip(QApplication::translate("B9Terminal", "Current vertical position of the build table in millimeters.  Enter a new value to move to a new position.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditCurZPosInMM->setWhatsThis(QApplication::translate("B9Terminal", "Current vertical position of the build table in millimeters.  Enter a new value to move to a new position.", 0));
#endif // QT_NO_WHATSTHIS
        label_15->setText(QApplication::translate("B9Terminal", "Inches:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditCurZPosInInches->setToolTip(QApplication::translate("B9Terminal", "Current vertical position of the build table in inches.   Enter a new value to move to a new position.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditCurZPosInInches->setWhatsThis(QApplication::translate("B9Terminal", "Current vertical position of the build table in inches.   Enter a new value to move to a new position.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        groupBoxVAT->setToolTip(QApplication::translate("B9Terminal", "Status and Control of the VAT position.", 0));
#endif // QT_NO_TOOLTIP
        groupBoxVAT->setTitle(QApplication::translate("B9Terminal", "VAT (Shutter) Control", 0));
        label_7->setText(QApplication::translate("B9Terminal", "VAT % Open", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonVOpen->setToolTip(QApplication::translate("B9Terminal", "Send VAT/Shutter Open Command", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonVOpen->setWhatsThis(QApplication::translate("B9Terminal", "Send VAT/Shutter Open Command", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonVOpen->setText(QApplication::translate("B9Terminal", "Open-100%", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonVClose->setToolTip(QApplication::translate("B9Terminal", "Send VAT/Shutter Close Command", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonVClose->setWhatsThis(QApplication::translate("B9Terminal", "Send VAT/Shutter Close Command", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonVClose->setText(QApplication::translate("B9Terminal", "Close-0%", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxVatPercentOpen->setToolTip(QApplication::translate("B9Terminal", "Current Vat Position", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxVatPercentOpen->setWhatsThis(QApplication::translate("B9Terminal", "Current Vat Position, change the value to control Vat/Shutter position.", 0));
#endif // QT_NO_WHATSTHIS
        groupBox_5->setTitle(QApplication::translate("B9Terminal", "Serial Communications Data Stream Monitor", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonStop->setToolTip(QApplication::translate("B9Terminal", "Send a STOP command to the printer. ", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonStop->setWhatsThis(QApplication::translate("B9Terminal", "Send a STOP command to the printer.  Printer will stop any mechanical motion currently in progress.", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonStop->setText(QApplication::translate("B9Terminal", "Send STOP Command", 0));
#ifndef QT_NO_TOOLTIP
        textEditCommOut->setToolTip(QApplication::translate("B9Terminal", "Data stream from the printer serial port.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        textEditCommOut->setWhatsThis(QApplication::translate("B9Terminal", "Data stream from the printer serial port.  Blue text indicates printer broadcast info.  Black text is verbose comments (when enabled).", 0));
#endif // QT_NO_WHATSTHIS
        label_25->setText(QApplication::translate("B9Terminal", "Send:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditCommand->setToolTip(QApplication::translate("B9Terminal", "Send text commands to the printer.  Refer to \"DLP 3DP API\" docs.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditCommand->setWhatsThis(QApplication::translate("B9Terminal", "Send text commands to the printer.  Refer to \"DLP 3DP API\" documents for details on valid commands.  Sending invalid commands will have unpredicatable results!", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        checkBoxVerbose->setToolTip(QApplication::translate("B9Terminal", "Direct printer to send text comments over the serial port.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxVerbose->setWhatsThis(QApplication::translate("B9Terminal", "Direct the printer to send verbose text comments over the serial port.  Comments are shown below in black text, raw printer broadcasts in blue text.", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxVerbose->setText(QApplication::translate("B9Terminal", "Enable Verbose PrinterComments", 0));
    } // retranslateUi

};

namespace Ui {
    class B9Terminal: public Ui_B9Terminal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B9TERMINAL_H

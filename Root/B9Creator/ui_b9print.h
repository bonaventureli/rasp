/********************************************************************************
** Form generated from reading UI file 'b9print.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B9PRINT_H
#define UI_B9PRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_B9Print
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditSerialStatus;
    QLabel *label_2;
    QLineEdit *lineEditProjectorOutput;
    QLabel *label_4;
    QLineEdit *lineEditProjectorStatus;
    QLabel *label;
    QPushButton *pushButtonPauseResume;
    QPushButton *pushButtonAbort;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QProgressBar *progressBarPrintProgress;
    QLineEdit *lineEditLayerCount;
    QLabel *label_5;
    QLCDNumber *lcdNumberTime;
    QLabel *label_3;
    QLCDNumber *lcdNumberTimeRemaining;
    QLineEdit *lineEditJobName;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEditJobDescription;

    void setupUi(QDialog *B9Print)
    {
        if (B9Print->objectName().isEmpty())
            B9Print->setObjectName(QStringLiteral("B9Print"));
        B9Print->resize(377, 381);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(B9Print->sizePolicy().hasHeightForWidth());
        B9Print->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        B9Print->setPalette(palette);
        gridLayout_3 = new QGridLayout(B9Print);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox_2 = new QGroupBox(B9Print);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEditSerialStatus = new QLineEdit(groupBox_2);
        lineEditSerialStatus->setObjectName(QStringLiteral("lineEditSerialStatus"));
        QPalette palette1;
        QBrush brush1(QColor(0, 0, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush2(QColor(204, 204, 204, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        QBrush brush4(QColor(240, 240, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        lineEditSerialStatus->setPalette(palette1);
        lineEditSerialStatus->setReadOnly(true);

        gridLayout_2->addWidget(lineEditSerialStatus, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEditProjectorOutput = new QLineEdit(groupBox_2);
        lineEditProjectorOutput->setObjectName(QStringLiteral("lineEditProjectorOutput"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        lineEditProjectorOutput->setPalette(palette2);
        lineEditProjectorOutput->setReadOnly(true);

        gridLayout_2->addWidget(lineEditProjectorOutput, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        lineEditProjectorStatus = new QLineEdit(groupBox_2);
        lineEditProjectorStatus->setObjectName(QStringLiteral("lineEditProjectorStatus"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        lineEditProjectorStatus->setPalette(palette3);
        lineEditProjectorStatus->setReadOnly(true);

        gridLayout_2->addWidget(lineEditProjectorStatus, 2, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 0, 1, 2);

        pushButtonPauseResume = new QPushButton(B9Print);
        pushButtonPauseResume->setObjectName(QStringLiteral("pushButtonPauseResume"));

        gridLayout_3->addWidget(pushButtonPauseResume, 2, 0, 1, 1);

        pushButtonAbort = new QPushButton(B9Print);
        pushButtonAbort->setObjectName(QStringLiteral("pushButtonAbort"));

        gridLayout_3->addWidget(pushButtonAbort, 2, 1, 1, 1);

        groupBox = new QGroupBox(B9Print);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(163, 0));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        progressBarPrintProgress = new QProgressBar(groupBox);
        progressBarPrintProgress->setObjectName(QStringLiteral("progressBarPrintProgress"));
        progressBarPrintProgress->setValue(0);
        progressBarPrintProgress->setTextVisible(false);

        gridLayout->addWidget(progressBarPrintProgress, 6, 0, 1, 2);

        lineEditLayerCount = new QLineEdit(groupBox);
        lineEditLayerCount->setObjectName(QStringLiteral("lineEditLayerCount"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        lineEditLayerCount->setPalette(palette4);
        lineEditLayerCount->setReadOnly(true);

        gridLayout->addWidget(lineEditLayerCount, 7, 0, 1, 2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_5, 9, 0, 1, 1);

        lcdNumberTime = new QLCDNumber(groupBox);
        lcdNumberTime->setObjectName(QStringLiteral("lcdNumberTime"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lcdNumberTime->sizePolicy().hasHeightForWidth());
        lcdNumberTime->setSizePolicy(sizePolicy2);
        lcdNumberTime->setMinimumSize(QSize(170, 40));
        QPalette palette5;
        QBrush brush5(QColor(162, 17, 17, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        QBrush brush6(QColor(207, 34, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush7(QColor(128, 12, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush7);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        QBrush brush9(QColor(255, 255, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        QBrush brush10(QColor(69, 69, 69, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        lcdNumberTime->setPalette(palette5);
        lcdNumberTime->setAutoFillBackground(true);
        lcdNumberTime->setSmallDecimalPoint(false);
        lcdNumberTime->setSegmentStyle(QLCDNumber::Filled);
        lcdNumberTime->setProperty("value", QVariant(0));

        gridLayout->addWidget(lcdNumberTime, 9, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_3, 8, 0, 1, 1);

        lcdNumberTimeRemaining = new QLCDNumber(groupBox);
        lcdNumberTimeRemaining->setObjectName(QStringLiteral("lcdNumberTimeRemaining"));
        sizePolicy2.setHeightForWidth(lcdNumberTimeRemaining->sizePolicy().hasHeightForWidth());
        lcdNumberTimeRemaining->setSizePolicy(sizePolicy2);
        lcdNumberTimeRemaining->setMinimumSize(QSize(0, 40));
        QPalette palette6;
        QBrush brush11(QColor(170, 0, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        QBrush brush12(QColor(203, 0, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush12);
        QBrush brush13(QColor(103, 0, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        lcdNumberTimeRemaining->setPalette(palette6);
        lcdNumberTimeRemaining->setAutoFillBackground(true);
        lcdNumberTimeRemaining->setSmallDecimalPoint(false);
        lcdNumberTimeRemaining->setSegmentStyle(QLCDNumber::Filled);
        lcdNumberTimeRemaining->setProperty("value", QVariant(0));

        gridLayout->addWidget(lcdNumberTimeRemaining, 8, 1, 1, 1);

        lineEditJobName = new QLineEdit(groupBox);
        lineEditJobName->setObjectName(QStringLiteral("lineEditJobName"));
        sizePolicy.setHeightForWidth(lineEditJobName->sizePolicy().hasHeightForWidth());
        lineEditJobName->setSizePolicy(sizePolicy);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        lineEditJobName->setPalette(palette7);
        lineEditJobName->setReadOnly(true);

        gridLayout->addWidget(lineEditJobName, 3, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        lineEditJobDescription = new QLineEdit(groupBox);
        lineEditJobDescription->setObjectName(QStringLiteral("lineEditJobDescription"));
        lineEditJobDescription->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEditJobDescription->sizePolicy().hasHeightForWidth());
        lineEditJobDescription->setSizePolicy(sizePolicy);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        lineEditJobDescription->setPalette(palette8);
        lineEditJobDescription->setReadOnly(true);

        gridLayout->addWidget(lineEditJobDescription, 4, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 2);

        QWidget::setTabOrder(lineEditSerialStatus, lineEditProjectorOutput);
        QWidget::setTabOrder(lineEditProjectorOutput, lineEditProjectorStatus);
        QWidget::setTabOrder(lineEditProjectorStatus, pushButtonPauseResume);
        QWidget::setTabOrder(pushButtonPauseResume, pushButtonAbort);

        retranslateUi(B9Print);

        QMetaObject::connectSlotsByName(B9Print);
    } // setupUi

    void retranslateUi(QDialog *B9Print)
    {
        B9Print->setWindowTitle(QApplication::translate("B9Print", "B9Creator - Creation In Progress", 0));
        groupBox_2->setTitle(QApplication::translate("B9Print", "Connections", 0));
#ifndef QT_NO_TOOLTIP
        lineEditSerialStatus->setToolTip(QApplication::translate("B9Print", "Status of the USB serial port connection.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditSerialStatus->setWhatsThis(QApplication::translate("B9Print", "Status of the USB serial port connection.  Printing will abort if this connection is lost.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditSerialStatus->setText(QString());
        label_2->setText(QApplication::translate("B9Print", "Projector Video Output:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditProjectorOutput->setToolTip(QApplication::translate("B9Print", "Video Port Output used by Projector.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditProjectorOutput->setWhatsThis(QApplication::translate("B9Print", "Video Port Output used by Projector.  The port used should be set to the native resolution of the projector (1024 x 768 for the Vivitek D535).", 0));
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("B9Print", "Projector Power Status:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditProjectorStatus->setToolTip(QApplication::translate("B9Print", "Current Projector Power Status.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditProjectorStatus->setWhatsThis(QApplication::translate("B9Print", "Current Projector Power Status.  First we TURN ON, then WARM UP.  Printing begins once the state is ON.  Projector is powerd off automatically when finished or aborted.", 0));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("B9Print", "Serial Connection Status:", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonPauseResume->setToolTip(QApplication::translate("B9Print", "Click to Pause/Resume the print process.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonPauseResume->setWhatsThis(QApplication::translate("B9Print", "Click to Pause/Resume the print process.  Once clicked, it the printer will complete the current cycle.  Once completed you may use the manual switches to raise and examine the print in progress.  When ready, click this button again to resume.  The printer will automatically move the object into the correct position to resume printing.  CAUTION:  Pausing the print may result in a visible \"artifact\" or \"line\" at the layer where paused.", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonPauseResume->setText(QApplication::translate("B9Print", "Pause", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonAbort->setToolTip(QApplication::translate("B9Print", "Abort the printing process.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonAbort->setWhatsThis(QApplication::translate("B9Print", "Abort the printing process.  Active after printer has warmed up.", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonAbort->setText(QApplication::translate("B9Print", "Abort", 0));
        groupBox->setTitle(QApplication::translate("B9Print", "Print Progress", 0));
#ifndef QT_NO_TOOLTIP
        progressBarPrintProgress->setToolTip(QApplication::translate("B9Print", "Print progress bar showing layers completed.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        progressBarPrintProgress->setWhatsThis(QApplication::translate("B9Print", "Print progress bar showing layers completed.", 0));
#endif // QT_NO_WHATSTHIS
        progressBarPrintProgress->setFormat(QApplication::translate("B9Print", "%v of %m", 0));
#ifndef QT_NO_TOOLTIP
        lineEditLayerCount->setToolTip(QApplication::translate("B9Print", "Status of the printing process.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditLayerCount->setWhatsThis(QApplication::translate("B9Print", "Status of the printing process.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditLayerCount->setText(QString());
        label_5->setText(QApplication::translate("B9Print", "Est. Completion Time:", 0));
#ifndef QT_NO_TOOLTIP
        lcdNumberTime->setToolTip(QApplication::translate("B9Print", "Estimated time when print will be complete.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lcdNumberTime->setWhatsThis(QApplication::translate("B9Print", "Estimated time when print will be complete.  This is an ESTIMATE!", 0));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("B9Print", "Est. Time Remaing:", 0));
#ifndef QT_NO_TOOLTIP
        lcdNumberTimeRemaining->setToolTip(QApplication::translate("B9Print", "Estimated hours and minutes until print is completed.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lcdNumberTimeRemaining->setWhatsThis(QApplication::translate("B9Print", "Estimated hours and minutes until print is completed.  This is an ESTIMATE!", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        lineEditJobName->setToolTip(QApplication::translate("B9Print", "Job File Name", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditJobName->setWhatsThis(QApplication::translate("B9Print", "Job File Name.  Short description of the print job.", 0));
#endif // QT_NO_WHATSTHIS
        label_6->setText(QApplication::translate("B9Print", "Job Name:", 0));
        label_7->setText(QApplication::translate("B9Print", "Job Description", 0));
#ifndef QT_NO_TOOLTIP
        lineEditJobDescription->setToolTip(QApplication::translate("B9Print", "Job Description", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditJobDescription->setWhatsThis(QApplication::translate("B9Print", "Long description of the job file.", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class B9Print: public Ui_B9Print {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B9PRINT_H

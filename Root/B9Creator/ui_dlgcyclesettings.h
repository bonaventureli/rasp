/********************************************************************************
** Form generated from reading UI file 'dlgcyclesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCYCLESETTINGS_H
#define UI_DLGCYCLESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DlgCycleSettings
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxRaiseSpd1;
    QLabel *label_2;
    QSpinBox *spinBoxLowerSpd1;
    QLabel *label_3;
    QSpinBox *spinBoxCloseSpd1;
    QLabel *label_4;
    QSpinBox *spinBoxOpenSpd1;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBoxOverlift1;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBoxBreathe1;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBoxSettle1;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QSpinBox *spinBoxRaiseSpd2;
    QLabel *label_9;
    QSpinBox *spinBoxLowerSpd2;
    QLabel *label_10;
    QSpinBox *spinBoxCloseSpd2;
    QLabel *label_11;
    QSpinBox *spinBoxOpenSpd2;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBoxOverlift2;
    QLabel *label_13;
    QDoubleSpinBox *doubleSpinBoxBreathe2;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBoxSettle2;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBoxBTCutoff;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QLabel *label_16;
    QDoubleSpinBox *doubleSpinBoxHardZDown;
    QLabel *label_17;
    QDoubleSpinBox *doubleSpinBoxZFlush;
    QPushButton *pushButtonRestoreDefaults;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DlgCycleSettings)
    {
        if (DlgCycleSettings->objectName().isEmpty())
            DlgCycleSettings->setObjectName(QStringLiteral("DlgCycleSettings"));
        DlgCycleSettings->resize(400, 374);
        gridLayout_4 = new QGridLayout(DlgCycleSettings);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_3 = new QGroupBox(DlgCycleSettings);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxRaiseSpd1 = new QSpinBox(groupBox);
        spinBoxRaiseSpd1->setObjectName(QStringLiteral("spinBoxRaiseSpd1"));
        spinBoxRaiseSpd1->setMaximum(100);
        spinBoxRaiseSpd1->setSingleStep(5);
        spinBoxRaiseSpd1->setValue(85);

        gridLayout->addWidget(spinBoxRaiseSpd1, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxLowerSpd1 = new QSpinBox(groupBox);
        spinBoxLowerSpd1->setObjectName(QStringLiteral("spinBoxLowerSpd1"));
        spinBoxLowerSpd1->setMaximum(100);
        spinBoxLowerSpd1->setSingleStep(5);
        spinBoxLowerSpd1->setValue(85);

        gridLayout->addWidget(spinBoxLowerSpd1, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinBoxCloseSpd1 = new QSpinBox(groupBox);
        spinBoxCloseSpd1->setObjectName(QStringLiteral("spinBoxCloseSpd1"));
        spinBoxCloseSpd1->setMaximum(100);
        spinBoxCloseSpd1->setSingleStep(5);
        spinBoxCloseSpd1->setValue(85);

        gridLayout->addWidget(spinBoxCloseSpd1, 2, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinBoxOpenSpd1 = new QSpinBox(groupBox);
        spinBoxOpenSpd1->setObjectName(QStringLiteral("spinBoxOpenSpd1"));
        spinBoxOpenSpd1->setMaximum(100);
        spinBoxOpenSpd1->setSingleStep(5);
        spinBoxOpenSpd1->setValue(85);

        gridLayout->addWidget(spinBoxOpenSpd1, 3, 2, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        doubleSpinBoxOverlift1 = new QDoubleSpinBox(groupBox);
        doubleSpinBoxOverlift1->setObjectName(QStringLiteral("doubleSpinBoxOverlift1"));
        doubleSpinBoxOverlift1->setDecimals(3);
        doubleSpinBoxOverlift1->setMaximum(9);

        gridLayout->addWidget(doubleSpinBoxOverlift1, 4, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 5, 0, 1, 2);

        doubleSpinBoxBreathe1 = new QDoubleSpinBox(groupBox);
        doubleSpinBoxBreathe1->setObjectName(QStringLiteral("doubleSpinBoxBreathe1"));
        doubleSpinBoxBreathe1->setMaximum(60);

        gridLayout->addWidget(doubleSpinBoxBreathe1, 5, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        doubleSpinBoxSettle1 = new QDoubleSpinBox(groupBox);
        doubleSpinBoxSettle1->setObjectName(QStringLiteral("doubleSpinBoxSettle1"));
        doubleSpinBoxSettle1->setMaximum(60);

        gridLayout->addWidget(doubleSpinBoxSettle1, 6, 2, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        spinBoxRaiseSpd2 = new QSpinBox(groupBox_2);
        spinBoxRaiseSpd2->setObjectName(QStringLiteral("spinBoxRaiseSpd2"));
        spinBoxRaiseSpd2->setMaximum(100);
        spinBoxRaiseSpd2->setSingleStep(5);
        spinBoxRaiseSpd2->setValue(85);

        gridLayout_2->addWidget(spinBoxRaiseSpd2, 0, 2, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        spinBoxLowerSpd2 = new QSpinBox(groupBox_2);
        spinBoxLowerSpd2->setObjectName(QStringLiteral("spinBoxLowerSpd2"));
        spinBoxLowerSpd2->setMaximum(100);
        spinBoxLowerSpd2->setSingleStep(5);
        spinBoxLowerSpd2->setValue(85);

        gridLayout_2->addWidget(spinBoxLowerSpd2, 1, 2, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        spinBoxCloseSpd2 = new QSpinBox(groupBox_2);
        spinBoxCloseSpd2->setObjectName(QStringLiteral("spinBoxCloseSpd2"));
        spinBoxCloseSpd2->setMaximum(100);
        spinBoxCloseSpd2->setSingleStep(5);
        spinBoxCloseSpd2->setValue(85);

        gridLayout_2->addWidget(spinBoxCloseSpd2, 2, 2, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        spinBoxOpenSpd2 = new QSpinBox(groupBox_2);
        spinBoxOpenSpd2->setObjectName(QStringLiteral("spinBoxOpenSpd2"));
        spinBoxOpenSpd2->setMaximum(100);
        spinBoxOpenSpd2->setSingleStep(5);
        spinBoxOpenSpd2->setValue(85);

        gridLayout_2->addWidget(spinBoxOpenSpd2, 3, 2, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 4, 0, 1, 1);

        doubleSpinBoxOverlift2 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxOverlift2->setObjectName(QStringLiteral("doubleSpinBoxOverlift2"));
        doubleSpinBoxOverlift2->setDecimals(3);
        doubleSpinBoxOverlift2->setMaximum(9);

        gridLayout_2->addWidget(doubleSpinBoxOverlift2, 4, 2, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 5, 0, 1, 2);

        doubleSpinBoxBreathe2 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxBreathe2->setObjectName(QStringLiteral("doubleSpinBoxBreathe2"));
        doubleSpinBoxBreathe2->setMaximum(60);

        gridLayout_2->addWidget(doubleSpinBoxBreathe2, 5, 2, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 6, 0, 1, 1);

        doubleSpinBoxSettle2 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxSettle2->setObjectName(QStringLiteral("doubleSpinBoxSettle2"));
        doubleSpinBoxSettle2->setMaximum(60);

        gridLayout_2->addWidget(doubleSpinBoxSettle2, 6, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 2, 1, 1);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_5->addWidget(label_15, 1, 0, 1, 1);

        doubleSpinBoxBTCutoff = new QDoubleSpinBox(groupBox_3);
        doubleSpinBoxBTCutoff->setObjectName(QStringLiteral("doubleSpinBoxBTCutoff"));
        doubleSpinBoxBTCutoff->setDecimals(3);
        doubleSpinBoxBTCutoff->setMaximum(10);

        gridLayout_5->addWidget(doubleSpinBoxBTCutoff, 1, 1, 1, 1);

        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_16, 0, 0, 1, 1);

        doubleSpinBoxHardZDown = new QDoubleSpinBox(groupBox_4);
        doubleSpinBoxHardZDown->setObjectName(QStringLiteral("doubleSpinBoxHardZDown"));
        doubleSpinBoxHardZDown->setDecimals(3);
        doubleSpinBoxHardZDown->setMaximum(1.27);
        doubleSpinBoxHardZDown->setSingleStep(0.00635);

        gridLayout_3->addWidget(doubleSpinBoxHardZDown, 0, 1, 1, 1);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_17, 1, 0, 1, 1);

        doubleSpinBoxZFlush = new QDoubleSpinBox(groupBox_4);
        doubleSpinBoxZFlush->setObjectName(QStringLiteral("doubleSpinBoxZFlush"));
        doubleSpinBoxZFlush->setDecimals(3);
        doubleSpinBoxZFlush->setMaximum(1.27);
        doubleSpinBoxZFlush->setSingleStep(0.00635);

        gridLayout_3->addWidget(doubleSpinBoxZFlush, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 1, 2, 2, 1);

        pushButtonRestoreDefaults = new QPushButton(groupBox_3);
        pushButtonRestoreDefaults->setObjectName(QStringLiteral("pushButtonRestoreDefaults"));
        pushButtonRestoreDefaults->setFocusPolicy(Qt::StrongFocus);

        gridLayout_5->addWidget(pushButtonRestoreDefaults, 2, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_3, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(DlgCycleSettings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFocusPolicy(Qt::StrongFocus);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 1, 0, 1, 1);

        QWidget::setTabOrder(spinBoxRaiseSpd1, spinBoxLowerSpd1);
        QWidget::setTabOrder(spinBoxLowerSpd1, spinBoxCloseSpd1);
        QWidget::setTabOrder(spinBoxCloseSpd1, spinBoxOpenSpd1);
        QWidget::setTabOrder(spinBoxOpenSpd1, doubleSpinBoxOverlift1);
        QWidget::setTabOrder(doubleSpinBoxOverlift1, doubleSpinBoxBreathe1);
        QWidget::setTabOrder(doubleSpinBoxBreathe1, doubleSpinBoxSettle1);
        QWidget::setTabOrder(doubleSpinBoxSettle1, spinBoxRaiseSpd2);
        QWidget::setTabOrder(spinBoxRaiseSpd2, spinBoxLowerSpd2);
        QWidget::setTabOrder(spinBoxLowerSpd2, spinBoxCloseSpd2);
        QWidget::setTabOrder(spinBoxCloseSpd2, spinBoxOpenSpd2);
        QWidget::setTabOrder(spinBoxOpenSpd2, doubleSpinBoxOverlift2);
        QWidget::setTabOrder(doubleSpinBoxOverlift2, doubleSpinBoxBreathe2);
        QWidget::setTabOrder(doubleSpinBoxBreathe2, doubleSpinBoxSettle2);
        QWidget::setTabOrder(doubleSpinBoxSettle2, doubleSpinBoxBTCutoff);
        QWidget::setTabOrder(doubleSpinBoxBTCutoff, doubleSpinBoxHardZDown);
        QWidget::setTabOrder(doubleSpinBoxHardZDown, doubleSpinBoxZFlush);
        QWidget::setTabOrder(doubleSpinBoxZFlush, pushButtonRestoreDefaults);
        QWidget::setTabOrder(pushButtonRestoreDefaults, buttonBox);

        retranslateUi(DlgCycleSettings);

        QMetaObject::connectSlotsByName(DlgCycleSettings);
    } // setupUi

    void retranslateUi(QDialog *DlgCycleSettings)
    {
        DlgCycleSettings->setWindowTitle(QApplication::translate("DlgCycleSettings", "Printer Cycle Settings", 0));
        groupBox_3->setTitle(QApplication::translate("DlgCycleSettings", "Printer Cycle Settings", 0));
        groupBox->setTitle(QApplication::translate("DlgCycleSettings", "Inital Layer Settings", 0));
        label->setText(QApplication::translate("DlgCycleSettings", "Raise Speed (%)", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxRaiseSpd1->setToolTip(QApplication::translate("DlgCycleSettings", "Build Table Raise Speed", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxRaiseSpd1->setWhatsThis(QApplication::translate("DlgCycleSettings", "Build Table Raise Speed.  During the print release cycle, this variable controls the raise speed.  0 is slowest (but not stopped), 100 is fastest.", 0));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("DlgCycleSettings", "Lower Speed (%)", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxLowerSpd1->setToolTip(QApplication::translate("DlgCycleSettings", "Build Table Lowering Speed", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxLowerSpd1->setWhatsThis(QApplication::translate("DlgCycleSettings", "Build Table Lowering Speed.  During the print release cycle, this variable controls the lowering speed.  0 is slowest (but not stopped), 100 is fastest.", 0));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("DlgCycleSettings", "Close Speed (%)", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxCloseSpd1->setToolTip(QApplication::translate("DlgCycleSettings", "VAT close (or release) speed.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxCloseSpd1->setWhatsThis(QApplication::translate("DlgCycleSettings", "VAT close (or release) speed.", 0));
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("DlgCycleSettings", "Open Speed (%)", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxOpenSpd1->setToolTip(QApplication::translate("DlgCycleSettings", "VAT opne (or repositioning) speed.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxOpenSpd1->setWhatsThis(QApplication::translate("DlgCycleSettings", "VAT opne (or repositioning) speed.", 0));
#endif // QT_NO_WHATSTHIS
        label_7->setText(QApplication::translate("DlgCycleSettings", "Overlift (mm)", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxOverlift1->setToolTip(QApplication::translate("DlgCycleSettings", "After release move up to next level plus this amount.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinBoxOverlift1->setWhatsThis(QApplication::translate("DlgCycleSettings", "After release move up to next level plus this amount. Once repositioned, we must lower back by this amount to target level", 0));
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("DlgCycleSettings", "Breathe (Seconds)", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxBreathe1->setToolTip(QApplication::translate("DlgCycleSettings", "Delay in the VAT closed position. ", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinBoxBreathe1->setWhatsThis(QApplication::translate("DlgCycleSettings", "Delay in the VAT closed position.  Allows time for Oxygen to replenish the VAT's PDMS coating.", 0));
#endif // QT_NO_WHATSTHIS
        label_6->setText(QApplication::translate("DlgCycleSettings", "Settle (Seconds)", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxSettle1->setToolTip(QApplication::translate("DlgCycleSettings", "Delay in the VAT Open position.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinBoxSettle1->setWhatsThis(QApplication::translate("DlgCycleSettings", "Delay in the VAT Open position.  Allows time for the resin to \"settle\" in before exposure begins.", 0));
#endif // QT_NO_WHATSTHIS
        groupBox_2->setTitle(QApplication::translate("DlgCycleSettings", "Subsequent Layer Settings", 0));
        label_8->setText(QApplication::translate("DlgCycleSettings", "Raise Speed (%)", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxRaiseSpd2->setToolTip(QApplication::translate("DlgCycleSettings", "Build Table Raise Speed", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxRaiseSpd2->setWhatsThis(QApplication::translate("DlgCycleSettings", "Build Table Raise Speed.  During the print release cycle, this variable controls the raise speed.  0 is slowest (but not stopped), 100 is fastest.", 0));
#endif // QT_NO_WHATSTHIS
        label_9->setText(QApplication::translate("DlgCycleSettings", "Lower Speed (%)", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxLowerSpd2->setToolTip(QApplication::translate("DlgCycleSettings", "Build Table Lowering Speed", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxLowerSpd2->setWhatsThis(QApplication::translate("DlgCycleSettings", "Build Table Lowering Speed.  During the print release cycle, this variable controls the lowering speed.  0 is slowest (but not stopped), 100 is fastest.", 0));
#endif // QT_NO_WHATSTHIS
        label_10->setText(QApplication::translate("DlgCycleSettings", "Close Speed (%)", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxCloseSpd2->setToolTip(QApplication::translate("DlgCycleSettings", "VAT close (or release) speed.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxCloseSpd2->setWhatsThis(QApplication::translate("DlgCycleSettings", "VAT close (or release) speed.", 0));
#endif // QT_NO_WHATSTHIS
        label_11->setText(QApplication::translate("DlgCycleSettings", "Open Speed (%)", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxOpenSpd2->setToolTip(QApplication::translate("DlgCycleSettings", "VAT opne (or repositioning) speed.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxOpenSpd2->setWhatsThis(QApplication::translate("DlgCycleSettings", "VAT opne (or repositioning) speed.", 0));
#endif // QT_NO_WHATSTHIS
        label_12->setText(QApplication::translate("DlgCycleSettings", "Overlift (mm)", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxOverlift2->setToolTip(QApplication::translate("DlgCycleSettings", "After release move up to next level plus this amount.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinBoxOverlift2->setWhatsThis(QApplication::translate("DlgCycleSettings", "After release move up to next level plus this amount. Once repositioned, we must lower back by this amount to target level", 0));
#endif // QT_NO_WHATSTHIS
        label_13->setText(QApplication::translate("DlgCycleSettings", "Breathe (Seconds)", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxBreathe2->setToolTip(QApplication::translate("DlgCycleSettings", "Delay in the VAT closed position. ", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinBoxBreathe2->setWhatsThis(QApplication::translate("DlgCycleSettings", "Delay in the VAT closed position.  Allows time for Oxygen to replenish the VAT's PDMS coating.", 0));
#endif // QT_NO_WHATSTHIS
        label_14->setText(QApplication::translate("DlgCycleSettings", "Settle (Seconds)", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxSettle2->setToolTip(QApplication::translate("DlgCycleSettings", "Delay in the VAT Open position.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinBoxSettle2->setWhatsThis(QApplication::translate("DlgCycleSettings", "Delay in the VAT Open position.  Allows time for the resin to \"settle\" in before exposure begins.", 0));
#endif // QT_NO_WHATSTHIS
        label_15->setText(QApplication::translate("DlgCycleSettings", "Inital Cutoff (mm)", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxBTCutoff->setToolTip(QApplication::translate("DlgCycleSettings", "Use Initial settings when Build Table is at or below this value.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinBoxBTCutoff->setWhatsThis(QApplication::translate("DlgCycleSettings", "Use Initial settings when Build Table is at or below this value.  At higher positions, use the subsequent settings.", 0));
#endif // QT_NO_WHATSTHIS
        groupBox_4->setTitle(QApplication::translate("DlgCycleSettings", "Dynamic Z-axis 'Find Zero' Settings", 0));
        label_16->setText(QApplication::translate("DlgCycleSettings", "Hard Down(mm)", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxHardZDown->setToolTip(QApplication::translate("DlgCycleSettings", "We go lower than 'zero' by this amount, expecting to hit bottom, motor will 'skip' a bit.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinBoxHardZDown->setWhatsThis(QApplication::translate("DlgCycleSettings", "We go lower than 'zero' by this amount, expecting to hit bottom, motor will 'skip' a bit.  Adjust this value so it only skips a few times.", 0));
#endif // QT_NO_WHATSTHIS
        label_17->setText(QApplication::translate("DlgCycleSettings", "Up to Flush (mm)", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxZFlush->setToolTip(QApplication::translate("DlgCycleSettings", "After we hit hard bottom, move up this much to flush the Build Table with the PDMS", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinBoxZFlush->setWhatsThis(QApplication::translate("DlgCycleSettings", "After we hit hard bottom, move up this much to flush the Build Table with the PDMS.  This value should normally be less than the Hard Down Value.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        pushButtonRestoreDefaults->setToolTip(QApplication::translate("DlgCycleSettings", "Restore all values to factory defaults", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonRestoreDefaults->setWhatsThis(QApplication::translate("DlgCycleSettings", "Restore all values to factory defaults.", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonRestoreDefaults->setText(QApplication::translate("DlgCycleSettings", "Restore Defaults", 0));
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QApplication::translate("DlgCycleSettings", "Accept or Reject your changes.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonBox->setWhatsThis(QApplication::translate("DlgCycleSettings", "Accept or Reject your changes.", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class DlgCycleSettings: public Ui_DlgCycleSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCYCLESETTINGS_H

/********************************************************************************
** Form generated from reading UI file 'dlgcalbuildtable.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCALBUILDTABLE_H
#define UI_DLGCALBUILDTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_dlgCalBuildTable
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QLabel *label;
    QCheckBox *checkBoxStep1;
    QCheckBox *checkBoxStep2;
    QPushButton *pushButtonHomeStep3;
    QPushButton *pushButtonZeroStep4;
    QCheckBox *checkBoxStep5;
    QCheckBox *checkBoxStep6;
    QPushButton *pushButtonRaiseUpStep7;
    QCheckBox *checkBoxStep8;
    QLabel *label_2;
    QLineEdit *lineEditStatus;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonDone;

    void setupUi(QDialog *dlgCalBuildTable)
    {
        if (dlgCalBuildTable->objectName().isEmpty())
            dlgCalBuildTable->setObjectName(QStringLiteral("dlgCalBuildTable"));
        dlgCalBuildTable->resize(655, 313);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dlgCalBuildTable->sizePolicy().hasHeightForWidth());
        dlgCalBuildTable->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(dlgCalBuildTable);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(dlgCalBuildTable);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette);
        label->setWordWrap(true);
        splitter->addWidget(label);
        checkBoxStep1 = new QCheckBox(splitter);
        checkBoxStep1->setObjectName(QStringLiteral("checkBoxStep1"));
        splitter->addWidget(checkBoxStep1);
        checkBoxStep2 = new QCheckBox(splitter);
        checkBoxStep2->setObjectName(QStringLiteral("checkBoxStep2"));
        splitter->addWidget(checkBoxStep2);
        pushButtonHomeStep3 = new QPushButton(splitter);
        pushButtonHomeStep3->setObjectName(QStringLiteral("pushButtonHomeStep3"));
        pushButtonHomeStep3->setAutoDefault(true);
        pushButtonHomeStep3->setDefault(false);
        pushButtonHomeStep3->setFlat(false);
        splitter->addWidget(pushButtonHomeStep3);
        pushButtonZeroStep4 = new QPushButton(splitter);
        pushButtonZeroStep4->setObjectName(QStringLiteral("pushButtonZeroStep4"));
        splitter->addWidget(pushButtonZeroStep4);
        checkBoxStep5 = new QCheckBox(splitter);
        checkBoxStep5->setObjectName(QStringLiteral("checkBoxStep5"));
        splitter->addWidget(checkBoxStep5);
        checkBoxStep6 = new QCheckBox(splitter);
        checkBoxStep6->setObjectName(QStringLiteral("checkBoxStep6"));
        splitter->addWidget(checkBoxStep6);
        pushButtonRaiseUpStep7 = new QPushButton(splitter);
        pushButtonRaiseUpStep7->setObjectName(QStringLiteral("pushButtonRaiseUpStep7"));
        splitter->addWidget(pushButtonRaiseUpStep7);
        checkBoxStep8 = new QCheckBox(splitter);
        checkBoxStep8->setObjectName(QStringLiteral("checkBoxStep8"));
        splitter->addWidget(checkBoxStep8);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 4);

        label_2 = new QLabel(dlgCalBuildTable);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEditStatus = new QLineEdit(dlgCalBuildTable);
        lineEditStatus->setObjectName(QStringLiteral("lineEditStatus"));
        lineEditStatus->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditStatus->sizePolicy().hasHeightForWidth());
        lineEditStatus->setSizePolicy(sizePolicy1);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush2(QColor(204, 204, 204, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        QBrush brush3(QColor(240, 240, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditStatus->setPalette(palette1);
        lineEditStatus->setReadOnly(true);

        gridLayout_2->addWidget(lineEditStatus, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(251, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        pushButtonDone = new QPushButton(dlgCalBuildTable);
        pushButtonDone->setObjectName(QStringLiteral("pushButtonDone"));

        gridLayout_2->addWidget(pushButtonDone, 1, 3, 1, 1);


        retranslateUi(dlgCalBuildTable);
        QObject::connect(pushButtonHomeStep3, SIGNAL(clicked()), dlgCalBuildTable, SLOT(on_Step3()));
        QObject::connect(pushButtonZeroStep4, SIGNAL(clicked()), dlgCalBuildTable, SLOT(on_Step4()));
        QObject::connect(pushButtonRaiseUpStep7, SIGNAL(clicked()), dlgCalBuildTable, SLOT(on_Step7()));
        QObject::connect(pushButtonDone, SIGNAL(clicked()), dlgCalBuildTable, SLOT(done()));
        QObject::connect(checkBoxStep1, SIGNAL(clicked(bool)), dlgCalBuildTable, SLOT(on_Step1(bool)));
        QObject::connect(checkBoxStep2, SIGNAL(clicked(bool)), dlgCalBuildTable, SLOT(on_Step2(bool)));
        QObject::connect(checkBoxStep5, SIGNAL(clicked(bool)), dlgCalBuildTable, SLOT(on_Step5(bool)));
        QObject::connect(checkBoxStep6, SIGNAL(clicked(bool)), dlgCalBuildTable, SLOT(on_Step6(bool)));
        QObject::connect(checkBoxStep8, SIGNAL(clicked(bool)), dlgCalBuildTable, SLOT(on_Step8(bool)));

        QMetaObject::connectSlotsByName(dlgCalBuildTable);
    } // setupUi

    void retranslateUi(QDialog *dlgCalBuildTable)
    {
        dlgCalBuildTable->setWindowTitle(QApplication::translate("dlgCalBuildTable", "Calibration - Build Table", 0));
        groupBox->setTitle(QApplication::translate("dlgCalBuildTable", "Calibrate the Build Table to be flush with the PDMS Vat Floor", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("dlgCalBuildTable", "Instructions", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label->setWhatsThis(QApplication::translate("dlgCalBuildTable", "Instructions - For more detailed information visit www.b9creator.com", 0));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("dlgCalBuildTable", "The purpose of the Build Table Calibration is to ensure the Build Table is flush against the PDMS floor of the VAT when commanded to the \"Zero\" height position.\n"
"\n"
"This calibration should be preformed when a new or re-coated VAT is put into service.", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxStep1->setToolTip(QApplication::translate("dlgCalBuildTable", "Step 1", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep1->setWhatsThis(QApplication::translate("dlgCalBuildTable", "Step 1 of 8", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep1->setText(QApplication::translate("dlgCalBuildTable", "Step 1- Ensure the VAT is installed and the Sweeper is REMOVED.", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxStep2->setToolTip(QApplication::translate("dlgCalBuildTable", "Step 2", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep2->setWhatsThis(QApplication::translate("dlgCalBuildTable", "Step 2 of 8", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep2->setText(QApplication::translate("dlgCalBuildTable", "Step 2 - Loosen all four build table adjustment screws using a 7/64\" allen (hex) wrench and install it on the arm.", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonHomeStep3->setToolTip(QApplication::translate("dlgCalBuildTable", "Step 3", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonHomeStep3->setWhatsThis(QApplication::translate("dlgCalBuildTable", "Step 3 of 8", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonHomeStep3->setText(QApplication::translate("dlgCalBuildTable", "Step 3 - Click here to command the printer to locate the Home position (Arm and VAT will move!)", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonZeroStep4->setToolTip(QApplication::translate("dlgCalBuildTable", "Step 4", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonZeroStep4->setWhatsThis(QApplication::translate("dlgCalBuildTable", "Step 4 of 8", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonZeroStep4->setText(QApplication::translate("dlgCalBuildTable", "Step 4 - Click here to command the printer to open the VAT and lower the build table to \"Zero\"", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxStep5->setToolTip(QApplication::translate("dlgCalBuildTable", "Step 5", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep5->setWhatsThis(QApplication::translate("dlgCalBuildTable", "Step 5 of 8", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep5->setText(QApplication::translate("dlgCalBuildTable", "Step 5 - Ensure the bottom of the Build Table is sitting flush on the PDMS.  Tighten all four build table adjustment screws.", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxStep6->setToolTip(QApplication::translate("dlgCalBuildTable", "Step 6", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep6->setWhatsThis(QApplication::translate("dlgCalBuildTable", "Step 6 of 8", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep6->setText(QApplication::translate("dlgCalBuildTable", "Step 6 - REMOVE the Build Table Thumbscrew.  This is important!  Failure to do so may damage the PDMS when the arm lifts.", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonRaiseUpStep7->setToolTip(QApplication::translate("dlgCalBuildTable", "Step 7", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonRaiseUpStep7->setWhatsThis(QApplication::translate("dlgCalBuildTable", "Step 7 of 8", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonRaiseUpStep7->setText(QApplication::translate("dlgCalBuildTable", "Step 7 - Click here to command the printer to raise the arm out of the way.", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxStep8->setToolTip(QApplication::translate("dlgCalBuildTable", "Step 8", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep8->setWhatsThis(QApplication::translate("dlgCalBuildTable", "Final Step", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep8->setText(QApplication::translate("dlgCalBuildTable", "Step 8 - After the arm is clear, carefully lift the Build Table from the PDMS and fully tighten all four screws.", 0));
        label_2->setText(QApplication::translate("dlgCalBuildTable", "Status:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditStatus->setToolTip(QApplication::translate("dlgCalBuildTable", "Status", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditStatus->setWhatsThis(QApplication::translate("dlgCalBuildTable", "Status - reports if printer is in motion or read for input.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditStatus->setText(QApplication::translate("dlgCalBuildTable", "Ready...", 0));
        pushButtonDone->setText(QApplication::translate("dlgCalBuildTable", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class dlgCalBuildTable: public Ui_dlgCalBuildTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCALBUILDTABLE_H

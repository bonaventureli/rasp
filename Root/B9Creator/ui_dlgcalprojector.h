/********************************************************************************
** Form generated from reading UI file 'dlgcalprojector.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCALPROJECTOR_H
#define UI_DLGCALPROJECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_dlgCalProjector
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLineEdit *lineEditStatus;
    QPushButton *pushButtonDone;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_7;
    QLineEdit *lineEditStatusDisplay;
    QLabel *label_2;
    QComboBox *comboBoxXPPixelSize;
    QCheckBox *checkBoxStep1;
    QCheckBox *checkBoxStep2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButtonStep3;
    QCheckBox *checkBoxStep4;
    QLabel *label_5;
    QCheckBox *checkBoxStep5;
    QPushButton *pushButtonStep6;

    void setupUi(QDialog *dlgCalProjector)
    {
        if (dlgCalProjector->objectName().isEmpty())
            dlgCalProjector->setObjectName(QStringLiteral("dlgCalProjector"));
        dlgCalProjector->resize(636, 547);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dlgCalProjector->sizePolicy().hasHeightForWidth());
        dlgCalProjector->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(dlgCalProjector);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        label_6 = new QLabel(dlgCalProjector);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        lineEditStatus = new QLineEdit(dlgCalProjector);
        lineEditStatus->setObjectName(QStringLiteral("lineEditStatus"));
        lineEditStatus->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditStatus->sizePolicy().hasHeightForWidth());
        lineEditStatus->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(0, 0, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(204, 204, 204, 255));
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
        lineEditStatus->setPalette(palette);
        lineEditStatus->setReadOnly(true);

        gridLayout->addWidget(lineEditStatus, 1, 2, 1, 1);

        pushButtonDone = new QPushButton(dlgCalProjector);
        pushButtonDone->setObjectName(QStringLiteral("pushButtonDone"));

        gridLayout->addWidget(pushButtonDone, 1, 3, 1, 1);

        groupBox = new QGroupBox(dlgCalProjector);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label->setPalette(palette1);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 3);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        lineEditStatusDisplay = new QLineEdit(groupBox);
        lineEditStatusDisplay->setObjectName(QStringLiteral("lineEditStatusDisplay"));
        lineEditStatusDisplay->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEditStatusDisplay->sizePolicy().hasHeightForWidth());
        lineEditStatusDisplay->setSizePolicy(sizePolicy1);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditStatusDisplay->setPalette(palette2);
        lineEditStatusDisplay->setReadOnly(true);

        gridLayout_2->addWidget(lineEditStatusDisplay, 1, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 2);

        comboBoxXPPixelSize = new QComboBox(groupBox);
        comboBoxXPPixelSize->setObjectName(QStringLiteral("comboBoxXPPixelSize"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBoxXPPixelSize->sizePolicy().hasHeightForWidth());
        comboBoxXPPixelSize->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(comboBoxXPPixelSize, 2, 2, 1, 1);

        checkBoxStep1 = new QCheckBox(groupBox);
        checkBoxStep1->setObjectName(QStringLiteral("checkBoxStep1"));

        gridLayout_2->addWidget(checkBoxStep1, 3, 0, 1, 3);

        checkBoxStep2 = new QCheckBox(groupBox);
        checkBoxStep2->setObjectName(QStringLiteral("checkBoxStep2"));

        gridLayout_2->addWidget(checkBoxStep2, 4, 0, 1, 3);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 5, 0, 1, 3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(label_4, 6, 0, 1, 3);

        pushButtonStep3 = new QPushButton(groupBox);
        pushButtonStep3->setObjectName(QStringLiteral("pushButtonStep3"));

        gridLayout_2->addWidget(pushButtonStep3, 7, 0, 1, 3);

        checkBoxStep4 = new QCheckBox(groupBox);
        checkBoxStep4->setObjectName(QStringLiteral("checkBoxStep4"));

        gridLayout_2->addWidget(checkBoxStep4, 8, 0, 1, 3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(label_5, 9, 0, 1, 3);

        checkBoxStep5 = new QCheckBox(groupBox);
        checkBoxStep5->setObjectName(QStringLiteral("checkBoxStep5"));

        gridLayout_2->addWidget(checkBoxStep5, 10, 0, 1, 3);

        pushButtonStep6 = new QPushButton(groupBox);
        pushButtonStep6->setObjectName(QStringLiteral("pushButtonStep6"));

        gridLayout_2->addWidget(pushButtonStep6, 11, 0, 1, 2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 4);


        retranslateUi(dlgCalProjector);
        QObject::connect(checkBoxStep1, SIGNAL(clicked(bool)), dlgCalProjector, SLOT(onStep1(bool)));
        QObject::connect(checkBoxStep2, SIGNAL(clicked(bool)), dlgCalProjector, SLOT(onStep2(bool)));
        QObject::connect(pushButtonStep3, SIGNAL(clicked()), dlgCalProjector, SLOT(onStep3()));
        QObject::connect(checkBoxStep4, SIGNAL(clicked(bool)), dlgCalProjector, SLOT(onStep4(bool)));
        QObject::connect(checkBoxStep5, SIGNAL(clicked(bool)), dlgCalProjector, SLOT(onStep5(bool)));
        QObject::connect(pushButtonStep6, SIGNAL(clicked()), dlgCalProjector, SLOT(onStep6()));
        QObject::connect(pushButtonDone, SIGNAL(clicked()), dlgCalProjector, SLOT(done()));

        QMetaObject::connectSlotsByName(dlgCalProjector);
    } // setupUi

    void retranslateUi(QDialog *dlgCalProjector)
    {
        dlgCalProjector->setWindowTitle(QApplication::translate("dlgCalProjector", "Calibrate XY Resolution (Projector)", 0));
        label_6->setText(QApplication::translate("dlgCalProjector", "Status:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditStatus->setToolTip(QApplication::translate("dlgCalProjector", "Status", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditStatus->setWhatsThis(QApplication::translate("dlgCalProjector", "Status - reports if printer is in motion or read for input.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditStatus->setText(QApplication::translate("dlgCalProjector", "Ready...", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonDone->setToolTip(QApplication::translate("dlgCalProjector", "Cancel or Finished", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonDone->setWhatsThis(QApplication::translate("dlgCalProjector", "Cancel to exit.", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonDone->setText(QApplication::translate("dlgCalProjector", "Cancel", 0));
        groupBox->setTitle(QApplication::translate("dlgCalProjector", "Calibrate the Projector for the desired XY Pixel Resolution", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("dlgCalProjector", "Instructions", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label->setWhatsThis(QApplication::translate("dlgCalProjector", "Instructions - For more detailed information visit www.b9creator.com", 0));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("dlgCalProjector", "The purpose of Projector Calibration is to ensure the projected image is focused and the projected pixels match the selected XY pixel size.  This is acomplished by projecting a grid pattern onto a printed grid template and adjusting the position, zoom and focus of the projector until the projected grid image matches the paper grid template.\n"
"\n"
"Go to www.b9creator.com/documentation/ to download and print the reference grid patterns.\n"
"\n"
"You must select the XY Pixel Resolution that best suits your needs.  Higher resolution produces a better surface finish but the maximum build volume is lower.\n"
"\n"
"The 3 XY Pixel resolution options are:\n"
"   High - 50 micron pixels - Build volume of 51.2 x 38.4 x200 mm (2\" x 1.5\" x 8\")\n"
"   Medium - 75 micron pixels - Build volume of 76.8 x 57.6 x 200 mm (3\" x 2.27\" x 8\")\n"
"   Low - 100 micron pixels - Build volume of 102.4 x 76.8 x 200 mm (4\" x 3\" x 8\")\n"
"\n"
"Ensure the Projector is connected via VGA or HDMI cable and display is set to \"Extende"
                        "d\" Mode.\n"
"", 0));
        label_7->setText(QApplication::translate("dlgCalProjector", "Projector Connection Status:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditStatusDisplay->setToolTip(QApplication::translate("dlgCalProjector", "Status", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditStatusDisplay->setWhatsThis(QApplication::translate("dlgCalProjector", "Status - reports if printer is in motion or read for input.", 0));
#endif // QT_NO_WHATSTHIS
        lineEditStatusDisplay->setText(QApplication::translate("dlgCalProjector", "Ready...", 0));
        label_2->setText(QApplication::translate("dlgCalProjector", "Step 1 - Select the desired XY Pixel Resolution:", 0));
        comboBoxXPPixelSize->clear();
        comboBoxXPPixelSize->insertItems(0, QStringList()
         << QApplication::translate("dlgCalProjector", "50 microns", 0)
         << QApplication::translate("dlgCalProjector", "75 microns", 0)
         << QApplication::translate("dlgCalProjector", "100 microns", 0)
        );
#ifndef QT_NO_TOOLTIP
        comboBoxXPPixelSize->setToolTip(QApplication::translate("dlgCalProjector", "XY Pixel Size", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        comboBoxXPPixelSize->setWhatsThis(QApplication::translate("dlgCalProjector", "Set the desired XY Pixel Size for this calibration.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        checkBoxStep1->setToolTip(QApplication::translate("dlgCalProjector", "Step 1", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep1->setWhatsThis(QApplication::translate("dlgCalProjector", "Step 1 of 6", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep1->setText(QApplication::translate("dlgCalProjector", "Step 2 - Ensure the VAT is in place and the Build Table and Sweeper are removed.", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxStep2->setToolTip(QApplication::translate("dlgCalProjector", "Step 2", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep2->setWhatsThis(QApplication::translate("dlgCalProjector", "Step 2 of 6", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep2->setText(QApplication::translate("dlgCalProjector", "Step 3 - Loosen the 4 screws on the back of the printer that hold projector in place.", 0));
        label_3->setText(QApplication::translate("dlgCalProjector", "Note:  The next step may take a few minutes as the projector warms up. ", 0));
        label_4->setText(QApplication::translate("dlgCalProjector", "(If using a single video output and spliter setup then see the web site for additional documentation.)", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonStep3->setToolTip(QApplication::translate("dlgCalProjector", "Step 3", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonStep3->setWhatsThis(QApplication::translate("dlgCalProjector", "Step 3 of 6", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonStep3->setText(QApplication::translate("dlgCalProjector", "Step 4 - Click to power up the projector, reset the printer and open the VAT.", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxStep4->setToolTip(QApplication::translate("dlgCalProjector", "Step 4", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep4->setWhatsThis(QApplication::translate("dlgCalProjector", "Step 4 of 6", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep4->setText(QApplication::translate("dlgCalProjector", "Step 5 - Adjust the Zoom, Focus and Position of the projector until the projector grid matches the paper template grid.", 0));
        label_5->setText(QApplication::translate("dlgCalProjector", "(The paper template should be placed printed side up on the bottom of the vat and aligned with the projected grid manually.)", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxStep5->setToolTip(QApplication::translate("dlgCalProjector", "Step 5", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep5->setWhatsThis(QApplication::translate("dlgCalProjector", "Step5 of 6", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep5->setText(QApplication::translate("dlgCalProjector", "Step 6 - Tighten the 4 projector screws and double check the projected image and focus.", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonStep6->setToolTip(QApplication::translate("dlgCalProjector", "Step 6", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonStep6->setWhatsThis(QApplication::translate("dlgCalProjector", "Step 6 of 6", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonStep6->setText(QApplication::translate("dlgCalProjector", "Step 7 - Click here to turn off the projector.", 0));
    } // retranslateUi

};

namespace Ui {
    class dlgCalProjector: public Ui_dlgCalProjector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCALPROJECTOR_H

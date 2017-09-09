/********************************************************************************
** Form generated from reading UI file 'dlgprintprep.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPRINTPREP_H
#define UI_DLGPRINTPREP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DlgPrintPrep
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditName;
    QLabel *label_2;
    QLineEdit *lineEditDescription;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *lineEditZSizeMicrons;
    QLineEdit *lineEditXYPixelSizeMicrons;
    QLabel *label_3;
    QGroupBox *groupBoxCheckList;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxStep1;
    QCheckBox *checkBoxStep2;
    QPushButton *pushButtonStep3;
    QCheckBox *checkBoxStep4;
    QCheckBox *checkBoxStep5;
    QLabel *label_Step1a;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QLCDNumber *lcdNumberTimeRequired;
    QLabel *label_5;
    QLineEdit *lineEditVolume;
    QLabel *label_10;
    QSpinBox *spinBoxLayersToPrint;
    QPushButton *pushButtonResetPrintAll;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QComboBox *comboBoxMaterial;
    QPushButton *pushButtonMatCat;
    QLabel *label_7;
    QLineEdit *lineEditTattach;
    QLabel *label_12;
    QLineEdit *lineEditNumAttach;
    QLabel *label_8;
    QLineEdit *lineEditTbase;
    QLabel *label_9;
    QLineEdit *lineEditTOver;
    QPushButton *pushButtonReleaseCycle;
    QCheckBox *checkBoxMirrored;

    void setupUi(QDialog *DlgPrintPrep)
    {
        if (DlgPrintPrep->objectName().isEmpty())
            DlgPrintPrep->setObjectName(QStringLiteral("DlgPrintPrep"));
        DlgPrintPrep->resize(618, 522);
        gridLayout_5 = new QGridLayout(DlgPrintPrep);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBox_2 = new QGroupBox(DlgPrintPrep);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEditName = new QLineEdit(groupBox_2);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditName->sizePolicy().hasHeightForWidth());
        lineEditName->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 188, 255));
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
        lineEditName->setPalette(palette);
        lineEditName->setReadOnly(true);

        gridLayout_2->addWidget(lineEditName, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEditDescription = new QLineEdit(groupBox_2);
        lineEditDescription->setObjectName(QStringLiteral("lineEditDescription"));
        sizePolicy.setHeightForWidth(lineEditDescription->sizePolicy().hasHeightForWidth());
        lineEditDescription->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditDescription->setPalette(palette1);
        lineEditDescription->setReadOnly(true);

        gridLayout_2->addWidget(lineEditDescription, 1, 1, 1, 2);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        lineEditZSizeMicrons = new QLineEdit(groupBox_2);
        lineEditZSizeMicrons->setObjectName(QStringLiteral("lineEditZSizeMicrons"));
        sizePolicy.setHeightForWidth(lineEditZSizeMicrons->sizePolicy().hasHeightForWidth());
        lineEditZSizeMicrons->setSizePolicy(sizePolicy);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditZSizeMicrons->setPalette(palette2);
        lineEditZSizeMicrons->setReadOnly(true);

        gridLayout_2->addWidget(lineEditZSizeMicrons, 3, 1, 1, 2);

        lineEditXYPixelSizeMicrons = new QLineEdit(groupBox_2);
        lineEditXYPixelSizeMicrons->setObjectName(QStringLiteral("lineEditXYPixelSizeMicrons"));
        sizePolicy.setHeightForWidth(lineEditXYPixelSizeMicrons->sizePolicy().hasHeightForWidth());
        lineEditXYPixelSizeMicrons->setSizePolicy(sizePolicy);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditXYPixelSizeMicrons->setPalette(palette3);
        lineEditXYPixelSizeMicrons->setReadOnly(true);

        gridLayout_2->addWidget(lineEditXYPixelSizeMicrons, 2, 1, 1, 2);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 1, 1, 3);

        groupBoxCheckList = new QGroupBox(DlgPrintPrep);
        groupBoxCheckList->setObjectName(QStringLiteral("groupBoxCheckList"));
        gridLayout = new QGridLayout(groupBoxCheckList);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkBoxStep1 = new QCheckBox(groupBoxCheckList);
        checkBoxStep1->setObjectName(QStringLiteral("checkBoxStep1"));

        gridLayout->addWidget(checkBoxStep1, 0, 0, 1, 3);

        checkBoxStep2 = new QCheckBox(groupBoxCheckList);
        checkBoxStep2->setObjectName(QStringLiteral("checkBoxStep2"));

        gridLayout->addWidget(checkBoxStep2, 2, 0, 1, 3);

        pushButtonStep3 = new QPushButton(groupBoxCheckList);
        pushButtonStep3->setObjectName(QStringLiteral("pushButtonStep3"));

        gridLayout->addWidget(pushButtonStep3, 3, 0, 1, 3);

        checkBoxStep4 = new QCheckBox(groupBoxCheckList);
        checkBoxStep4->setObjectName(QStringLiteral("checkBoxStep4"));

        gridLayout->addWidget(checkBoxStep4, 4, 0, 1, 3);

        checkBoxStep5 = new QCheckBox(groupBoxCheckList);
        checkBoxStep5->setObjectName(QStringLiteral("checkBoxStep5"));

        gridLayout->addWidget(checkBoxStep5, 5, 0, 1, 3);

        label_Step1a = new QLabel(groupBoxCheckList);
        label_Step1a->setObjectName(QStringLiteral("label_Step1a"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_Step1a->sizePolicy().hasHeightForWidth());
        label_Step1a->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_Step1a, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(45, 18, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBoxCheckList, 3, 1, 1, 3);

        buttonBox = new QDialogButtonBox(DlgPrintPrep);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_5->addWidget(buttonBox, 4, 1, 1, 4);

        groupBox_4 = new QGroupBox(DlgPrintPrep);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        lcdNumberTimeRequired = new QLCDNumber(groupBox_4);
        lcdNumberTimeRequired->setObjectName(QStringLiteral("lcdNumberTimeRequired"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lcdNumberTimeRequired->sizePolicy().hasHeightForWidth());
        lcdNumberTimeRequired->setSizePolicy(sizePolicy3);
        lcdNumberTimeRequired->setMinimumSize(QSize(0, 40));
        QPalette palette4;
        QBrush brush4(QColor(170, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush5(QColor(255, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush5);
        QBrush brush6(QColor(103, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush6);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        QBrush brush8(QColor(255, 255, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        lcdNumberTimeRequired->setPalette(palette4);
        lcdNumberTimeRequired->setAutoFillBackground(true);
        lcdNumberTimeRequired->setSmallDecimalPoint(false);
        lcdNumberTimeRequired->setSegmentStyle(QLCDNumber::Filled);
        lcdNumberTimeRequired->setProperty("value", QVariant(0));

        gridLayout_4->addWidget(lcdNumberTimeRequired, 0, 1, 1, 2);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        lineEditVolume = new QLineEdit(groupBox_4);
        lineEditVolume->setObjectName(QStringLiteral("lineEditVolume"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditVolume->setPalette(palette5);
        lineEditVolume->setReadOnly(true);

        gridLayout_4->addWidget(lineEditVolume, 1, 1, 1, 2);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_4->addWidget(label_10, 2, 0, 1, 1);

        spinBoxLayersToPrint = new QSpinBox(groupBox_4);
        spinBoxLayersToPrint->setObjectName(QStringLiteral("spinBoxLayersToPrint"));
        spinBoxLayersToPrint->setSingleStep(5);

        gridLayout_4->addWidget(spinBoxLayersToPrint, 2, 1, 1, 1);

        pushButtonResetPrintAll = new QPushButton(groupBox_4);
        pushButtonResetPrintAll->setObjectName(QStringLiteral("pushButtonResetPrintAll"));
        sizePolicy.setHeightForWidth(pushButtonResetPrintAll->sizePolicy().hasHeightForWidth());
        pushButtonResetPrintAll->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButtonResetPrintAll, 2, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 1, 2, 1, 2);

        groupBox_3 = new QGroupBox(DlgPrintPrep);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        comboBoxMaterial = new QComboBox(groupBox_3);
        comboBoxMaterial->setObjectName(QStringLiteral("comboBoxMaterial"));

        gridLayout_3->addWidget(comboBoxMaterial, 0, 0, 1, 1);

        pushButtonMatCat = new QPushButton(groupBox_3);
        pushButtonMatCat->setObjectName(QStringLiteral("pushButtonMatCat"));

        gridLayout_3->addWidget(pushButtonMatCat, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        lineEditTattach = new QLineEdit(groupBox_3);
        lineEditTattach->setObjectName(QStringLiteral("lineEditTattach"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditTattach->setPalette(palette6);
        lineEditTattach->setReadOnly(true);

        gridLayout_3->addWidget(lineEditTattach, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 2, 0, 1, 1);

        lineEditNumAttach = new QLineEdit(groupBox_3);
        lineEditNumAttach->setObjectName(QStringLiteral("lineEditNumAttach"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditNumAttach->setPalette(palette7);
        lineEditNumAttach->setReadOnly(true);

        gridLayout_3->addWidget(lineEditNumAttach, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 3, 0, 1, 1);

        lineEditTbase = new QLineEdit(groupBox_3);
        lineEditTbase->setObjectName(QStringLiteral("lineEditTbase"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditTbase->setPalette(palette8);
        lineEditTbase->setReadOnly(true);

        gridLayout_3->addWidget(lineEditTbase, 3, 1, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 4, 0, 1, 1);

        lineEditTOver = new QLineEdit(groupBox_3);
        lineEditTOver->setObjectName(QStringLiteral("lineEditTOver"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        lineEditTOver->setPalette(palette9);
        lineEditTOver->setReadOnly(true);

        gridLayout_3->addWidget(lineEditTOver, 4, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 1, 1, 2, 1);

        pushButtonReleaseCycle = new QPushButton(DlgPrintPrep);
        pushButtonReleaseCycle->setObjectName(QStringLiteral("pushButtonReleaseCycle"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButtonReleaseCycle->sizePolicy().hasHeightForWidth());
        pushButtonReleaseCycle->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(pushButtonReleaseCycle, 2, 3, 1, 1);

        checkBoxMirrored = new QCheckBox(DlgPrintPrep);
        checkBoxMirrored->setObjectName(QStringLiteral("checkBoxMirrored"));

        gridLayout_5->addWidget(checkBoxMirrored, 2, 2, 1, 1);

        QWidget::setTabOrder(lineEditName, lineEditDescription);
        QWidget::setTabOrder(lineEditDescription, lineEditXYPixelSizeMicrons);
        QWidget::setTabOrder(lineEditXYPixelSizeMicrons, lineEditZSizeMicrons);
        QWidget::setTabOrder(lineEditZSizeMicrons, comboBoxMaterial);
        QWidget::setTabOrder(comboBoxMaterial, pushButtonMatCat);
        QWidget::setTabOrder(pushButtonMatCat, lineEditTattach);
        QWidget::setTabOrder(lineEditTattach, lineEditNumAttach);
        QWidget::setTabOrder(lineEditNumAttach, lineEditTbase);
        QWidget::setTabOrder(lineEditTbase, lineEditTOver);
        QWidget::setTabOrder(lineEditTOver, lineEditVolume);
        QWidget::setTabOrder(lineEditVolume, spinBoxLayersToPrint);
        QWidget::setTabOrder(spinBoxLayersToPrint, pushButtonResetPrintAll);
        QWidget::setTabOrder(pushButtonResetPrintAll, pushButtonReleaseCycle);
        QWidget::setTabOrder(pushButtonReleaseCycle, checkBoxStep1);
        QWidget::setTabOrder(checkBoxStep1, checkBoxStep2);
        QWidget::setTabOrder(checkBoxStep2, pushButtonStep3);
        QWidget::setTabOrder(pushButtonStep3, checkBoxStep4);
        QWidget::setTabOrder(checkBoxStep4, checkBoxStep5);
        QWidget::setTabOrder(checkBoxStep5, buttonBox);

        retranslateUi(DlgPrintPrep);
        QObject::connect(buttonBox, SIGNAL(accepted()), DlgPrintPrep, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DlgPrintPrep, SLOT(reject()));

        QMetaObject::connectSlotsByName(DlgPrintPrep);
    } // setupUi

    void retranslateUi(QDialog *DlgPrintPrep)
    {
        DlgPrintPrep->setWindowTitle(QApplication::translate("DlgPrintPrep", "B9Creator - Print Parameters", 0));
        groupBox_2->setTitle(QApplication::translate("DlgPrintPrep", "Information", 0));
#ifndef QT_NO_TOOLTIP
        lineEditName->setToolTip(QApplication::translate("DlgPrintPrep", "Job File Name", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditName->setWhatsThis(QApplication::translate("DlgPrintPrep", "Job File Name", 0));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("DlgPrintPrep", "Description", 0));
#ifndef QT_NO_TOOLTIP
        lineEditDescription->setToolTip(QApplication::translate("DlgPrintPrep", "Job File Description", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditDescription->setWhatsThis(QApplication::translate("DlgPrintPrep", "Job File Description", 0));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("DlgPrintPrep", "Job Name:", 0));
        label_4->setText(QApplication::translate("DlgPrintPrep", "Z Layer Thickness (\302\265m)", 0));
#ifndef QT_NO_TOOLTIP
        lineEditZSizeMicrons->setToolTip(QApplication::translate("DlgPrintPrep", "Job was sliced using this layer thickness", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditZSizeMicrons->setWhatsThis(QApplication::translate("DlgPrintPrep", "Job was sliced using this layer thickness", 0));
#endif // QT_NO_WHATSTHIS
        lineEditZSizeMicrons->setText(QString());
#ifndef QT_NO_TOOLTIP
        lineEditXYPixelSizeMicrons->setToolTip(QApplication::translate("DlgPrintPrep", "Job was sliced for this XY Pixel Size", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditXYPixelSizeMicrons->setWhatsThis(QApplication::translate("DlgPrintPrep", "Job was sliced for this XY Pixel Size", 0));
#endif // QT_NO_WHATSTHIS
        lineEditXYPixelSizeMicrons->setText(QString());
        label_3->setText(QApplication::translate("DlgPrintPrep", "XY Pixel Size (\302\265m)", 0));
        groupBoxCheckList->setTitle(QApplication::translate("DlgPrintPrep", "Checklist", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxStep1->setToolTip(QApplication::translate("DlgPrintPrep", "Step 1 - Inspect the Printer.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep1->setWhatsThis(QApplication::translate("DlgPrintPrep", "Step 1 - Inspect the Printer.  Make sure everything is connected and ready to go.", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep1->setText(QApplication::translate("DlgPrintPrep", "Step 1 - Inspect the printer.  Check Printer and  Projector Power cords, USB and Video connections.", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxStep2->setToolTip(QApplication::translate("DlgPrintPrep", "Step 2 - Remove the Sweeper.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep2->setWhatsThis(QApplication::translate("DlgPrintPrep", "Step 2 - Remove the Sweeper.  The upcoming reset and repositioning to the fill position may damage the PDMS if the VAT is dry.", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep2->setText(QApplication::translate("DlgPrintPrep", "Step 2 - Ensure the VAT and Build Table are in place and the Sweeper is REMOVED.", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonStep3->setToolTip(QApplication::translate("DlgPrintPrep", "Click to reset the printer and move to the fill position.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonStep3->setWhatsThis(QApplication::translate("DlgPrintPrep", "Click to reset the printer and move to the fill position.  The Build Table and Sweeper should be removed for \"Dry Runs\"", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonStep3->setText(QApplication::translate("DlgPrintPrep", "Step 3 - Command a reset and positioning of the Build Table to the resin \"Fill Level\".", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxStep4->setToolTip(QApplication::translate("DlgPrintPrep", "Fill the VAT with Resin. DO NOT OVERFILL!", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep4->setWhatsThis(QApplication::translate("DlgPrintPrep", "Fill the VAT with Resin. DO NOT OVERFILL!  If the resin begins to run low, you can pause the print and add more.", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep4->setText(QApplication::translate("DlgPrintPrep", "Step 4 - Add the material to the VAT.  Fill up to, BUT NOT ABOVE, the BOTTOM of the Build Table.", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxStep5->setToolTip(QApplication::translate("DlgPrintPrep", "Intall the Sweeper and close the Hatch", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxStep5->setWhatsThis(QApplication::translate("DlgPrintPrep", "Intall the Sweeper and close the Hatch", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxStep5->setText(QApplication::translate("DlgPrintPrep", "Step 5 - Install the Sweeper and close the hatch.  You should be ready to begin!", 0));
        label_Step1a->setText(QApplication::translate("DlgPrintPrep", "The Projector lens should be clean and focused.", 0));
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QApplication::translate("DlgPrintPrep", "Print or Cancel the process", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonBox->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupBox_4->setTitle(QApplication::translate("DlgPrintPrep", "Time and Material Required", 0));
        label_11->setText(QApplication::translate("DlgPrintPrep", "Estimated Time (hh:mm):", 0));
#ifndef QT_NO_TOOLTIP
        lcdNumberTimeRequired->setToolTip(QApplication::translate("DlgPrintPrep", "Estimated hours and minutes to create this object.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lcdNumberTimeRequired->setWhatsThis(QApplication::translate("DlgPrintPrep", "Estimated hours and minutes to create this object.  This is an Estimate only!  Actual time may be less depending complexity of the object's shape.", 0));
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("DlgPrintPrep", "Total Print Volume (ml)", 0));
#ifndef QT_NO_TOOLTIP
        lineEditVolume->setToolTip(QApplication::translate("DlgPrintPrep", "Object's volume in milliliters", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditVolume->setWhatsThis(QApplication::translate("DlgPrintPrep", "Object's volume in milliliters", 0));
#endif // QT_NO_WHATSTHIS
        lineEditVolume->setText(QString());
        label_10->setText(QApplication::translate("DlgPrintPrep", "Total Layers to Print:", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxLayersToPrint->setToolTip(QApplication::translate("DlgPrintPrep", "Number of layers to print", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxLayersToPrint->setWhatsThis(QApplication::translate("DlgPrintPrep", "Number of layers to print", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        pushButtonResetPrintAll->setToolTip(QApplication::translate("DlgPrintPrep", "Print all Layers", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonResetPrintAll->setWhatsThis(QApplication::translate("DlgPrintPrep", "Print all Layers", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonResetPrintAll->setText(QApplication::translate("DlgPrintPrep", "Select All Layers", 0));
        groupBox_3->setTitle(QApplication::translate("DlgPrintPrep", "Material Selection", 0));
#ifndef QT_NO_TOOLTIP
        comboBoxMaterial->setToolTip(QApplication::translate("DlgPrintPrep", "Select the material to be used", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        comboBoxMaterial->setWhatsThis(QApplication::translate("DlgPrintPrep", "Select the material to be used", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        pushButtonMatCat->setToolTip(QApplication::translate("DlgPrintPrep", "Modify the Catalog", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonMatCat->setWhatsThis(QApplication::translate("DlgPrintPrep", "Modify the Catalog", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonMatCat->setText(QApplication::translate("DlgPrintPrep", "Materials Catalog...", 0));
        label_7->setText(QApplication::translate("DlgPrintPrep", "Attach (first) Layer(s) Exposure (sec)", 0));
#ifndef QT_NO_TOOLTIP
        lineEditTattach->setToolTip(QApplication::translate("DlgPrintPrep", "Exposure time for the Attach (first) Layer cure in seconds.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditTattach->setWhatsThis(QApplication::translate("DlgPrintPrep", "Exposure time for the Attach (first) Layer cure in seconds.", 0));
#endif // QT_NO_WHATSTHIS
        label_12->setText(QApplication::translate("DlgPrintPrep", "Number of Attach (first) Layers", 0));
#ifndef QT_NO_TOOLTIP
        lineEditNumAttach->setToolTip(QApplication::translate("DlgPrintPrep", "Number of Layers to cure for the above length of time", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditNumAttach->setWhatsThis(QApplication::translate("DlgPrintPrep", "Number of Layers to cure for the above length of time", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("DlgPrintPrep", "Exposure time for the initial full image cure in seconds.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_8->setWhatsThis(QApplication::translate("DlgPrintPrep", "Exposure time for the initial full image cure in seconds.", 0));
#endif // QT_NO_WHATSTHIS
        label_8->setText(QApplication::translate("DlgPrintPrep", "Initial Image Exposure (sec)", 0));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("DlgPrintPrep", "Exposure time for the secondary, perimeter, image cure in seconds.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_9->setWhatsThis(QApplication::translate("DlgPrintPrep", "Exposure time for the secondary, perimeter, image cure in seconds.", 0));
#endif // QT_NO_WHATSTHIS
        label_9->setText(QApplication::translate("DlgPrintPrep", "Variable Perimeter Exposure (sec)", 0));
        lineEditTOver->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonReleaseCycle->setToolTip(QApplication::translate("DlgPrintPrep", "Open the Release Cycle Dialog", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonReleaseCycle->setWhatsThis(QApplication::translate("DlgPrintPrep", "Open the Release Cycle Dialog", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonReleaseCycle->setText(QApplication::translate("DlgPrintPrep", "Printer Cycle Settings...", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxMirrored->setToolTip(QApplication::translate("DlgPrintPrep", "Print a \"Mirrored\" version.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxMirrored->setWhatsThis(QApplication::translate("DlgPrintPrep", "Print a \"Mirrored version, ie a \"Left Shoe\" will print as a \"Right Shoe\"", 0));
#endif // QT_NO_WHATSTHIS
        checkBoxMirrored->setText(QApplication::translate("DlgPrintPrep", "Mirrored Print", 0));
    } // retranslateUi

};

namespace Ui {
    class DlgPrintPrep: public Ui_DlgPrintPrep {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGPRINTPREP_H

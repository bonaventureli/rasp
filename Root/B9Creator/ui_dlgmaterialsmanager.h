/********************************************************************************
** Form generated from reading UI file 'dlgmaterialsmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMATERIALSMANAGER_H
#define UI_DLGMATERIALSMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgMaterialsManager
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBoxMaterial;
    QLabel *label_2;
    QLineEdit *lineEditDescription;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonDuplicate;
    QPushButton *pushButtonDelete;
    QGroupBox *groupBox_ExposureSettings;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QComboBox *comboBoxXY;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_6;
    QSpinBox *spinBoxNumberOfAttachLayers;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBoxSaveCancel;

    void setupUi(QDialog *DlgMaterialsManager)
    {
        if (DlgMaterialsManager->objectName().isEmpty())
            DlgMaterialsManager->setObjectName(QStringLiteral("DlgMaterialsManager"));
        DlgMaterialsManager->resize(387, 522);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DlgMaterialsManager->sizePolicy().hasHeightForWidth());
        DlgMaterialsManager->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(DlgMaterialsManager);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(DlgMaterialsManager);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBoxMaterial = new QComboBox(groupBox);
        comboBoxMaterial->setObjectName(QStringLiteral("comboBoxMaterial"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxMaterial->sizePolicy().hasHeightForWidth());
        comboBoxMaterial->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(comboBoxMaterial, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditDescription = new QLineEdit(groupBox);
        lineEditDescription->setObjectName(QStringLiteral("lineEditDescription"));
        sizePolicy2.setHeightForWidth(lineEditDescription->sizePolicy().hasHeightForWidth());
        lineEditDescription->setSizePolicy(sizePolicy2);
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
        lineEditDescription->setPalette(palette);
        lineEditDescription->setReadOnly(true);

        gridLayout->addWidget(lineEditDescription, 1, 1, 1, 2);

        pushButtonAdd = new QPushButton(groupBox);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));

        gridLayout->addWidget(pushButtonAdd, 2, 0, 1, 1);

        pushButtonDuplicate = new QPushButton(groupBox);
        pushButtonDuplicate->setObjectName(QStringLiteral("pushButtonDuplicate"));
        sizePolicy2.setHeightForWidth(pushButtonDuplicate->sizePolicy().hasHeightForWidth());
        pushButtonDuplicate->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButtonDuplicate, 2, 1, 1, 1);

        pushButtonDelete = new QPushButton(groupBox);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));
        sizePolicy2.setHeightForWidth(pushButtonDelete->sizePolicy().hasHeightForWidth());
        pushButtonDelete->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButtonDelete, 2, 2, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_ExposureSettings = new QGroupBox(DlgMaterialsManager);
        groupBox_ExposureSettings->setObjectName(QStringLiteral("groupBox_ExposureSettings"));
        gridLayout_2 = new QGridLayout(groupBox_ExposureSettings);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(groupBox_ExposureSettings);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        comboBoxXY = new QComboBox(groupBox_ExposureSettings);
        comboBoxXY->setObjectName(QStringLiteral("comboBoxXY"));

        gridLayout_2->addWidget(comboBoxXY, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_ExposureSettings);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(groupBox_ExposureSettings);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setDecimals(3);
        doubleSpinBox->setMinimum(0.5);
        doubleSpinBox->setMaximum(360);
        doubleSpinBox->setSingleStep(0.5);

        gridLayout_2->addWidget(doubleSpinBox, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_ExposureSettings);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        spinBoxNumberOfAttachLayers = new QSpinBox(groupBox_ExposureSettings);
        spinBoxNumberOfAttachLayers->setObjectName(QStringLiteral("spinBoxNumberOfAttachLayers"));
        spinBoxNumberOfAttachLayers->setMinimum(1);
        spinBoxNumberOfAttachLayers->setMaximum(10);

        gridLayout_2->addWidget(spinBoxNumberOfAttachLayers, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_ExposureSettings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 2);

        tableWidget = new QTableWidget(groupBox_ExposureSettings);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 4, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_ExposureSettings, 1, 0, 1, 1);

        buttonBoxSaveCancel = new QDialogButtonBox(DlgMaterialsManager);
        buttonBoxSaveCancel->setObjectName(QStringLiteral("buttonBoxSaveCancel"));
        buttonBoxSaveCancel->setLayoutDirection(Qt::LeftToRight);
        buttonBoxSaveCancel->setOrientation(Qt::Horizontal);
        buttonBoxSaveCancel->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::SaveAll);

        gridLayout_3->addWidget(buttonBoxSaveCancel, 2, 0, 1, 1);

        QWidget::setTabOrder(comboBoxMaterial, lineEditDescription);
        QWidget::setTabOrder(lineEditDescription, pushButtonAdd);
        QWidget::setTabOrder(pushButtonAdd, pushButtonDuplicate);
        QWidget::setTabOrder(pushButtonDuplicate, pushButtonDelete);
        QWidget::setTabOrder(pushButtonDelete, comboBoxXY);
        QWidget::setTabOrder(comboBoxXY, doubleSpinBox);
        QWidget::setTabOrder(doubleSpinBox, spinBoxNumberOfAttachLayers);
        QWidget::setTabOrder(spinBoxNumberOfAttachLayers, tableWidget);
        QWidget::setTabOrder(tableWidget, buttonBoxSaveCancel);

        retranslateUi(DlgMaterialsManager);
        QObject::connect(buttonBoxSaveCancel, SIGNAL(accepted()), DlgMaterialsManager, SLOT(accept()));
        QObject::connect(buttonBoxSaveCancel, SIGNAL(rejected()), DlgMaterialsManager, SLOT(reject()));

        QMetaObject::connectSlotsByName(DlgMaterialsManager);
    } // setupUi

    void retranslateUi(QDialog *DlgMaterialsManager)
    {
        DlgMaterialsManager->setWindowTitle(QApplication::translate("DlgMaterialsManager", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("DlgMaterialsManager", "Select Material", 0));
        label->setText(QApplication::translate("DlgMaterialsManager", "Material ID:", 0));
#ifndef QT_NO_TOOLTIP
        comboBoxMaterial->setToolTip(QApplication::translate("DlgMaterialsManager", "Select a Material from the Catalog", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        comboBoxMaterial->setWhatsThis(QApplication::translate("DlgMaterialsManager", "Select a Material from the Catalog to view/edit exposure timing", 0));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("DlgMaterialsManager", "Description:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditDescription->setToolTip(QApplication::translate("DlgMaterialsManager", "Description of the selected Material", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditDescription->setWhatsThis(QApplication::translate("DlgMaterialsManager", "Description of the selected Material", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        pushButtonAdd->setToolTip(QApplication::translate("DlgMaterialsManager", "Add a new Material to the Catalog", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonAdd->setWhatsThis(QApplication::translate("DlgMaterialsManager", "Add a new Material to the Catalog", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonAdd->setText(QApplication::translate("DlgMaterialsManager", "Add...", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonDuplicate->setToolTip(QApplication::translate("DlgMaterialsManager", "Add a duplicate of the selected material to the Catalog.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonDuplicate->setWhatsThis(QApplication::translate("DlgMaterialsManager", "Add a duplicate of the selected material to the Catalog.  This is good if you wish to modify an existing material.", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonDuplicate->setText(QApplication::translate("DlgMaterialsManager", "Duplicate...", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonDelete->setToolTip(QApplication::translate("DlgMaterialsManager", "Remove the selected material from the Catalog.  Default entries can not be deleted.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButtonDelete->setWhatsThis(QApplication::translate("DlgMaterialsManager", "Remove the selected material from the Catalog.  Default entries can not be deleted.", 0));
#endif // QT_NO_WHATSTHIS
        pushButtonDelete->setText(QApplication::translate("DlgMaterialsManager", "Delete Selected", 0));
        groupBox_ExposureSettings->setTitle(QApplication::translate("DlgMaterialsManager", "Material Eposure Settings", 0));
        label_3->setText(QApplication::translate("DlgMaterialsManager", "Selected XY Pixel Resolution Table", 0));
#ifndef QT_NO_TOOLTIP
        comboBoxXY->setToolTip(QApplication::translate("DlgMaterialsManager", "Select the xy resolution for data to display below.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        comboBoxXY->setWhatsThis(QApplication::translate("DlgMaterialsManager", "Select the xy resolution for data to display below.  The printer can be calibrated to these xy pixel sizes. ", 0));
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("DlgMaterialsManager", "First (attach) Layer(s) Cure Time(sec):", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox->setToolTip(QApplication::translate("DlgMaterialsManager", "Time to cure the intial (attach) layer.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        doubleSpinBox->setWhatsThis(QApplication::translate("DlgMaterialsManager", "Time to cure the intial (attach) layer.  This time is independent of the layer thickness as we always start at zero.  This is to provide a solid reference for the rest of the layers.", 0));
#endif // QT_NO_WHATSTHIS
        label_6->setText(QApplication::translate("DlgMaterialsManager", "Number of First (attach) Layers:", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxNumberOfAttachLayers->setToolTip(QApplication::translate("DlgMaterialsManager", "Number of Layers to cure for the above length of time", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxNumberOfAttachLayers->setWhatsThis(QApplication::translate("DlgMaterialsManager", "Number of Layers to cure for the above length of time", 0));
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("DlgMaterialsManager", "For the selected XY Pixel Resolution Table, enter the base exposure time and the additional over cure exposure time for each layer.  Enter Zero if printing at this layer thickness is not allowed.", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgMaterialsManager", "T-Base (sec)", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DlgMaterialsManager", "T-Over (sec)", 0));
#ifndef QT_NO_TOOLTIP
        tableWidget->setToolTip(QApplication::translate("DlgMaterialsManager", "Exposure settings for a given material and xy pixel size.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tableWidget->setWhatsThis(QApplication::translate("DlgMaterialsManager", "Exposure settings for a given material and xy pixel size.  Each possible layer thickness and it's associated timing is shown.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        buttonBoxSaveCancel->setToolTip(QApplication::translate("DlgMaterialsManager", "Click Save All to save your changes or Cancel to discard them.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonBoxSaveCancel->setWhatsThis(QApplication::translate("DlgMaterialsManager", "Click Save All to save your changes or Cancel to discard them.", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class DlgMaterialsManager: public Ui_DlgMaterialsManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGMATERIALSMANAGER_H

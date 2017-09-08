/********************************************************************************
** Form generated from reading UI file 'b9slice.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B9SLICE_H
#define UI_B9SLICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_B9Slice
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *CurrentLayout;
    QPushButton *LayoutBrowse;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *jobname;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *jobdesc;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *imgsize;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *xypixelsize;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *thicknesscombo;
    QPushButton *SliceButton;

    void setupUi(QMainWindow *B9Slice)
    {
        if (B9Slice->objectName().isEmpty())
            B9Slice->setObjectName(QStringLiteral("B9Slice"));
        B9Slice->resize(386, 245);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(B9Slice->sizePolicy().hasHeightForWidth());
        B9Slice->setSizePolicy(sizePolicy);
        B9Slice->setMaximumSize(QSize(386, 322));
        centralwidget = new QWidget(B9Slice);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        CurrentLayout = new QLineEdit(centralwidget);
        CurrentLayout->setObjectName(QStringLiteral("CurrentLayout"));
        CurrentLayout->setEnabled(true);
        CurrentLayout->setReadOnly(true);

        horizontalLayout->addWidget(CurrentLayout);

        LayoutBrowse = new QPushButton(centralwidget);
        LayoutBrowse->setObjectName(QStringLiteral("LayoutBrowse"));

        horizontalLayout->addWidget(LayoutBrowse);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        jobname = new QLineEdit(groupBox);
        jobname->setObjectName(QStringLiteral("jobname"));

        horizontalLayout_2->addWidget(jobname);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        jobdesc = new QLineEdit(groupBox);
        jobdesc->setObjectName(QStringLiteral("jobdesc"));

        horizontalLayout_3->addWidget(jobdesc);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        imgsize = new QLineEdit(groupBox);
        imgsize->setObjectName(QStringLiteral("imgsize"));
        imgsize->setEnabled(false);

        horizontalLayout_6->addWidget(imgsize);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        xypixelsize = new QLineEdit(groupBox);
        xypixelsize->setObjectName(QStringLiteral("xypixelsize"));
        xypixelsize->setEnabled(false);

        horizontalLayout_5->addWidget(xypixelsize);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_4);

        thicknesscombo = new QComboBox(groupBox);
        thicknesscombo->setObjectName(QStringLiteral("thicknesscombo"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(thicknesscombo->sizePolicy().hasHeightForWidth());
        thicknesscombo->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(thicknesscombo);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox);

        SliceButton = new QPushButton(centralwidget);
        SliceButton->setObjectName(QStringLiteral("SliceButton"));

        verticalLayout->addWidget(SliceButton);

        B9Slice->setCentralWidget(centralwidget);

        retranslateUi(B9Slice);
        QObject::connect(LayoutBrowse, SIGNAL(clicked()), B9Slice, SLOT(LoadLayout()));
        QObject::connect(SliceButton, SIGNAL(clicked()), B9Slice, SLOT(Slice()));

        QMetaObject::connectSlotsByName(B9Slice);
    } // setupUi

    void retranslateUi(QMainWindow *B9Slice)
    {
        B9Slice->setWindowTitle(QApplication::translate("B9Slice", "B9Creator - Slice", 0));
        label->setText(QApplication::translate("B9Slice", "Layout File:", 0));
#ifndef QT_NO_TOOLTIP
        CurrentLayout->setToolTip(QApplication::translate("B9Slice", "Selected Layout File", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        CurrentLayout->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        CurrentLayout->setWhatsThis(QApplication::translate("B9Slice", "Selected Layout File", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        LayoutBrowse->setToolTip(QApplication::translate("B9Slice", "Select Layout file to slice", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        LayoutBrowse->setWhatsThis(QApplication::translate("B9Slice", "Select Layout file to slice", 0));
#endif // QT_NO_WHATSTHIS
        LayoutBrowse->setText(QApplication::translate("B9Slice", "Browse...", 0));
        groupBox->setTitle(QApplication::translate("B9Slice", "Job Properties", 0));
        label_2->setText(QApplication::translate("B9Slice", "Job Name:", 0));
#ifndef QT_NO_TOOLTIP
        jobname->setToolTip(QApplication::translate("B9Slice", "Enter short  job name here", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        jobname->setWhatsThis(QApplication::translate("B9Slice", "Enter short  job name here", 0));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("B9Slice", "Job Description:", 0));
#ifndef QT_NO_TOOLTIP
        jobdesc->setToolTip(QApplication::translate("B9Slice", "Enter the job description here", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        jobdesc->setWhatsThis(QApplication::translate("B9Slice", "Enter the job description here", 0));
#endif // QT_NO_WHATSTHIS
        label_6->setText(QApplication::translate("B9Slice", "Image Resolution:", 0));
#ifndef QT_NO_TOOLTIP
        imgsize->setToolTip(QApplication::translate("B9Slice", "The layout's saved dimensions", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        imgsize->setWhatsThis(QApplication::translate("B9Slice", "The layout's saved dimensions", 0));
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("B9Slice", "Pixel Size (\302\265m):", 0));
#ifndef QT_NO_TOOLTIP
        xypixelsize->setToolTip(QApplication::translate("B9Slice", "The x & y size of each sliced pixel in microns", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        xypixelsize->setWhatsThis(QApplication::translate("B9Slice", "The x & y size of each sliced pixel in microns", 0));
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("B9Slice", "Layer Thickness (\302\265m):", 0));
        thicknesscombo->clear();
        thicknesscombo->insertItems(0, QStringList()
         << QApplication::translate("B9Slice", "101.6", 0)
         << QApplication::translate("B9Slice", "95.25", 0)
         << QApplication::translate("B9Slice", "88.9", 0)
         << QApplication::translate("B9Slice", "82.55", 0)
         << QApplication::translate("B9Slice", "76.2", 0)
         << QApplication::translate("B9Slice", "69.85", 0)
         << QApplication::translate("B9Slice", "63.5", 0)
         << QApplication::translate("B9Slice", "57.15", 0)
         << QApplication::translate("B9Slice", "50.8", 0)
         << QApplication::translate("B9Slice", "44.45", 0)
         << QApplication::translate("B9Slice", "38.1", 0)
         << QApplication::translate("B9Slice", "31.75", 0)
         << QApplication::translate("B9Slice", "25.4", 0)
         << QApplication::translate("B9Slice", "19.05", 0)
         << QApplication::translate("B9Slice", "12.7", 0)
         << QApplication::translate("B9Slice", "6.35", 0)
        );
#ifndef QT_NO_TOOLTIP
        thicknesscombo->setToolTip(QApplication::translate("B9Slice", "Select the slice thickness in microns", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        thicknesscombo->setWhatsThis(QApplication::translate("B9Slice", "Select the slice thickness in microns", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        SliceButton->setToolTip(QApplication::translate("B9Slice", "Slice the layout", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        SliceButton->setWhatsThis(QApplication::translate("B9Slice", "Slice the layout", 0));
#endif // QT_NO_WHATSTHIS
        SliceButton->setText(QApplication::translate("B9Slice", "Slice...", 0));
    } // retranslateUi

};

namespace Ui {
    class B9Slice: public Ui_B9Slice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B9SLICE_H

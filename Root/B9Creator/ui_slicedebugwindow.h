/********************************************************************************
** Form generated from reading UI file 'slicedebugwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLICEDEBUGWINDOW_H
#define UI_SLICEDEBUGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *debuglayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *slicepick;
    QCheckBox *normalBox;
    QCheckBox *OutlineBox;
    QCheckBox *ConnectionBox;
    QCheckBox *FillBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(677, 534);
        horizontalLayout = new QHBoxLayout(Form);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        debuglayout = new QVBoxLayout();
        debuglayout->setObjectName(QStringLiteral("debuglayout"));
        horizontalSpacer = new QSpacerItem(200, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        debuglayout->addItem(horizontalSpacer);


        horizontalLayout->addLayout(debuglayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoRepeat(true);
        pushButton->setAutoRepeatInterval(10);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setAutoRepeat(true);
        pushButton_2->setAutoRepeatInterval(10);

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        slicepick = new QLineEdit(Form);
        slicepick->setObjectName(QStringLiteral("slicepick"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(slicepick->sizePolicy().hasHeightForWidth());
        slicepick->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(slicepick);

        normalBox = new QCheckBox(Form);
        normalBox->setObjectName(QStringLiteral("normalBox"));

        verticalLayout->addWidget(normalBox);

        OutlineBox = new QCheckBox(Form);
        OutlineBox->setObjectName(QStringLiteral("OutlineBox"));

        verticalLayout->addWidget(OutlineBox);

        ConnectionBox = new QCheckBox(Form);
        ConnectionBox->setObjectName(QStringLiteral("ConnectionBox"));

        verticalLayout->addWidget(ConnectionBox);

        FillBox = new QCheckBox(Form);
        FillBox->setObjectName(QStringLiteral("FillBox"));

        verticalLayout->addWidget(FillBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Form);
        QObject::connect(slicepick, SIGNAL(textEdited(QString)), Form, SLOT(GoToSlice(QString)));
        QObject::connect(pushButton, SIGNAL(clicked()), Form, SLOT(PrevSlice()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Form, SLOT(NextSlice()));
        QObject::connect(normalBox, SIGNAL(stateChanged(int)), Form, SLOT(RefreshOptions()));
        QObject::connect(OutlineBox, SIGNAL(stateChanged(int)), Form, SLOT(RefreshOptions()));
        QObject::connect(ConnectionBox, SIGNAL(stateChanged(int)), Form, SLOT(RefreshOptions()));
        QObject::connect(FillBox, SIGNAL(stateChanged(int)), Form, SLOT(RefreshOptions()));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Slice Viewer", 0));
        pushButton->setText(QApplication::translate("Form", "Prev", 0));
        pushButton_2->setText(QApplication::translate("Form", "Next", 0));
        slicepick->setText(QString());
        normalBox->setText(QApplication::translate("Form", "Normals", 0));
        OutlineBox->setText(QApplication::translate("Form", "Outlines", 0));
        ConnectionBox->setText(QApplication::translate("Form", "Connections", 0));
        FillBox->setText(QApplication::translate("Form", "Fills", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLICEDEBUGWINDOW_H

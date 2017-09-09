/********************************************************************************
** Form generated from reading UI file 'aboutbox.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTBOX_H
#define UI_ABOUTBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutbox
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *aboutbox)
    {
        if (aboutbox->objectName().isEmpty())
            aboutbox->setObjectName(QStringLiteral("aboutbox"));
        aboutbox->setWindowModality(Qt::NonModal);
        aboutbox->setEnabled(true);
        aboutbox->resize(320, 240);
        verticalLayout = new QVBoxLayout(aboutbox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(aboutbox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setOpenExternalLinks(true);

        verticalLayout->addWidget(textBrowser);


        retranslateUi(aboutbox);

        QMetaObject::connectSlotsByName(aboutbox);
    } // setupUi

    void retranslateUi(QWidget *aboutbox)
    {
        aboutbox->setWindowTitle(QApplication::translate("aboutbox", "About B9Editor", 0));
    } // retranslateUi

};

namespace Ui {
    class aboutbox: public Ui_aboutbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTBOX_H

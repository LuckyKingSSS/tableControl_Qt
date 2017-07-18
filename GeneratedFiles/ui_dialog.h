/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vlMain;
    QHBoxLayout *horizontalLayout;
    QLabel *lblTest;
    QLineEdit *leName;
    QPushButton *btnAdd;
    QHBoxLayout *hlTest;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 230, 80));
        vlMain = new QVBoxLayout(verticalLayoutWidget);
        vlMain->setSpacing(0);
        vlMain->setContentsMargins(11, 11, 11, 11);
        vlMain->setObjectName(QStringLiteral("vlMain"));
        vlMain->setContentsMargins(5, 0, 5, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 10, 20, 10);
        lblTest = new QLabel(verticalLayoutWidget);
        lblTest->setObjectName(QStringLiteral("lblTest"));

        horizontalLayout->addWidget(lblTest);

        leName = new QLineEdit(verticalLayoutWidget);
        leName->setObjectName(QStringLiteral("leName"));

        horizontalLayout->addWidget(leName);

        btnAdd = new QPushButton(verticalLayoutWidget);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        horizontalLayout->addWidget(btnAdd);


        vlMain->addLayout(horizontalLayout);

        hlTest = new QHBoxLayout();
        hlTest->setSpacing(0);
        hlTest->setObjectName(QStringLiteral("hlTest"));

        vlMain->addLayout(hlTest);

#ifndef QT_NO_SHORTCUT
        lblTest->setBuddy(leName);
#endif // QT_NO_SHORTCUT

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Test Tab Dialog", 0));
        lblTest->setText(QApplication::translate("Dialog", "Name", 0));
        btnAdd->setText(QApplication::translate("Dialog", "Add Tab", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

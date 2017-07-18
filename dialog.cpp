#include "dialog.h"
#include "ui_dialog.h"
#include "ccustomtabwidget.h"
#include <QLabel>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setLayout(ui->vlMain);

    m_tabWidget = new CCustomTabWidget();
    m_tabWidget->setObjectName(QString::fromUtf8("CCustomTabWidget"));

    ui->hlTest->addWidget(m_tabWidget);
    QLabel *btna= new QLabel();
    btna->setText(QString::fromUtf8("内容区 1"));

    m_tabWidget->AddTab(QString::fromUtf8("标题 1"), btna);
    QLabel *btna1= new QLabel();
    btna1->setText(QString::fromUtf8("内容区 2"));

    m_tabWidget->AddTab(QString::fromUtf8("test tab title 2"), btna1);

    ui->leName->setVisible(false);
}

Dialog::~Dialog()
{
    delete m_tabWidget;
    delete ui;
}

void Dialog::on_btnAdd_clicked()
{
    static int i = 3;
    QLabel *btna= new QLabel();
    btna->setText(QString("Test widget %1").arg(i));
    m_tabWidget->AddTab(QString("Test title %1").arg(i), btna);
    i++;
}

void Dialog::on_btnDel_clicked()
{
//    m_tabWidget->RemoveTab(0);
//    if (m_listTab.size() > 0)
//    {
//        ui->hlTabbar->removeWidget(m_listTab.at(0));
//        delete m_listTab.at(0);
//        m_listTab.removeAt(0);
////        ui->hlTabbar->update();
//    }
}

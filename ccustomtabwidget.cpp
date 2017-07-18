#include "ccustomtabwidget.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QStackedLayout>
#include <QDebug>
#include <QStyleOption>
#include <QPainter>

CCustomTabButton::CCustomTabButton(QWidget *parent):
    QPushButton(parent)
{

    this->setCheckable(true);
    m_btnClose = new QPushButton(this);
    m_btnClose->setObjectName(QString::fromUtf8("CCustomTabCloseButton"));
    m_btnClose->setVisible(false);

    m_btnClose->setGeometry(QRect(this->width()-16,0,16,16));
    connect(m_btnClose, SIGNAL(clicked()), this, SLOT(on_btnClose_clicked()));
}

CCustomTabButton::~CCustomTabButton()
{
    delete m_btnClose;
}

void CCustomTabButton::resizeEvent(QResizeEvent * event)
{
    m_btnClose->setGeometry(QRect(this->width()-16,0,16,16));

}

void CCustomTabButton::mousePressEvent(QMouseEvent * event)
{
    emit clicked(m_nIndex);
}

void CCustomTabButton::enterEvent ( QEvent * event )
{
    QPushButton::enterEvent(event);

    m_btnClose->setVisible(true);
}

void CCustomTabButton::leaveEvent ( QEvent * event )
{
    QPushButton::leaveEvent(event);

    m_btnClose->setVisible(false);

}

void CCustomTabButton::on_btnClose_clicked()
{
    emit closeClicked(m_nIndex);
}

void CCustomTabButton::setText(QString text)
{
    QPushButton::setText(text);
    this->setToolTip(text);
}



/***
  CCustomTabWidget
**/
CCustomTabWidget::CCustomTabWidget(QWidget *parent) :
    QWidget(parent)
{
    QVBoxLayout *vlMain = new QVBoxLayout();
    vlMain->setSpacing(0);
    vlMain->setMargin(0);
    this->setLayout(vlMain);
    m_lblTabbar = new QLabel();
    m_lblTabbar->setObjectName(QString::fromUtf8("CCustomTabBar"));

    m_hlTabbar = new QHBoxLayout();
    m_hlTabbar->setSpacing(0);
    m_hlTabbar->setMargin(0);
    m_hlTabbar->setContentsMargins(5,0,5,0);
    m_hlTabbar->addStretch();
    m_lblTabbar->setLayout(m_hlTabbar);

    vlMain->addWidget(m_lblTabbar);

    m_stackWidget = new QStackedLayout();
    vlMain->addLayout(m_stackWidget);
}

CCustomTabWidget::~CCustomTabWidget()
{
    for (int i = 0; i < m_listTabButton.size(); i++)
    {
        delete m_listTabButton.at(i);
    }
    m_listTabButton.clear();

    for (int i = 0; i < m_stackWidget->count(); i++)
    {
        delete m_stackWidget->widget(i);
    }

    delete m_lblTabbar;
    delete m_stackWidget;

}

void CCustomTabWidget::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void CCustomTabWidget::on_tabbar_closeClicked(int nIndex)
{
    if (nIndex < 0 || nIndex >= m_listTabButton.size())
    {
        qDebug()<<"CCustomTabWidget::on_tabbar_closeClicked error!!!"<<nIndex;
        return;
    }

    this->RemoveTab(nIndex);
}

void CCustomTabWidget::on_tabbar_clicked(int nIndex)
{
    if (nIndex < 0 || nIndex >= m_listTabButton.size())
    {
        qDebug()<<"CCustomTabWidget::on_tabbar_clicked error!!!"<<nIndex;
        return;
    }

    this->SetCurrentIndex(nIndex);
}

QWidget* CCustomTabWidget::widget(int nIndex)
{
    if (nIndex < 0 || nIndex >= m_listTabButton.size())
    {
         return NULL;
    }

    return m_stackWidget->widget(nIndex);
}

void CCustomTabWidget::AddTab(QString title, QWidget *widget)
{
    CCustomTabButton *btn = new CCustomTabButton();
    btn->setObjectName(QString::fromUtf8("CCustomTabButton"));
    connect(btn, SIGNAL(clicked(int)), this, SLOT(on_tabbar_clicked(int)));
    connect(btn, SIGNAL(closeClicked(int)), this, SLOT(on_tabbar_closeClicked(int)));
    btn->setText(title);
    int nIndex = m_listTabButton.size();
    btn->setIndex(nIndex);

    m_hlTabbar->insertWidget(nIndex,btn);
    m_listTabButton.append(btn);

    m_stackWidget->addWidget(widget);


    this->SetCurrentIndex(nIndex);
}

void CCustomTabWidget::RemoveTab(int index)
{
    if (index < 0 || index >= m_listTabButton.size())
    {
        qDebug()<<"CCustomTabWidget::RemoveTab error!!!"<<index;
        return;
    }

    CCustomTabButton *btn = m_listTabButton.at(index);
    m_hlTabbar->removeWidget(btn);
    m_listTabButton.removeAt(index);
    delete btn;

    QWidget * widget = m_stackWidget->widget(index);
    m_stackWidget->removeWidget(widget);
    delete widget;

    if (m_listTabButton.size() > 0)
    {
        int nCurrIndex = index-1 >= 0?index-1 :0;

        this->SetCurrentIndex(nCurrIndex);
    }
}

void CCustomTabWidget::Clear()
{
    for (int i = 0; i < m_listTabButton.size(); i++)
    {
        m_hlTabbar->removeWidget(m_listTabButton.at(i));
        delete m_listTabButton.at(i);
    }
    m_listTabButton.clear();

    for (int i = 0; i < m_stackWidget->count(); i++)
    {
        QWidget *widget = m_stackWidget->widget(0);
        m_stackWidget->removeWidget(widget);
        delete widget;
    }

}

void CCustomTabWidget::SetCurrentWidget(QWidget *widget)
{
    if (widget == NULL)
    {
        return;
    }

    for (int i = 0; i < m_stackWidget->count(); i++)
    {
        if(m_stackWidget->widget(i) == widget)
        {
            this->SetCurrentIndex(i);
            break;
        }
    }

}

void CCustomTabWidget::SetCurrentIndex(int index)
{
    if (index < 0 || index >= m_listTabButton.size())
    {
        qDebug()<<"CCustomTabWidget::SetCurrentTab error!!!"<<index;
        return;
    }

    m_nCurrentIndex = index;
    if (m_listTabButton.size() == 1)
    {
        m_lblTabbar->setVisible(false);
    }
    else
    {
        m_lblTabbar->setVisible(true);
    }

    for (int i = 0; i < m_listTabButton.size(); i++)
    {
        m_listTabButton.at(i)->setIndex(i);
        m_listTabButton.at(i)->setVisible(true);

        if (i == m_nCurrentIndex)
        {
            m_listTabButton.at(i)->setChecked(true);
            qDebug()<<"checked:"<<i;
        }
        else
        {
            m_listTabButton.at(i)->setChecked(false);
        }
    }
    m_stackWidget->setCurrentIndex(m_nCurrentIndex);
}

int CCustomTabWidget::CurrentIndex()
{
    return m_nCurrentIndex;
}

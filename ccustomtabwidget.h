#ifndef CCUSTOMTABWIDGET_H
#define CCUSTOMTABWIDGET_H

#include <QtWidgets\QWidget>
#include <QtWidgets\QPushButton>

class QLabel;
class QStackedLayout;
class QHBoxLayout;

class CCustomTabButton :public QPushButton
{
    Q_OBJECT
public:
    explicit CCustomTabButton(QWidget *parent = 0);
    ~CCustomTabButton();

    void setText(QString text);
    void setIndex(int nIndex){
        m_nIndex = nIndex;
    }
    int getIndex(){
        return m_nIndex;
    }

signals:
    void clicked(int nIndex);
    void closeClicked(int nIndex);
protected:
    void resizeEvent(QResizeEvent * event);
    void mousePressEvent(QMouseEvent * event);
    void enterEvent(QEvent * event );
    void leaveEvent(QEvent * event );

private slots:
    void on_btnClose_clicked();
private:
    QPushButton * m_btnClose;
    int m_nIndex;
 };

class CCustomTabWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CCustomTabWidget(QWidget *parent = 0);
    ~CCustomTabWidget();

    void AddTab(QString title, QWidget *widget);
    void RemoveTab(int index);
    void Clear();

    void SetCurrentWidget(QWidget *widget);
    void SetCurrentIndex(int index);
    int CurrentIndex();
    int count()
    {
        return m_listTabButton.count();
    }
    QWidget* widget(int nIndex);

protected:
    void paintEvent(QPaintEvent *);
signals:

private slots:
    void on_tabbar_closeClicked(int nIndex);
    void on_tabbar_clicked(int nIndex);

private:
    QList<CCustomTabButton *> m_listTabButton;
    QHBoxLayout *m_hlTabbar;
    QLabel *m_lblTabbar;
    QStackedLayout *m_stackWidget;
    int m_nCurrentIndex;
};

#endif // CCUSTOMTABWIDGET_H

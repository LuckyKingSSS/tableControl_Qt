#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QList>

namespace Ui {
    class Dialog;
}

class CCustomTabWidget;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_btnAdd_clicked();

    void on_btnDel_clicked();

private:
    Ui::Dialog *ui;

    CCustomTabWidget *m_tabWidget;
//    QList<QPushButton*> m_listTab;
};

#endif // DIALOG_H

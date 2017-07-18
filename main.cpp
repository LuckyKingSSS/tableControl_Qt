#include <QApplication>
#include "dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString stylesheet = "#CCustomTabButton {max-height:30px; min-height:20px; border-image: url(:/skin/skin/tab_btn_bg_normal.png)  8 8 2 4; border-width:8px 8px 2px 4px;background-color: transparent;color:black;} "
            "#CCustomTabButton:hover {border-image: url(:/skin/skin/tab_btn_bg_hover.png) 8 8 4 4; border-width:8px 8px 4px 4px;} "
            "#CCustomTabButton:checked {border-image: url(:/skin/skin/tab_btn_bg_checked.png)  8 8 2 4; border-width:8px 8px 2px 4px;} "
            "#CCustomTabCloseButton{border-image: url(:/skin/skin/tab_btn_close_normal.png);}"
            "#CCustomTabCloseButton:hover{border-image: url(:/skin/skin/tab_btn_close_hover.png);}"
            "#CCustomTabBar{min-height:30px;background:transparent;border-bottom:1px solid #cacaca; } "
            "CCustomTabWidget{border-image: url(:/skin/skin/tab_bg1.png) 30; border-width:30px;}"
            ;
    a.setStyleSheet(stylesheet);

    Dialog w;
    w.show();

    return a.exec();
}

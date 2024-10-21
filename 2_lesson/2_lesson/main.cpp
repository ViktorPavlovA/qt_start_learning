#include "mainwindow.h"

#include <QApplication>
#include <QIcon>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QString link2icon = "/home/techtrans/Desktop/gitmy/qt_start_learning/1_lesson/ex1/ex1/icon/1.jpg";

    QIcon iconWindow(link2icon);
    w.setWindowTitle("2_lesson");
    w.setWindowIcon(iconWindow);
    w.show();

    return a.exec();
}

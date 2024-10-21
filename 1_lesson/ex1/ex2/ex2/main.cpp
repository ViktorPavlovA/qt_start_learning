#include <QApplication>
#include <QPushButton>
#include <iostream>
#include <vector>
#include <QFont>
#include <QString>
#include <QIcon>
#include <QWidget>
#include <QDir>


int main(int argc, char **argv) {

     QApplication app (argc, argv);
     QWidget window;

     QString pth = "../ex1/icon/1.jpg";

     std::cout << pth.toStdString() << std::endl;

     window.setFixedSize(100,50);

     QPushButton button ("");

     QFont font ("Courier");
     QIcon icon(pth);

     std::vector<int> my_vector(10,10);
     for (int i = 0; i < static_cast<int>(my_vector.size()); i++){
        std::cout << i <<":"<< my_vector[i] << std::endl;
     }

     button.setText("lala");
     button.setToolTip("Notice");
     button.setFont(font);
     button.setIcon(icon);
     button.show();

     return app.exec();
}

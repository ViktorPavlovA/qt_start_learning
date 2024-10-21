#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QImage>
#include <QVector>
#include <QQueue>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BrowserButton_clicked()
{
    // choose img
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open file"), QDir::homePath(),tr("Images (*.png *.xpm *.jpg"));

    //open promt and display image
    if (!fileName.isEmpty()){
        QMessageBox::information(this,"path to file", fileName);
        QImage img(fileName);
        QPixmap pix = QPixmap::fromImage(img);


        // get label dimensions
        int w = ui -> pictureLabel ->width();
        int h = ui -> pictureLabel ->height();

        ui -> pictureLabel -> setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));

        // get h,w and create empty binary matrix
        unsigned int cols = img.width();
        unsigned int rows = img.width();
        unsigned int numBlackPixels = 0;
        QVector<QVector<int>>imgArray(rows,QVector<int>(cols,0));



    }
}


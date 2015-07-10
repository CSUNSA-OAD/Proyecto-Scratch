#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myPix = new QPixmap(ui->mylabel->size());
    myPix->fill();
    myPainter = new QPainter(myPix);
    //QPicture * myImage=new QPicture();
    QImage myImage("imagenes/gato.png");

    myPainter->drawImage(50,80,myImage);
    myPainter->end();
    ui->mylabel->setPixmap(*myPix);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    myPix->fill();
    myPainter = new QPainter(myPix);
    QImage myImage("imagenes/gato.png");

    myPainter->drawImage(100,80,myImage);
    myPainter->end();
    ui->mylabel->setPixmap(*myPix);
}

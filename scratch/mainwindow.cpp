#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QPainter>

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
    myPainter = new QPainter(myPix);//pizaaraa
    QImage myImage("imagenes/gato.png");
    myPainter->drawImage(50,150,myImage);
    myPainter->end();
    ui->mylabel->setPixmap(*myPix);
}

void MainWindow::on_pushButton_2_clicked()
{/*
   QPixmap pix(*ui->mylabel->pixmap());
   QMatrix rm;
   rm.rotate(90);
   pix = pix.transformed(rm);
   ui->mylabel->setPixmap(pix);*/

    myPix->fill();
    myPainter = new QPainter(myPix);//pizaaraa
    QImage myImage("imagenes/gato.png");
    myPainter->translate(150,-60);
    myPainter->rotate(45);
    myPainter->drawImage(50,150,myImage);
    myPainter->end();
    ui->mylabel->setPixmap(*myPix);
}




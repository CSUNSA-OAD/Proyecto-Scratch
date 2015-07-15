#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QPainter>
#include <QPicture>
#include <QMatrix>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    //void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    //void on_lineEdit_editingFinished();

private:
    QPixmap * myPix;
    Ui::MainWindow *ui;
    QPainter * myPainter;
};

#endif // MAINWINDOW_H

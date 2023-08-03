#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include <QDebug>
#include <QEvent>
#include <QMouseEvent>
#include <QPoint>
#include<QPen>
#include<QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MousePressed = false;

    value= QRandomGenerator::global()->bounded(0, 500);
    qDebug()<<value;
    value1= QRandomGenerator::global()->bounded(0, 500);
    qDebug()<<value1;
    value2= QRandomGenerator::global()->bounded(0, 500);
    qDebug()<<value2;
    value3= QRandomGenerator::global()->bounded(0, 500);
    qDebug()<<value3;
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *event)
{
     QPainter painter(this);
     painter.drawLine(value,value1,value2,value3);
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,864,672);
    ui->graphicsView->setScene(scene);
    scene->addRect(scene->sceneRect());


    jugador = new pacman;
    scene->addItem(jugador);
    jugador->posicion(96,288);

    topbar = new longl;
    scene->addItem(topbar);
    topbar->posicion(0,0);

    botbar = new longl;
    scene->addItem(botbar);
    botbar->posicion(0,576);

    leftm = new medium;
    scene->addItem(leftm);
    leftm->posicion(192,192);

    rightm = new medium;
    scene->addItem(rightm);
    rightm->posicion(384,384);

    lefttopb = new vertical;
    scene->addItem(lefttopb);
    lefttopb->posicion(0,96);

    leftbotb = new vertical;
    scene->addItem(leftbotb);
    leftbotb->posicion(0,384);

    righttopb = new vertical;
    scene->addItem(righttopb);
    righttopb->posicion(768,96);

    rightbotb = new vertical;
    scene->addItem(rightbotb);
    rightbotb->posicion(768,384);

    midleft = new vertical;
    scene->addItem(midleft);
    midleft->posicion(192,288);

    midright = new vertical;
    scene->addItem(midright);
    midright->posicion(576,192);

}

MainWindow::~MainWindow()
{
    delete ui;
}


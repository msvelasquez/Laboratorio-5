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

void MainWindow::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_F4){ close(); }
    if(event->key()==Qt::Key_D){
        if(jugador->getX()>=(768)){ jugador->posicion(0,jugador->getY()); }else{
        jugador->setX(jugador->getX()+vel);}
    }
    if(event->key()==Qt::Key_A){
        if(jugador->getX()<=(0)){ jugador->posicion(768,jugador->getY()); }else{
        jugador->setX(jugador->getX()-vel);}
    }
    if(event->key()==Qt::Key_S && jugador->getY()<(576)){
        jugador->setY(jugador->getY()+vel);
    }
    if(event->key()==Qt::Key_W && jugador->getY()>(0)){
        jugador->setY(jugador->getY()-vel);
    }
    jugador->posicion();
}


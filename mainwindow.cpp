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
}

MainWindow::~MainWindow()
{
    delete ui;
}


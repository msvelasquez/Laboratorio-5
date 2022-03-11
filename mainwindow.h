#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include "pacman.h"
#include "vertical.h"
#include "long.h"
#include "medium.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    pacman *jugador;
    longl *topbar;
    longl *botbar;
    medium *leftm;
    medium *rightm;
    vertical *lefttopb;
    vertical *leftbotb;
    vertical *righttopb;
    vertical *rightbotb;
    vertical *midleft;
    vertical *midright;
};
#endif // MAINWINDOW_H

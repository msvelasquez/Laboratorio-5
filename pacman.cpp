#include "pacman.h"

void pacman::setX(int newX)
{
    x = newX;
}

void pacman::setY(int newY)
{
    y = newY;
}

int pacman::getX() const
{
    return x;
}

int pacman::getY() const
{
    return y;
}

void pacman::posicion()
{
    setPos(x,y);
}

void pacman::posicion(int newX,int newY)
{
    x=newX;
    y=newY;
    setPos(x,y);
}

pacman::pacman(QGraphicsItem *carr):QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/pac/bola.png"));
}

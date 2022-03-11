#include "vertical.h"

void vertical::setX(int newX)
{
    x = newX;
}

void vertical::setY(int newY)
{
    y = newY;
}

int vertical::getX() const
{
    return x;
}

int vertical::getY() const
{
    return y;
}

void vertical::posicion()
{
    setPos(x,y);
}

void vertical::posicion(int newX,int newY)
{
    x=newX;
    y=newY;
    setPos(x,y);
}

vertical::vertical(QGraphicsItem *carr):QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/pac/vertical.png"));
}


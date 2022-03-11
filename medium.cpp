#include "medium.h"

void medium::setX(int newX)
{
    x = newX;
}

void medium::setY(int newY)
{
    y = newY;
}

int medium::getX() const
{
    return x;
}

int medium::getY() const
{
    return y;
}

void medium::posicion()
{
    setPos(x,y);
}

void medium::posicion(int newX,int newY)
{
    x=newX;
    y=newY;
    setPos(x,y);
}

medium::medium(QGraphicsItem *carr):QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/pac/medium.png"));
}


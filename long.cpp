#include "long.h"

void longl::setX(int newX)
{
    x = newX;
}

void longl::setY(int newY)
{
    y = newY;
}

int longl::getX() const
{
    return x;
}

int longl::getY() const
{
    return y;
}

void longl::posicion()
{
    setPos(x,y);
}

void longl::posicion(int newX,int newY)
{
    x=newX;
    y=newY;
    setPos(x,y);
}

longl::longl(QGraphicsItem *carr):QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/pac/long.png"));
}


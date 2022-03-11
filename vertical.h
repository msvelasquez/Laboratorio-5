#ifndef VERTICAL_H
#define VERTICAL_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

class vertical:public QObject,
        public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int x;
    int y;
public:
    vertical(QGraphicsItem* carr = 0);
    void setX(int newX);
    void setY(int newY);
    int getX() const;
    int getY() const;
    void posicion();
    void posicion(int newX,int newY);
};

#endif // VERTICAL_H

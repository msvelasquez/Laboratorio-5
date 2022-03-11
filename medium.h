#ifndef MEDIUM_H
#define MEDIUM_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

class medium:public QObject,
        public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int x;
    int y;
public:
    medium(QGraphicsItem* carr = 0);
    void setX(int newX);
    void setY(int newY);
    int getX() const;
    int getY() const;
    void posicion();
    void posicion(int newX,int newY);
};

#endif // MEDIUM_H

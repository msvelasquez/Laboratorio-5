#ifndef LONGL_H
#define LONGL_H


#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

class longl:public QObject,
        public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int x;
    int y;
public:
    longl(QGraphicsItem* carr = 0);
    void setX(int newX);
    void setY(int newY);
    int getX() const;
    int getY() const;
    void posicion();
    void posicion(int newX,int newY);
};

#endif // LONGL_H

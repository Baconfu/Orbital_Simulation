#ifndef PAINTPLANET_H
#define PAINTPLANET_H

#include <QQuickPaintedItem>
#include <QPainter>

class PaintPlanet: public QQuickPaintedItem
{
    Q_OBJECT
public:
    PaintPlanet(QQuickItem * parent = nullptr);
    ~PaintPlanet();

    void paint(QPainter *painter);

};

#endif // PAINTPLANET_H

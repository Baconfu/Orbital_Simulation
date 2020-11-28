#ifndef PAINTPLANET_H
#define PAINTPLANET_H

#include <QQuickPaintedItem>

class PaintPlanet: public QQuickPaintedItem
{
    Q_OBJECT
public:
    PaintPlanet();
    ~PaintPlanet();

    void paint(QPainter *painter);

};

#endif // PAINTPLANET_H

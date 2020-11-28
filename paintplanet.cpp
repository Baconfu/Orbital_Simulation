#include "paintplanet.h"

PaintPlanet::PaintPlanet(QQuickItem * parent):
    QQuickPaintedItem(parent)
{

}

PaintPlanet::~PaintPlanet()
{

}

void PaintPlanet::paint(QPainter *painter)
{
    painter->drawEllipse(0,0,width()-0.5,height()-0.5);
}

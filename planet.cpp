#include "planet.h"

Planet::Planet(float radius)
{
    m_radius = radius;
}

void Planet::update()
{

}

void Planet::transform(int delta_x, int delta_y)
{
    setX(x() + delta_x);
    setY(y() + delta_y);
}


void Planet::assignObj(QQuickItem *obj)
{
    m_obj = obj;
    m_obj->setParentItem(this);
    m_obj->setPosition(QPointF(-m_radius,-m_radius));
    m_obj->setWidth(m_radius*2);
    m_obj->setHeight(m_radius*2);
}


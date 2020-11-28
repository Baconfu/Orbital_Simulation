#include "planet.h"

Planet::Planet(QVector3D position,float radius)
{
    m_position = position;
    m_radius = radius;
}

void Planet::update()
{
    m_obj->setPosition(QPointF(m_position.x(),m_position.y()));

}

void Planet::assignObj(QQuickItem *obj)
{
    m_obj = obj;
    m_obj->setPosition(QPointF(m_position.x(),m_position.y()));
}


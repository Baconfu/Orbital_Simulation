#ifndef PLANET_H
#define PLANET_H

#include <QQuickItem>
#include <QVector3D>


class Planet
{
public:
    Planet(QVector3D position,float radius);

    QVector3D getPosition(){return m_position;}

    void update();

    void assignObj(QQuickItem * obj);
    QQuickItem * getObj(){return m_obj;}

private:
    QVector3D m_position;

    float m_radius = 10;



    QQuickItem * m_obj = nullptr;
};

#endif // PLANET_H

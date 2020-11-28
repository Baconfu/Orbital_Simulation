#ifndef PLANET_H
#define PLANET_H

#include <QQuickItem>
#include <QVector3D>


class Planet: public QQuickItem
{
public:
    Planet(float radius);

    void update();

    void transform(int delta_x,int delta_y);

    void assignObj(QQuickItem * obj);
    QQuickItem * getObj(){return m_obj;}

private:

    float m_radius = 10;



    QQuickItem * m_obj = nullptr;
};

#endif // PLANET_H

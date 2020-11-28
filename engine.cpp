#include "engine.h"

Engine::Engine(QQmlApplicationEngine * appEngine)
{
    m_appEngine = appEngine;

    m_root = m_appEngine->rootObjects()[0]->findChild<QQuickItem*>("root");


    sun = newPlanet(QPointF(640/2,480/2),10,m_root);

    planet = newPlanet(QPointF(150,0),10,sun);

    moon = newPlanet(QPointF(0,-50), 5,planet);

    planet->setPosition(QPointF(-150,50));


    frameRate = 60;

    timer  = new QTimer;

    timer->setInterval(1000/frameRate);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeout()));
    timer->start();
}

Planet *Engine::newPlanet(QPointF position, float radius, QQuickItem * relative_obj)
{
    Planet * p = new Planet(radius);
    p->setParentItem(relative_obj);
    p->setPosition(position);
    QQmlComponent component(m_appEngine,QUrl("qrc:/planet.qml"));
    QQuickItem * obj = qobject_cast<QQuickItem*>(component.create());
    //Parenting graphics item to player
    obj->setParent(m_appEngine);
    p->assignObj(obj);

    p->update();

    return p;
}



void Engine::timeout()
{

}

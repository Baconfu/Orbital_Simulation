#include "engine.h"

Engine::Engine(QQmlApplicationEngine * appEngine)
{
    m_appEngine = appEngine;


    sun = new Planet(QVector3D(640/2,480/2,0),50);

    timer  = new QTimer;

    timer->setInterval(18);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeout()));
    timer->start();
}



void Engine::timeout()
{

}

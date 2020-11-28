#ifndef ENGINE_H
#define ENGINE_H

#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlComponent>
#include <QTimer>
#include <QVector>
#include <QVector3D>

#include <planet.h>

class Engine: public QObject
{
    Q_OBJECT
public:
    Engine(QQmlApplicationEngine * appEngine);

    Planet * newPlanet(QPointF position, float radius, QQuickItem * relative_obj);

private:
    float frameRate = 60;

    QPointF center = QPointF(640/2,480/2);

    Planet * sun = nullptr;
    Planet * planet = nullptr;
    Planet * moon = nullptr;

    QTimer * timer = nullptr;

    QQmlApplicationEngine * m_appEngine = nullptr;

    QQuickItem * m_root = nullptr;

public slots:
    void timeout();
};

#endif // ENGINE_H

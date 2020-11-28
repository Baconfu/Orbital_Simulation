#ifndef ENGINE_H
#define ENGINE_H

#include <QObject>
#include <QQmlApplicationEngine>
#include <QTimer>
#include <QVector>
#include <QVector3D>

#include <planet.h>

class Engine: public QObject
{
    Q_OBJECT
public:
    Engine(QQmlApplicationEngine * appEngine);


private:

    Planet * sun = nullptr;
    Planet * planet = nullptr;
    Planet * moon = nullptr;

    QTimer * timer = nullptr;

    QQmlApplicationEngine * m_appEngine = nullptr;

public slots:
    void timeout();
};

#endif // ENGINE_H

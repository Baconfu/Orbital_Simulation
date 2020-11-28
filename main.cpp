#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <engine.h>
#include <paintplanet.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    qmlRegisterType<PaintPlanet>("Paint",1,0,"PaintPlanet");

    Engine * myEngine = new Engine(&engine);



    return app.exec();
}

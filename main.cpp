#include "mainwindow.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QFile>
#include <QtGui>
#include <QtQuick3D/qquick3d.h>
#include <QApplication>
#include <QWebEngineView>
#include <QUrl>
#include <QWidget>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/model_cansat.qml")));
    engine.load(QUrl(QStringLiteral("qrc:/mapnew.qml")));


    if (engine.rootObjects().isEmpty())
        return -1;

    MainWindow w;

     w.showFullScreen();
    w.show();
    return a.exec();
}

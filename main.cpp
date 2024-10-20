#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "EmployeeManager.h"

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // Khởi tạo đối tượng EmployeeManager
    EmployeeManager employeeManager;

    // Truyền đối tượng employeeManager vào QML
    engine.rootContext()->setContextProperty("employeeManager", &employeeManager);

    engine.load(QUrl(QStringLiteral("qrc:/Main.qml")));

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

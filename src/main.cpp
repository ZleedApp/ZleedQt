#include <QApplication>
#include <QObject>
#include <QQmlApplicationEngine>
#include <QUrl>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QQmlApplicationEngine engine;
	const QUrl mainQml(u"qrc:/ui/main.qml"_qs);

	QObject::connect(&engine, &QQmlApplicationEngine::objectCreated, &app,
		[mainQml](QObject *obj, const QUrl &objUrl) {
			if (!obj && mainQml == objUrl) QCoreApplication::exit(-1);
		}
	);

	engine.load(mainQml);
	return app.exec();
}
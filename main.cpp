#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"
#include <QDebug>

class MyQQuickView : public QQuickView
      {
      void resizeEvent(QResizeEvent* e) {
            qDebug() << "resizeEvent";
            QQuickView::resizeEvent(e);
            }
      };

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    MyQQuickView view;
    view.setTitle("MuseScore Player");
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl("qrc:/qml/rotationTest/main.qml"));
    view.showFullScreen();

    return app.exec();
}

#ifndef TESTING_H
#define TESTING_H

#include <QtQuick/QQuickPaintedItem>
#include <QtQuick/5.12.3/QtQuick/private/qquickrectangle_p.h>
#include <QtQuick/5.12.3/QtQuick/private/qquickmousearea_p.h>
#include <QColor>
#include <QQmlComponent>
#include <QQmlEngine>

class PopupShell : public QQuickRectangle
{
    Q_OBJECT
public:
    PopupShell() : mouseArea(new QQuickMouseArea(this))
    {

    }
private:
    QQuickMouseArea* mouseArea;
};

class TestPopup : public PopupShell
{
    Q_OBJECT
};

#endif // TESTING_H

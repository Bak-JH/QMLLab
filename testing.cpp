#include "testing.h"

PopupShell::PopupShell() : mouseArea(new QQuickMouseArea(this))
{
    connect(mouseArea, &QQuickMouseArea::clicked, this, &PopupShell::onClick);
    qvariant_cast<QObject*>(
        mouseArea->property("anchors")
    )->setProperty("fill", mouseArea->property("parent"));
}

void PopupShell::onClick()
{
    qDebug() << "clicked";
}

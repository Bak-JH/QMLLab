import QtQuick 2.12
import QtQml 2.3
import QtQuick.Window 2.12
import testing.qmltest 1.0
import QtQuick.Controls 2.5


Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    PopupShell{
        TestPopup{
            id:testPopup
            width: 50
            height:50
            color: "#FFF000"

        }
    }
}



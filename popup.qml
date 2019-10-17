import QtQuick 2.0

Item {
    id:popup
    Rectangle {
        id: popupShell
        x: 37
        y: 23
        width: 408
        height: 417
        color: "#ffffff"
        radius: 10
        border.width: 3

        Text {
            id: popupTitle
            x: 13
            y: 9
            text: qsTr("Text")
            font.family: "Tahoma"
            font.pixelSize: 30
        }

        Text {
            id: xButton
            x: 377
            y: 16
            width: 14
            height: 21
            text: qsTr("X")
            font.family: "Tahoma"
            font.pixelSize: 21
        }
    }

}

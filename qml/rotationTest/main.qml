import QtQuick 2.0
import QtQuick.Window 2.0

Rectangle {
    width: 360
    height: 360
    color: "red"

    Screen.onOrientationChanged: {console.log("orientation changed !!!!!!!!!")}

    Text {
        text: qsTr("Hello World")
        anchors.centerIn: parent
    }
    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }
    onWidthChanged:  {
        print("onWidthChanged called")
        }
    onHeightChanged: {
       print("onHeightChanged called")
        }
}

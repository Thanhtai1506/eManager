import QtQuick 2.15
import QtQuick.Controls 2.15


Rectangle{
    id: root
    width: 450
    height: 400
    border.color: "black"
    border.width: 2
    x: 100
    Text {
        text: ("EMPLOYEE LIST")
        font.pixelSize: 25
        font.family: "arial"
        font.bold: true
        x: 25
        y: 10
    }

    Rectangle{
        id: addButton
        width: 70
        height: 30
        color: "lightgrey"
        x:340
        y: 10
        Text {
            id: addText
            text: ("Add")
            anchors.centerIn: parent
            color:"black"
        }
        border.color: "black"
        border.width: 2
        radius: 3
        MouseArea{
            anchors.fill: parent
            onClicked: {
                StackView.push("addPage.qml")
            }

            onPressed: {
                addButton.color = "black"
                addText.color = "white"
            }
            onReleased: {
                addButton.color = "lightgrey"
                addText.color = "black"
            }
        }
    }

    ListModel {
        id: employeeModel
        ListElement { no: 1; name: "Nguyen Thanh Tai"; bu: "GPE.EDS" }
        ListElement { no: 2; name: "Jane Smith"; bu: "GPE.EDS" }
        ListElement { no: 3; name: "Michael Johnson"; bu: "GPE.EDS" }
        ListElement { no: 4; name: "Michael Johnson"; bu: "GPE.EDS" }
    }
    Column {
        x:25
        y:50

        // Tiêu đề bảng
        Row {
            spacing: 0
            Rectangle {
                width: 50
                height: 30
                color: "#CCCCCC"
                border.color: "#000000"
                Text { anchors.centerIn: parent; text: "No"; font.bold: true }
            }
            Rectangle {
                width: 150
                height: 30
                color: "#CCCCCC"
                border.color: "#000000"
                Text { anchors.centerIn: parent; text: "Name"; font.bold: true }
            }
            Rectangle {
                width: 100
                height: 30
                color: "#CCCCCC"
                border.color: "#000000"
                Text { anchors.centerIn: parent; text: "Bussines Unit"; font.bold: true }
            }
            Rectangle {
                width: 100
                height: 30
                color: "#CCCCCC"
                border.color: "#000000"
                Text { anchors.centerIn: parent; text: "Options"; font.bold: true }
            }
        }

        // Hiển thị dữ liệu
        Repeater {
            model: employeeModel
            Row {
                spacing: 0
                Rectangle {
                    width: 50
                    height: 30
                    border.color: "#000000"
                    Text { anchors.centerIn: parent; text: model.no }
                }
                Rectangle {
                    width: 150
                    height: 30
                    border.color: "#000000"
                    Text { anchors.centerIn: parent; text: model.name }
                }
                Rectangle {
                    width: 100
                    height: 30
                    border.color: "#000000"
                    Text { anchors.centerIn: parent; text: model.bu }
                }
                Rectangle {
                    id: b
                    width: 100
                    height: 30
                    border.color: "#000000"
                    Row{
                        //anchors.fill: parent
                        //anchors.margins: 10
                        anchors.centerIn: parent
                        spacing: 20
                        Button{
                            id: editButton
                            width: 20
                            height: 20
                            Image {
                                source: "icon_edit.png"
                                anchors.fill: parent
                            }
                        }
                        Button {
                            id: removeButton
                            width: 20
                            height: 20
                            Image {
                                source: "icon_remove.png"
                                anchors.fill: parent
                            }
                        }
                    }
                }
            }
        }
    }
}

import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    id: root
    signal loadAddPage()
    width: 450
    height: 400
    clip: true
    x: 100
    border.color: "black"
    border.width: 2

    Text {
        text: "EMPLOYEE LIST"
        font.pixelSize: 25
        font.family: "Arial"
        font.bold: true
        x: 25
        y: 10
    }

    Rectangle {
        id: addButton
        width: 70
        height: 30
        color: "lightgrey"
        x: 340
        y: 10
        Text {
            id: addText
            text: "Add"
            anchors.centerIn: parent
            color: "black"
        }
        border.color: "black"
        border.width: 2
        radius: 3
        MouseArea {
            anchors.fill: parent
            onClicked: {
                root.loadAddPage()
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

    Column {
        x: 25
        y: 50

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
                Text { anchors.centerIn: parent; text: "Business Unit"; font.bold: true }
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
            model: employeeManager.getEmployees() // Sử dụng employeeManager trực tiếp
            Row {
                // Hiển thị dữ liệu ở đây
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
                    Text { anchors.centerIn: parent; text: model.businessUnit }
                }
                Rectangle {
                    width: 100
                    height: 30
                    border.color: "#000000"
                    Row {
                        anchors.centerIn: parent
                        spacing: 20
                        Button {
                            text: "Edit"
                            onClicked: {
                                employeeManager.editEmployee(model.no, model.name, model.businessUnit);
                            }
                        }
                        Button {
                            text: "Remove"
                            onClicked: {
                                employeeManager.removeEmployee(model.no);
                            }
                        }
                    }
                }
            }
        }
    }
}

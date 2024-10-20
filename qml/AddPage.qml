import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    id: root
    width: 450
    height: 400
    border.color: "black"
    border.width: 2
    x: 100

    // Khai báo biến inputData để lưu dữ liệu nhập vào
    property var inputData: [] // Khai báo ở đây để biến này có phạm vi toàn cục trong Rectangle

    Text {
        text: "EMPLOYEE INFO"
        font.pixelSize: 25
        font.family: "Arial"
        font.bold: true
        x: 25
        y: 10
    }

    // Rectangle bao quanh Repeater
    Rectangle {
        id: inputFieldsContainer
        anchors.top: parent.top
        anchors.topMargin: 50
        anchors.horizontalCenter: parent.horizontalCenter
        width: 350
        height: 200 // Bạn có thể điều chỉnh chiều cao này tùy theo nhu cầu

        ListModel {
            id: textFieldModel
            ListElement { label: "Name" }
            ListElement { label: "Business Unit" }
            ListElement { label: "Address" }
            ListElement { label: "Note" }
        }

        Repeater {
            model: textFieldModel
            anchors.top: parent.top
            anchors.topMargin: 20 // Khoảng cách giữa các trường

            Row {
                spacing: 10
                width: parent.width
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.top: parent.top
                anchors.topMargin: (index * 40) // Tính toán vị trí cho mỗi trường

                Text {
                    text: model.label
                    width: 100
                    horizontalAlignment: Text.AlignRight
                    verticalAlignment: Text.AlignVCenter
                }

                TextField {
                    height: model.label === "Note" ? 70 : 20
                    width: 200
                    onTextEdited: {
                        // Cập nhật dữ liệu nhập vào inputData
                        root.inputData[index] = text;
                    }
                }
            }
        }
    }

    Row {
        spacing: 20 // Khoảng cách giữa các button
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20
        anchors.horizontalCenter: parent.horizontalCenter

        Rectangle {
            id: cancelButton
            width: 70
            height: 30
            color: "lightgrey"
            border.width: 2
            Text {
                id: cancelText
                text: "Cancel"
                anchors.centerIn: parent
                color: "black"
            }
            border.color: "black"
            radius: 3
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    pageLoader.source = "InfoPage.qml" // Quay lại trang InfoPage
                }

                onPressed: {
                    cancelButton.color = "black"
                    cancelText.color = "white"
                }
                onReleased: {
                    cancelButton.color = "lightgrey"
                    cancelText.color = "black"
                }
            }
        }

        Rectangle {
            id: addButton
            width: 70
            height: 30
            color: "lightgrey"
            border.color: "black"
            border.width: 2
            radius: 3
            Text {
                id: addText
                text: "Add"
                anchors.centerIn: parent
                color: "black"
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    // Logic cho nút Add
                    if (inputData.length > 0) {
                        // Gọi phương thức thêm nhân viên
                        employeeManager.addEmployee(inputData[0], inputData[1]);
                        pageLoader.source = "InfoPage.qml"; // Quay lại trang InfoPage
                    }
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
    }
}

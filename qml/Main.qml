import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    width: 650
    height: 500
    visible: true
    title: "Employee List"

    Loader {
        id: pageLoader
        source: "InfoPage.qml" // Trang ban đầu là InfoPage.qml

        onLoaded: {
            if (item && item.loadAddPage) {
                item.loadAddPage.connect(loadAddPage) // Kết nối signal để chuyển trang
            }
        }
    }

    function loadAddPage() {
        pageLoader.source = "AddPage.qml" // Chuyển trang sang AddPage.qml
    }
}

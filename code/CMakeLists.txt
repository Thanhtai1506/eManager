cmake_minimum_required(VERSION 3.16)

project(eManager VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appeManager
    main.cpp
    employee.cpp
    qmlFile.qrc
)

qt_add_qml_module(appeManager
    URI eManager
    VERSION 1.0
    QML_FILES
        Main.qml
        RESOURCES icon_remove.png
        RESOURCES icon_edit.png
        SOURCES employee.h employee.cpp
        QML_FILES AddPage.qml
        QML_FILES InfoPage.qml
        RESOURCES qmlFile.qrc
        SOURCES employeemanager.h employeemanager.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appeManager PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appeManager
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appeManager
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appeManager
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

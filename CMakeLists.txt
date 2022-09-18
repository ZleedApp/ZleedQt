cmake_minimum_required(VERSION 3.10)
project(Zleed VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Core Gui Qml Quick Widgets REQUIRED)

set(ZLEED_TARGET_NAME Zleed)
set(ZLEED_SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(ZLEED_RES_DIR ${CMAKE_SOURCE_DIR}/res)

set(ZLEED_SRC_FILES
    ${ZLEED_SRC_DIR}/main.cpp
)
set(ZLEED_RESOURCES
    ${ZLEED_RES_DIR}/resources.qrc
)

qt_add_executable(${ZLEED_TARGET_NAME} ${ZLEED_SRC_FILES} ${ZLEED_RESOURCES})
target_include_directories(${ZLEED_TARGET_NAME} PUBLIC ${Qt6Widgets_INCLUDE_DIRS})
target_include_directories(${ZLEED_TARGET_NAME} PRIVATE ${ZLEED_SRC_DIR} ${Qt6Widgets_PRIVATE_INCLUDE_DIRS})
target_link_libraries(${ZLEED_TARGET_NAME} PRIVATE Qt6::Core Qt6::Gui Qt6::Qml Qt6::Quick Qt6::Widgets)
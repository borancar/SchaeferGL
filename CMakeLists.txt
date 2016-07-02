cmake_minimum_required(VERSION 2.8)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

project(SchaeferGL)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(SchaeferGL-Library)
add_subdirectory(SchaeferGL-Tests)

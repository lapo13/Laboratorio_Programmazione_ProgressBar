cmake_minimum_required(VERSION 3.26)
project(Laboratorio_Programmazione)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(Laboratorio_Programmazione main.cpp)

target_link_libraries(Laboratorio_Programmazione Qt6::Widgets)
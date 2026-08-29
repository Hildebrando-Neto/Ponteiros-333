cmake_minimum_required(VERSION 3.5)

project(soma_vetores LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(soma_vetores main.cpp)

install(TARGETS soma_vetores
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

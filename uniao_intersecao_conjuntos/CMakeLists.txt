cmake_minimum_required(VERSION 3.5)

project(uniao_intersecao_conjuntos LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(uniao_intersecao_conjuntos main.cpp)

install(TARGETS uniao_intersecao_conjuntos
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

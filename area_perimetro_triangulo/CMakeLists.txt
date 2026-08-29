cmake_minimum_required(VERSION 3.5)

project(area_perimetro_triangulo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(area_perimetro_triangulo main.cpp)

install(TARGETS area_perimetro_triangulo
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

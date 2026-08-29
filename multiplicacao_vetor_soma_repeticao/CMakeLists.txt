cmake_minimum_required(VERSION 3.5)

project(multiplicacao_vetor_soma_repeticao LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(multiplicacao_vetor_soma_repeticao main.cpp)

install(TARGETS multiplicacao_vetor_soma_repeticao
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

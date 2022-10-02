cmake_minimum_required(VERSION 3.5)

project(testing LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(testing main.cpp)

install(TARGETS testing
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

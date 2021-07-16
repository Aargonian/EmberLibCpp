cmake_minimum_required(VERSION 3.0)
project(EmberLib++)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE
    src/EmberLib.cpp)

add_library(EmberLib++ ${SOURCE})

target_include_directories(EmberLib++ PUBLIC include)
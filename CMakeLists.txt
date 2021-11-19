cmake_minimum_required(VERSION 3.20)
project(Textual_RPG_master)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Textual_RPG_master
        functions.cpp
        functions.h
        ../../CLionProjects/Textual-RPG/main.cpp
        Personnage.cpp
        Personnage.h)

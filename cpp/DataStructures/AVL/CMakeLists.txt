cmake_minimum_required(VERSION 3.10)
project(AVL)

add_library(AVL STATIC
    src/AVL.cpp
)
target_include_directories(AVL PUBLIC include)
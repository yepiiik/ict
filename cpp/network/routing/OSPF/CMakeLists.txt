cmake_minimum_required(VERSION 3.10)
project(OSPF)

add_library(OSPF STATIC src/OSPF.cpp)
target_include_directories(OSPF PUBLIC include)
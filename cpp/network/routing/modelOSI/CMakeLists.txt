cmake_minimum_required(VERSION 3.10)
project(ModelOSI)

add_library(ModelOSI STATIC 
    src/L3RoutingProtocol.cpp
)
target_include_directories(ModelOSI PUBLIC include)
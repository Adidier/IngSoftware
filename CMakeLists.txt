cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Vector)


add_library(Vector "src/vector.cpp" "include/Box.h" "src/Box.cpp" "include/BoxData.h" "src/BoxData.cpp")


include_directories("include")

ADD_EXECUTABLE(example main.cpp "include/Box.h" "src/Box.cpp" "include/BoxData.h" "src/BoxData.cpp") 
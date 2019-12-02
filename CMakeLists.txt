# CMakeList.txt : CMake project for image_processing, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(pc4)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS -pthread)

add_executable (pc4 main.cpp Functions/lodepng.cpp Functions/lodepng.h Functions/Header.h Functions/Filter.h Functions/Filter.cpp Functions/Rotated.h Functions/Rotated.cpp Functions/Teacher.h Functions/Teacher.cpp)

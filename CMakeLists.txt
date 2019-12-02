# CMakeList.txt : CMake project for image_processing, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(pc4)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS -pthread)

add_executable (pc4 main.cpp lodepng.cpp lodepng.h Header.h Filter.h Filter.cpp Rotated.h Rotated.cpp Teacher.h Teacher.cpp)

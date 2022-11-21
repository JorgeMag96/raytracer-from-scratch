cmake_minimum_required(VERSION 3.23)
project(raytracer-from-scratch)

set(SDL2_DIR ./dependencies/sdl2-arm/2.24.2) # SDL2 dependency library path

include_directories(${SDL2_DIR}/include/) # include the lib

link_directories(${SDL2_DIR}/lib/) # link the lib

set(CMAKE_CXX_STANDARD 14)

add_executable(raytracer-from-scratch CApp.h CApp.cpp main.cpp)

target_link_libraries(raytracer-from-scratch sdl2)

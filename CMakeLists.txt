cmake_minimum_required(VERSION 3.23)
project(raytracer-from-scratch)

set(SDL2_DIR /opt/homebrew/Cellar/sdl2/2.24.2) # set SDL2 library path

include_directories(${SDL2_DIR}/include/) # include the lib

link_directories(${SDL2_DIR}/lib/) # link the lib

set(CMAKE_CXX_STANDARD 14)

add_executable(raytracer_from_scratch CApp.cpp CApp.h)

cmake_minimum_required(VERSION 3.14)
project(schachbrett)

set(CMAKE_CXX_STANDARD 14)

add_executable(schachbrett main.cpp Schachbrett.cpp Schachbrett.h Dijkstratabelle.cpp Dijkstratabelle.h)
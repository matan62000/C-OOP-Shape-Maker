cmake_minimum_required(VERSION 4.2)
project(project_t)

set(CMAKE_CXX_STANDARD 20)

add_executable(project_t main.cpp Arrow.cpp Arrow.h Canvas.cpp Canvas.h Cimg.h Circle.cpp Circle.h Menu.cpp Menu.h Point.cpp Point.h Polygon.cpp Polygon.h Rectangle.cpp Rectangle.h Shape.cpp Shape.h Triangle.cpp Triangle.h)

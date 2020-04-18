cmake_minimum_required(VERSION 3.15)
project(Josephus)

set(CMAKE_CXX_STANDARD 14)

add_executable(Josephus main.cpp Node.cpp Node.h LinkedList.cpp LinkedList.h)
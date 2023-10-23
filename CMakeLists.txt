cmake_minimum_required(VERSION 3.26)
project(ConsoleApplication1)

set(CMAKE_CXX_STANDARD 14)

include_directories(ConsoleApplication1)

add_executable(ConsoleApplication1
        ConsoleApplication1/ConsoleApplication1.cpp
        ConsoleApplication1/Dog.cpp
        ConsoleApplication1/Dog.h
        ConsoleApplication1/Pet.cpp
        ConsoleApplication1/Pet.h
        ConsoleApplication1/PetCenter.cpp
        ConsoleApplication1/PetCenter.h)

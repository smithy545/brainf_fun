cmake_minimum_required(VERSION 3.16)
project(brainflife)

set(CMAKE_CXX_STANDARD 17)

add_executable(brainflife
        main.cpp
        src/BrainyInterpreter.cpp
        src/BrainyInterpreter.h
        src/ExecutionState.h)
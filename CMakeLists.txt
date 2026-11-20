cmake_minimum_required(VERSION 4.3)
project(CPU_Scheduler)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPU_Scheduler main.cpp
        headers/Process.h
        src/Process.cpp)

target_include_directories(CPU_Scheduler PRIVATE ${CMAKE_SOURCE_DIR}/headers)
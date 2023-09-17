cmake_minimum_required(VERSION 3.26)
project(sswLab1 C)

set(CMAKE_C_STANDARD 11)

add_executable(sswLab1 main.c
        ast.h
        ast.c)

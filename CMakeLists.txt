cmake_minimum_required(VERSION 4.0)
project(OceanDepth C)

set(CMAKE_C_STANDARD 11)

add_executable(OceanDepth src/main.c
        src/creatures/creatures.c
        src/creatures/creatures.h)

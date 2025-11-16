cmake_minimum_required(VERSION 4.0)
project(OceanDepth C)

set(CMAKE_C_STANDARD 11)

add_executable(OceanDepth src/main.c
        src/creatures/creatures.c
        src/combat/combat.c
        src/combat/combat.h
        src/creatures/creatures.h
        src/joueur/joueur.c
        src/joueur/joueur.h)

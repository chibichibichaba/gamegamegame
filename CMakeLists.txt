cmake_minimum_required(VERSION 3.16)
project(GAMEGAMEGAME)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use your MinGW GCC 13.1.0 compiler
set(CMAKE_CXX_COMPILER "C:/mingw64-gcc13/bin/g++.exe")

# Point to SFML installation
set(SFML_DIR "C:/SFML-Build/install/lib/cmake/SFML")

# Include subdirectories
add_subdirectory(Engine)
add_subdirectory(Game)


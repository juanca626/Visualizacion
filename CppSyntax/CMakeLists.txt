#Versión de CMake
cmake_minimum_required(VERSION 3.28)

#Nombre del proyecto
project(Syntax)


# Estándar de C++ a utilizar puede ser 17 o nada
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Flags del compilador (equivalente a -Wall -Wextra)
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra)
endif()

#Buscar archivos .h
include_directories(${PROJECT_SOURCE_DIR}/include)


#file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)

#add_executable(${PROJECT_NAME} ${SOURCES})

# Ejecutable
add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/clasesmain.cpp
                               ${PROJECT_SOURCE_DIR}/src/A.cpp
                               ${PROJECT_SOURCE_DIR}/src/D.cpp
                               )


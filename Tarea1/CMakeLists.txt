cmake_minimum_required(VERSION 3.24)
project(RayTracer LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Flags del compilador (equivalente a -Wall -Wextra)
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wno-unused-parameter)
endif()

set ( EXTERNAL
  src/external/stb_image.h
)

set ( ONE_WEEKEND
    src/main.cpp
    src/vec3.h
    src/color.h
    src/ray.h
    src/hittable.h
    src/sphere.h
    src/hittable_list.h
    src/header.h
    src/interval.h
    src/camera.h
    src/material.h
)

include_directories(src)

message (STATUS "Compiler ID: " ${CMAKE_CXX_COMPILER_ID})
message (STATUS "Release flags: " ${CMAKE_CXX_FLAGS_RELEASE})
message (STATUS "Debug flags: " ${CMAKE_CXX_FLAGS_DEBUG})

if (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    # /wd #### - Disable warning
    # /we #### - treat warning as error
    add_compile_options("/W4")      # Enable level-4 warnings
    add_compile_options("/we 4265") # Class has virtual functions, but its non-trivial destructor is not virtual
    add_compile_options("/we 5204") # Class has virtual functions, but its trivial destructor is not virtual
    add_compile_options("/wd 4100") # unreferenced formal parameter
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    add_compile_options(-Wnon-virtual-dtor) # Class has virtual functions, but its destructor is not virtual
    add_compile_options(-Wreorder) # Data member will be initialized after [other] data member
    add_compile_options(-Wmaybe-uninitialized) # Variable improperly initialized
    add_compile_options(-Wunused-variable) # Variable is defined but unused
elseif (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wnon-virtual-dtor) # Class has virtual functions, but its destructor is not virtual
    add_compile_options(-Wreorder) # Data member will be initialized after [other] data member
    add_compile_options(-Wsometimes-uninitialized) # Variable improperly initialized
    add_compile_options(-Wunused-variable) # Variable is defined but unused
endif()

add_executable(${PROJECT_NAME} ${EXTERNAL} ${ONE_WEEKEND})


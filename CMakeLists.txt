cmake_minimum_required(VERSION 3.1)
project(sarvik)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/lib)

include_directories(.)

# Find xtensor packages - used for tensor computations
# xsimd - SimD wrappers for xtensor
find_package(glfw3 REQUIRED)
#find_package(xtl REQUIRED)
#find_package(xsimd CONFIG REQUIRED)
#find_package(xtensor CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)

add_executable(sarvik
        ${PROJECT_SOURCE_DIR}/test.cpp
        sarvik/core/context.h
        sarvik/core/forces.h
        sarvik/exceptions/common_excep.h
        sarvik/visualization/opengl.h sarvik/core/bodies.h)
target_link_libraries(sarvik PRIVATE
        glfw
        glad::glad)
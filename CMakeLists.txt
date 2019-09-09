cmake_minimum_required(VERSION 3.1)
project(sarvik)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

include_directories(.)

# Find xtensor packages - used for tensor computations
# xsimd - SimD wrappers for xtensor
#find_package(xtl REQUIRED)
#find_package(xsimd CONFIG REQUIRED)
#find_package(xtensor CONFIG REQUIRED)
#find_package(glfw3 3.3 REQUIRED)
#ind_package(glad CONFIG REQUIRED)

add_executable(sarvik ${PROJECT_SOURCE_DIR}/test.cpp
        sarvik/context/context.h sarvik/forces/forces.h sarvik/exceptions/exception.h)
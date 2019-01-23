cmake_minimum_required(VERSION 3.5)
project(stack_array)

set(CMAKE_CXX_STANDARD 14)

# have compiler give warnings, but not for signed/unsigned
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wextra -Wno-sign-compare")

add_executable(stack_array main.cpp stack.cpp stack.h)

cmake_minimum_required(VERSION 3.5)

project(Formats)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(
    -Werror
    -Wall
    -Wunreachable-code
)

option(TESTS "Build and run tests" OFF)

add_subdirectory(format)
add_subdirectory(samples)

if(TESTS)
    message("-- Tests Enabled")
    add_subdirectory(tests)
endif()

add_executable(formats main.cpp)

target_link_libraries(formats csv)
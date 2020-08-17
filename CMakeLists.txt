cmake_minimum_required(VERSION 3.10)
project(Lea)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

include_directories(include)
include_directories(src)

if (WIN32)
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS=1)
endif()

add_subdirectory(src)

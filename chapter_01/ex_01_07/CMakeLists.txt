cmake_minimum_required(VERSION 3.28)

project(CH01_EX01_07)

set(CMAKE_C_STANDARD 11)

set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(PROJECT_SOURCES
        ${PROJECT_DIR}/main.c
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
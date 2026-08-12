cmake_minimum_required(VERSION 3.20)

project(day_01_lifetime LANGUAGES CXX)

add_executable(day_01_lifetime main.cpp)
target_compile_features(day_01_lifetime PRIVATE cxx_std_17)

if(MSVC)
    target_compile_options(day_01_lifetime PRIVATE /W4 /permissive-)
else()
    target_compile_options(day_01_lifetime PRIVATE -Wall -Wextra -Wpedantic)
endif()

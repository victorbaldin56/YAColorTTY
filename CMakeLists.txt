cmake_minimum_required(VERSION 3.14)
project(YAColorTTY)

add_library(ctty INTERFACE)
target_include_directories(ctty INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

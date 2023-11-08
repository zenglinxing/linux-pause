# coding: utf-8
#[[
Author: Lin-Xing Zeng
Email:  jasonphysics@outlook.com | jasonphysics19@gmail.com

This file is part of Linux-pause, in ./CMakeLists.txt
]]
cmake_minimum_required(VERSION 3.9)

project(Linux-pause
        VERSION 0.3.0
        LANGUAGES C
        DESCRIPTION "The pause command simulating that under Windows."
        )

option(BUILD_SHARED_LIBS "Build a shared lib of winpause." OFF)

add_library(winpause STATIC src/pause-func.c)
if(BUILD_SHARED_LIBS)
    add_library(winpause_shared SHARED src/pause-func.c)
endif()

add_executable(pause src/pause.c)
target_include_directories(pause PUBLIC include)
target_link_libraries(pause PRIVATE winpause)
set_target_properties(pause PROPERTIES PUBLIC_HEADER include/pause-func.h)

install(TARGETS pause winpause
        EXPORT LinuxPause
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin
        PUBLIC_HEADER DESTINATION include/winpause)

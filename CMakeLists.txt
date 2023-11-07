# coding: utf-8
#[[
Author: Lin-Xing Zeng
Email:  jasonphysics@outlook.com | jasonphysics19@gmail.com

This file is part of Linux-pause, in ./CMakeLists.txt
]]
cmake_minimum_required(VERSION 3.9)

project(Linux-pause
        VERSION 0.0.0
        LANGUAGES C
        DESCRIPTION "The pause command simulating that under Windows."
        )

add_executable(pause pause.c)
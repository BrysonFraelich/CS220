cmake_minimum_required(VERSION 3.12)
project(PEX1)

set(CMAKE_CXX_STANDARD 14)

add_executable(wordClouds PEX1.h PEX1.c WordCloud.c WordCloud.h)
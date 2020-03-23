cmake_minimum_required(VERSION 3.12)
project(PEX3)

set(CMAKE_CXX_STANDARD 14)

add_executable(RPN_Calculator main.c ListAsLinkedList.c stackAsLinkedList.c queueAsLinkedList.c mathFunctions.c)
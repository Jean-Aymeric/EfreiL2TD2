cmake_minimum_required(VERSION 3.20)
project(EfreiL2TD2 C)

set(CMAKE_C_STANDARD 99)

add_executable(EfreiL2TD2 main.c ht_list.c ht_list.h circle_list.c circle_list.h)

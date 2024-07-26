cmake_minimum_required(VERSION 3.28)
project(learn_c C)

set(CMAKE_C_STANDARD 11)

add_executable(learn_c
        chapter1/helloworld.c
        chapter2/variable_constant.c
        chapter2/integer.c
        chapter2/char.c
        chapter2/escape_char.c
        chapter2/float.c
)

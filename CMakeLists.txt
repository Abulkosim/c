cmake_minimum_required(VERSION 3.28)
project(c C)

set(CMAKE_C_STANDARD 11)

add_executable(c reverse_string.c
        external_veriables.c
        data_types.c
        pointers.c
        pointers.c
        number_average.c
        mutability.c
        memory_allocation.c
)

cmake_minimum_required(VERSION 3.26)
project(laba13 C)

set(CMAKE_C_STANDARD 11)

add_executable(laba13 main.c
        libs/algorithms/algorithms.c
        libs/algorithms/algorithms.h
        libs/algorithms/array/array.c
        libs/algorithms/array/array.h
        libs/data_structures/bitset/bitset.c
        libs/data_structures/bitset/bitset.h
        libs/data_structures/ordered_array_set/ordered_array_set.c
        libs/data_structures/ordered_array_set/ordered_array_set.h
        libs/data_structures/unordered_array_set/unordered_array_set.c
        libs/data_structures/unordered_array_set/unordered_array_set.h
        libs/data_structures/vector/vector.h
        libs/data_structures/vector/vector_void/vector_void.h)

add_subdirectory(libs)
target_link_libraries(laba13 data_structures)
target_link_libraries(laba13 algorithms)
cmake_minimum_required(VERSION 3.23)
project(hello_algo)

set(CMAKE_CXX_STANDARD 11)


include(FetchContent)
FetchContent_Declare(
        googletest
        SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()

add_executable(hello_algo
        main.cpp
        hello_test.cpp
        hello.cpp
        binary_search.cpp
        binary_search_test.cpp
        binary_search_insertion_simple.cpp
        binary_search_insertion_simple_test.cpp
        binary_search_insertion.cpp
        binary_search_insertion_test.cpp
        )

# 包含头文件
target_include_directories(
        hello_algo
        PRIVATE
        ./)


target_link_libraries(
        hello_algo
        PRIVATE
        gtest_main
)

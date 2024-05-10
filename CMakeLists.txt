cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled
        src/tech/aelson/algorithms/model/Product.cpp
        src/tech/aelson/algorithms/search/SearchSmallest.cpp
        src/tech/aelson/algorithms/search/SearchSmallestTester.cpp
)

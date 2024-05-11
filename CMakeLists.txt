cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled
        src/tech/aelson/algorithms/model/Product.cpp
        src/tech/aelson/algorithms/search/SearchSmallest.cpp
        src/tech/aelson/algorithms/search/SearchSmallestTester.cpp
        src/tech/aelson/algorithms/sort/selection_sort/SelectionSort.cpp
        src/tech/aelson/algorithms/sort/selection_sort/SelectionSortTester.cpp
        src/tech/aelson/algorithms/Main.cpp
        src/tech/aelson/algorithms/search/SearchSmallestTester.h
        src/tech/aelson/algorithms/sort/selection_sort/SelectionSortTester.h
        src/tech/aelson/algorithms/sort/insertion_sort/InsertionSort.cpp
        src/tech/aelson/algorithms/sort/insertion_sort/InsertionSortTester.cpp
        src/tech/aelson/algorithms/sort/insertion_sort/InsertionSortTester.h
        src/tech/aelson/algorithms/model/Grade.cpp
        src/tech/aelson/algorithms/sort/merge_sort/MergeSort.cpp
        src/tech/aelson/algorithms/sort/merge_sort/MergeSortTester.cpp
        src/tech/aelson/algorithms/sort/merge_sort/MergeSortTester.h
)

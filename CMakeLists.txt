cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled
        src/tech/aelson/algorithms/model/Product.cpp
        src/tech/aelson/algorithms/search/find_smallest/FindSmallest.cpp
        src/tech/aelson/algorithms/search/find_smallest/FindSmallestTester.cpp
        src/tech/aelson/algorithms/sort/selection_sort/SelectionSort.cpp
        src/tech/aelson/algorithms/sort/selection_sort/SelectionSortTester.cpp
        src/tech/aelson/algorithms/Main.cpp
        src/tech/aelson/algorithms/search/find_smallest/FindSmallestTester.h
        src/tech/aelson/algorithms/sort/selection_sort/SelectionSortTester.h
        src/tech/aelson/algorithms/sort/insertion_sort/InsertionSort.cpp
        src/tech/aelson/algorithms/sort/insertion_sort/InsertionSortTester.cpp
        src/tech/aelson/algorithms/sort/insertion_sort/InsertionSortTester.h
        src/tech/aelson/algorithms/model/Grade.cpp
        src/tech/aelson/algorithms/sort/merge_sort/MergeSort.cpp
        src/tech/aelson/algorithms/sort/merge_sort/MergeSortTwoArraysTester.cpp
        src/tech/aelson/algorithms/sort/merge_sort/MergeSortTwoArraysTester.h
        src/tech/aelson/algorithms/sort/merge_sort/MergeSortOneArrayTester.cpp
        src/tech/aelson/algorithms/sort/merge_sort/MergeSortOneArrayTester.h
        src/tech/aelson/algorithms/search/find_smaller_elements/FindSmallerElements.cpp
        src/tech/aelson/algorithms/search/find_smaller_elements/FindSmallerElementsTester.cpp
        src/tech/aelson/algorithms/search/find_smaller_elements/FindSmallerElementsTester.h
)

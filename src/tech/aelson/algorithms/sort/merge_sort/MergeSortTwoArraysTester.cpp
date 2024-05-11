#include "MergeSortTwoArraysTester.h"
#include "MergeSort.cpp"
#include <iostream>

void testMergeSortTwoArrays() {
    Grade firstArray[] = {
            Grade("andre", 4),
            Grade("mariana", 5),
            Grade("carlos", 8.5),
            Grade("paulo", 9),
    };

    Grade secondArray[] = {
            Grade("jonas", 3),
            Grade("juliana", 6.7),
            Grade("guilherme", 7),
            Grade("lucia", 9.3),
            Grade("ana", 10),
    };
    std::cout << "First array: " << std::endl;
    for (const auto& grade : firstArray) {
        std::cout << grade.getStudentName() << " " << grade.getResult() << std::endl;
    }

    std::cout << "Second array: " << std::endl;
    for (const auto& grade : secondArray) {
        std::cout << grade.getStudentName() << " " << grade.getResult() << std::endl;
    }

    Grade* rank = tech::aelson::algorithms::sort::MergeSort::mergeTwoArrays(firstArray,
                                                                            sizeof(firstArray) / sizeof(firstArray[0]),
                                                                            secondArray, sizeof(secondArray) /
                                                                                         sizeof(secondArray[0]));
    std::cout << "Merged array: " << std::endl;
    for (int i = 0; i < 9; ++i) {
        std::cout << rank[i].getStudentName() << " " << rank[i].getResult() << std::endl;
    }
}

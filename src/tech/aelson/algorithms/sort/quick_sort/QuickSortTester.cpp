#include "QuickSortTester.h"
#include "QuickSort.cpp"
#include <iostream>

void testQuickSort() {
    Grade guilherme("guilherme", 7);
    Grade unsortedGrades[] = {
            Grade("andre", 4),
            Grade("carlos", 8.5),
            Grade("ana", 10),
            Grade("jonas", 3),
            Grade("juliana", 6.7),
            Grade("guilherme", 7),
            Grade("paulo", 9),
            Grade("mariana", 5),
            Grade("lucia", 9.3)
    };

    tech::aelson::algorithms::sort::QuickSort::execute(unsortedGrades, 0, 9);
    std::cout << "Sorted array: " << std::endl;
    for (const auto & unsortedGrade : unsortedGrades) {
        std::cout << unsortedGrade.getStudentName() << " " << unsortedGrade.getResult() << std::endl;
    }
}

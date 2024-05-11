#include "MergeSortOneArrayTester.h"
#include "MergeSort.cpp"

void testMergeSortOneArray() {
    Grade grades[] = {
            Grade("andre", 4),
            Grade("mariana", 5),
            Grade("carlos", 8.5),
            Grade("paulo", 9),
            Grade("jonas", 3),
            Grade("juliana", 6.7),
            Grade("guilherme", 7),
            Grade("lucia", 9.3),
            Grade("ana", 10)
    };
    std::cout << "Grades array: " << std::endl;
    for (const auto& grade : grades) {
        std::cout << grade.getStudentName() << " " << grade.getResult() << std::endl;
    }

    Grade* rank = tech::aelson::algorithms::sort::MergeSort::sortOneArray(grades, 0, 4, sizeof(grades) / sizeof(grades[0]));
    std::cout << "Sorted array: " << std::endl;
    for (int i = 0; i < 9; ++i) {
        std::cout << rank[i].getStudentName() << " " << rank[i].getResult() << std::endl;
    }
}

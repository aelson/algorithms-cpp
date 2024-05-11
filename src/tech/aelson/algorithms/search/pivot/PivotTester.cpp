#include "PivotTester.h"
#include "Pivot.cpp"
#include <iostream>

int testPivot() {
    Grade guilherme("guilherme", 7);
    Grade unsortedGrades[] = {
            Grade("andre", 4),
            Grade("carlos", 8.5),
            Grade("ana", 10),
            Grade("jonas", 3),
            Grade("juliana", 6.7),
            Grade("lucia", 9.3),
            Grade("paulo", 9),
            Grade("mariana", 5),
            guilherme,
    };

    int pivotPosition = tech::aelson::algorithms::search::Pivot::execute(unsortedGrades, 0, sizeof(unsortedGrades) / sizeof(unsortedGrades[0]));
    std::cout << "The Pivot is in the position " << pivotPosition << std::endl;
    for (const auto& grade : unsortedGrades) {
        std::cout << grade.getStudentName() << " " << grade.getResult() << std::endl;
    }
}

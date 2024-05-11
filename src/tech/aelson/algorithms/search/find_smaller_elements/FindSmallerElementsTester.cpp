#include "FindSmallerElementsTester.h"
#include <iostream>
#include "FindSmallerElements.cpp"

void testFindSmallerElements() {
    Grade guilherme("guilherme", 7);
    Grade unsortedGrades[] = {
            Grade("andre", 4),
            Grade("carlos", 8.5),
            Grade("ana", 10),
            Grade("jonas", 3),
            Grade("juliana", 6.7),
            guilherme,
            Grade("paulo", 9),
            Grade("mariana", 5),
            Grade("lucia", 9.3)
    };

    int lowerValuesCount = tech::aelson::algorithms::search::FindSmallerElements::execute(guilherme, unsortedGrades, sizeof(unsortedGrades) / sizeof(unsortedGrades[0]));
    std::cout << "Lower values count: " << lowerValuesCount << std::endl;
}

#include <iostream>
#include "../../model/Grade.cpp"

namespace tech {
    namespace aelson {
        namespace algorithms {
            namespace sort {

                class MergeSort {
                public:
                    static Grade *
                    execute(Grade *firstArray, int firstArrayLength, Grade *secondArray, int secondArrayLength) {
                        int total = firstArrayLength + secondArrayLength;
                        Grade *merged = new Grade[total];
                        int currentOfFirstArray = 0;
                        int currentOfSecondArray = 0;
                        int currentOfMerged = 0;
                        while (currentOfFirstArray < firstArrayLength && currentOfSecondArray < secondArrayLength) {
                            Grade grade1 = firstArray[currentOfFirstArray];
                            Grade grade2 = secondArray[currentOfSecondArray];

                            std::cout << "Comparing " << grade1.getStudentName() << " (" << grade1.getResult()
                                      << ") with " << grade2.getStudentName() << " (" << grade2.getResult() << ")"
                                      << std::endl;

                            if (grade1.getResult() < grade2.getResult()) {
                                std::cout << "-> Inserting " << grade1.getStudentName() << " (" << grade1.getResult()
                                          << ") on the position " << currentOfMerged << std::endl;
                                merged[currentOfMerged] = grade1;
                                currentOfFirstArray++;
                            } else {
                                std::cout << "-> Inserting " << grade2.getStudentName() << " (" << grade2.getResult()
                                          << ") on the position " << currentOfMerged << std::endl;
                                merged[currentOfMerged] = grade2;
                                currentOfSecondArray++;
                            }
                            std::cout << "------------------------------------" << std::endl;
                            currentOfMerged++;
                        }
                        while (currentOfFirstArray < firstArrayLength) {
                            std::cout << "-> Inserting " << firstArray[currentOfFirstArray].getStudentName() << " ("
                                      << firstArray[currentOfFirstArray].getResult() << ") on the position "
                                      << currentOfMerged << " because it is left over from the first array"
                                      << std::endl;
                            merged[currentOfMerged] = firstArray[currentOfFirstArray];
                            currentOfFirstArray++;
                            currentOfMerged++;
                        }
                        while (currentOfSecondArray < secondArrayLength) {
                            std::cout << "-> Inserting " << secondArray[currentOfSecondArray].getStudentName() << " ("
                                      << secondArray[currentOfSecondArray].getResult() << ") on the position "
                                      << currentOfMerged << " because it is left over from the second array"
                                      << std::endl;
                            merged[currentOfMerged] = secondArray[currentOfSecondArray];
                            currentOfSecondArray++;
                            currentOfMerged++;
                        }
                        return merged;
                    }
                };

            } // namespace sort
        } // namespace algorithms
    } // namespace aelson
} // namespace tech

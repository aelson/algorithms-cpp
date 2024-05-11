#include <iostream>
#include "../../model/Grade.cpp"

namespace tech {
    namespace aelson {
        namespace algorithms {
            namespace sort {

                class MergeSort {
                public:
                    static void mergeSort(Grade* grades, int start, int end) {
                        int numberOfElements = end - start;
                        if (numberOfElements > 1) {
                            int middle = (start + end) / 2;
                            mergeSort(grades, start, middle);
                            mergeSort(grades, middle, end);
                            sortOneArrayWithTwoOrderedHalfs(grades, start, middle, end);
                        }
                    }

                    static Grade *
                    mergeTwoArrays(Grade *firstArray, int firstArrayLength, Grade *secondArray, int secondArrayLength) {
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

                    static Grade* sortOneArrayWithTwoOrderedHalfs(Grade* array, int start, int middle, int end) {
                        int total = end - start;
                        Grade* sorted = new Grade[total];
                        int sortedIndex = 0;
                        int firstPartIndex = start;
                        int secondPartIndex = middle;
                        while (firstPartIndex < middle && secondPartIndex < end) {
                            std::cout << "Comparing " << array[firstPartIndex].getStudentName() << " (" << array[firstPartIndex].getResult() << ") with "
                                      << array[secondPartIndex].getStudentName() << " (" << array[secondPartIndex].getResult() << ")" << std::endl;

                            if (array[firstPartIndex].getResult() < array[secondPartIndex].getResult()) {
                                std::cout << "-> Inserting " << array[firstPartIndex].getStudentName() << " (" << array[firstPartIndex].getResult() << ") on the position " << sortedIndex << std::endl;
                                sorted[sortedIndex] = array[firstPartIndex];
                                firstPartIndex++;
                            } else {
                                std::cout << "-> Inserting " << array[secondPartIndex].getStudentName() << " (" << array[secondPartIndex].getResult() << ") on the position " << sortedIndex << std::endl;
                                sorted[sortedIndex] = array[secondPartIndex];
                                secondPartIndex++;
                            }
                            std::cout << "------------------------------------" << std::endl;
                            sortedIndex++;
                        }
                        while (firstPartIndex < middle) {
                            std::cout << "-> Inserting " << array[firstPartIndex].getStudentName() << " (" << array[firstPartIndex].getResult() << ") on the position " << sortedIndex
                                      << " because it is left over from the first part of the array" << std::endl;
                            sorted[sortedIndex] = array[firstPartIndex];
                            firstPartIndex++;
                            sortedIndex++;
                        }
                        while (secondPartIndex < end) {
                            std::cout << "-> Inserting " << array[secondPartIndex].getStudentName() << " (" << array[secondPartIndex].getResult() << ") on the position " << sortedIndex
                                      << " because it is left over from the second part of the array" << std::endl;
                            sorted[sortedIndex] = array[secondPartIndex];
                            secondPartIndex++;
                            sortedIndex++;
                        }

                        std::cout << "Rebuilding the original array keeping the initial object(s) not ordered (because the start is greater than 0)" << std::endl;
                        for (int indexOfMerged = 0; indexOfMerged < sortedIndex; indexOfMerged++) {
                            std::cout << "-> Inserting " << sorted[indexOfMerged].getStudentName() << " (" << sorted[indexOfMerged].getResult() << ") on the position " << indexOfMerged << std::endl;
                            array[start + indexOfMerged] = sorted[indexOfMerged];
                        }
                        return array;
                    }
                };

            } // namespace sort
        } // namespace algorithms
    } // namespace aelson
} // namespace tech

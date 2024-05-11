#include "../../search/pivot/Pivot.cpp"
#include <iostream>

namespace tech {
    namespace aelson {
        namespace algorithms {
            namespace sort {

                class QuickSort {
                public:
                    static void execute(Grade* grades, int start, int end) {
                        std::cout << "Executing for " << start << " - " << end << std::endl;
                        int numberOfElements = end - start;
                        if (numberOfElements > 1) {
                            int pivotIndex = tech::aelson::algorithms::search::Pivot::execute(grades, end);
                            execute(grades, start, pivotIndex);
                            execute(grades, pivotIndex + 1, end);
                        }
                    }

                };

            } // namespace sort
        } // namespace algorithms
    } // namespace aelson
} // namespace tech

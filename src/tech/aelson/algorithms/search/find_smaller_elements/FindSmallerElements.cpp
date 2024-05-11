#include "../../model/Grade.cpp"

namespace tech {
    namespace aelson {
        namespace algorithms {
            namespace search {

                class FindSmallerElements {
                public:
                    static int execute(Grade reference, Grade* unsortedGradle, int size) {
                        int lowerValuesCount = 0;
                        for (int i = 0; i < size; ++i) {
                            if (unsortedGradle[i].getResult() < reference.getResult()) {
                                lowerValuesCount++;
                            }
                        }
                        return lowerValuesCount;
                    }
                };

            } // namespace search
        } // namespace algorithms
    } // namespace aelson
} // namespace tech
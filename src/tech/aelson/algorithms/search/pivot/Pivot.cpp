#include "../../model/Grade.cpp"

namespace tech {
    namespace aelson {
        namespace algorithms {
            namespace search {

                class Pivot {
                public:
                    static int execute(Grade* grades, int start, int end) {
                        Grade pivot = grades[end - 1];
                        int lowerValuesCount = 0;
                        for (int index = start; index < end - 1; index++) {
                            Grade current = grades[index];
                            if (current.getResult() <= pivot.getResult()) {
                                swap(grades, index, lowerValuesCount);
                                lowerValuesCount++;
                            }
                        }
                        swap(grades, end - 1, lowerValuesCount);
                        return lowerValuesCount;
                    }

                    static void swap(Grade* grades, int from, int to) {
                        Grade temp = grades[to];
                        grades[to] = grades[from];
                        grades[from] = temp;
                    }
                };

            } // namespace search
        } // namespace algorithms
    } // namespace aelson
} // namespace tech

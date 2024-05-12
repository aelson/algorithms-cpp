#include "../../model/Product.cpp"

namespace tech {
    namespace aelson {
        namespace algorithms {
            namespace search {

                class FindSmallest {
                public:
                    static int execute(Product* products, int start, int end) {
                        int smallest = start;
                        for (int index = start; index <= end; index++) {
                            if (products[index].getPrice() < products[smallest].getPrice()) {
                                smallest = index;
                            }
                        }
                        return smallest;
                    }
                };

            } // namespace search
        } // namespace algorithms
    } // namespace aelson
} // namespace tech

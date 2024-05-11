#include "../../model/Product.cpp"

namespace tech {
    namespace aelson {
        namespace algorithms {
            namespace search {

                class SearchSmallest {
                public:
                    static int execute(Product* products, int start, int end) {
                        int smallest = start;
                        for (int atual = start; atual <= end; atual++) {
                            if (products[atual].getPrice() < products[smallest].getPrice()) {
                                smallest = atual;
                            }
                        }
                        return smallest;
                    }
                };

            } // namespace search
        } // namespace algorithms
    } // namespace aelson
} // namespace tech

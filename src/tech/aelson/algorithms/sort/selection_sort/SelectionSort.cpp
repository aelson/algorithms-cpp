#include <iostream>
#include "../../search/find_smallest/FindSmallest.cpp"

namespace tech {
    namespace aelson {
        namespace algorithms {
            namespace sort {

                class SelectionSort {
                public:
                    static void execute(Product* products, int numberOfElements) {
                        for (int current = 0; current < numberOfElements - 1; current++) {
                            std::cout << "I am in the element " << current << std::endl;

                            int smallest = tech::aelson::algorithms::search::FindSmallest::execute(products, current, numberOfElements - 1);

                            std::cout << "<-> Swapping element " << current << " with element " << smallest << std::endl;

                            Product currentProduct = products[current];
                            Product smallestProduct = products[smallest];

                            std::cout << "<-> Swapping product " << currentProduct.getName() << " with product " << smallestProduct.getName() << std::endl;

                            products[current] = smallestProduct;
                            products[smallest] = currentProduct;
                            std::cout << "------------------------------------" << std::endl;
                        }
                    }
                };

            } // namespace sort
        } // namespace algorithms
    } // namespace aelson
} // namespace tech

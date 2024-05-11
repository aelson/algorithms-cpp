#include <iostream>
#include "../../model/Product.cpp"

namespace tech {
    namespace aelson {
        namespace algorithms {
            namespace sort {

                class InsertionSort {
                public:
                    static void execute(Product *products, int numberOfElements) {
                        for (int current = 1; current < numberOfElements; current++) {
                            std::cout << "I am in the element " << current << std::endl;
                            int elementBeingAnalysed = current;
                            while (elementBeingAnalysed > 0 && products[elementBeingAnalysed].getPrice() <
                                                               products[elementBeingAnalysed - 1].getPrice()) {
                                std::cout << "<-> Swapping element " << elementBeingAnalysed << " with element "
                                          << elementBeingAnalysed - 1 << std::endl;

                                Product firstProduct = products[elementBeingAnalysed];
                                Product secondProduct = products[elementBeingAnalysed - 1];

                                std::cout << "<-> Swapping product " << firstProduct.getName() << " with product "
                                          << secondProduct.getName() << std::endl;

                                products[elementBeingAnalysed] = secondProduct;
                                products[elementBeingAnalysed - 1] = firstProduct;
                                std::cout << "------------------------------------" << std::endl;

                                elementBeingAnalysed--;
                            }
                        }
                    }
                };

            } // namespace sort
        } // namespace algorithms
    } // namespace aelson
} // namespace tech

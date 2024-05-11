#include "SearchSmallestTester.h"
#include <iostream>
#include "SearchSmallest.cpp"
#include "../model/Product.cpp"

int testSearchSmallest() {
    Product products[] = {
            Product("Tesla Model 3", 50000),
            Product("Toyota Corolla", 20000),
            Product("Ford Escape", 30000),
            Product("Honda Civic", 30000),
            Product("Audi Q5", 45000)
    };
    using namespace tech::aelson::algorithms::search;
    int smallest = SearchSmallest::execute(products, 0, 4);
    std::cout << smallest << std::endl;
    std::cout << "The car " << products[smallest].getName() << " costs " << products[smallest].getPrice() << std::endl;

    return 0;
}

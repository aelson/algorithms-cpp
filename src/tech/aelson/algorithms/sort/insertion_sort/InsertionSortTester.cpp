#include "InsertionSortTester.h"
#include "InsertionSort.cpp"

void testInsertionSort() {
    Product products[] = {
            Product("Ford Escape", 30000),
            Product("Toyota Corolla", 20000),
            Product("Audi Q5", 45000),
            Product("Honda Civic", 30000),
            Product("Tesla Model 3", 50000)
    };
    std::cout << "Original array: " << std::endl;
    for (const auto& product : products) {
        std::cout << product.getName() << " costs " << product.getPrice() << std::endl;
    }

    tech::aelson::algorithms::sort::InsertionSort::execute(products, 5);
    std::cout << "Sorted array: " << std::endl;
    for (const auto& product : products) {
        std::cout << product.getName() << " costs " << product.getPrice() << std::endl;
    }
}
#include <string>

class Product {
private:
    std::string name;
    double price;

public:
    Product(const std::string& name, double price) : name(name), price(price) {}

    double getPrice() const {
        return price;
    }

    std::string getName() const {
        return name;
    }
};

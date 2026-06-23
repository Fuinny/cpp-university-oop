#include <iostream>
#include <string>

class Product {
public:
    Product(std::string name, int quantity, double unit_price)
        : name(name), quantity(quantity), unit_price(unit_price) {
            total_sum += quantity * unit_price;
    }
    void display_product_info() const {
        std::cout << "Product name: " << name << '\n';
        std::cout << "Product quantity: " << quantity << '\n';
        std::cout << "Unit price of the product: " << unit_price << '\n';
        std::cout << "Total price of " << name << ": " << quantity * unit_price << '\n';
    }
    static void display_total_sum() {
        std::cout << "Total price of all products: " << total_sum << '\n';
    }
private:
    std::string name;
    int quantity;
    double unit_price;
    static double total_sum;
};

double Product::total_sum = 0.0;

int main() {
    Product laptop("Laptop", 2, 1200);
    laptop.display_product_info();
    Product::display_total_sum();

    std::cout << "\n-----------------------------\n\n";

    Product phone("Phone", 3, 500);
    phone.display_product_info();
    Product::display_total_sum();

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <limits>

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
    static void display_min_max_product_info() {
        std::cout << "Cheapest product:\n";
        cheapest_product->display_product_info();
        std::cout << "\nMost expensive product:\n";
        most_expensive_product->display_product_info();
        std::cout << '\n';
    }
    static void find_min(std::vector<Product*>& products) {
        double min_price = std::numeric_limits<double>::max();

        for (std::size_t i = 0; i < products.size(); ++i) {
            if (products[i]->unit_price < min_price) {
                min_price = products[i]->unit_price;
                cheapest_product = products[i];
            }
        }
    }
    static void find_max(std::vector<Product*>& products) {
        double max_price = std::numeric_limits<double>::lowest();

        for (std::size_t i = 0; i < products.size(); ++i) {
            if (products[i]->unit_price > max_price) {
                max_price = products[i]->unit_price;
                most_expensive_product = products[i];
            }
        }
    }
private:
    std::string name;
    int quantity;
    double unit_price;
    static double total_sum;
    static Product* cheapest_product;
    static Product* most_expensive_product;
};

double Product::total_sum = 0.0;
Product* Product::cheapest_product = nullptr;
Product* Product::most_expensive_product = nullptr;

int main() {
    std::vector<Product*> products;

    products.push_back(new Product("Laptop", 2, 1200));
    products.push_back(new Product("Phone", 3, 500));
    products.push_back(new Product("Pencil", 2, 10));

    Product::find_max(products);
    Product::find_min(products);
    Product::display_min_max_product_info();
    Product::display_total_sum();

    for (std::size_t i = 0; i < products.size(); ++i) {
        delete products[i];
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

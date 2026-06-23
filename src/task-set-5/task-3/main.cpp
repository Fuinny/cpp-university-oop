#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cctype>

class Product {
public:
    Product(std::string name, int amount, double unit_price) : name(name), amount(amount), unit_price(unit_price) {}
    virtual ~Product() = default;
    virtual double calculate_value() const {
        return amount * unit_price;
    }
protected:
    std::string name;
    int amount;
    double unit_price;
};

class ProductWithDiscount : public Product {
public:
    ProductWithDiscount(std::string name, int amount, double unit_price, double discount)
        : Product(name, amount, unit_price), discount(discount) {}
    virtual double calculate_value() const override {
        return amount * unit_price * (1 - discount / 100);
    }
private:
    double discount;
};

int main() {
    std::vector<Product*> cart;

    while (true) {
        std::string name = "";
        int amount = 0;
        double unit_price = 0.0;
        char yes_or_no = ' ';
        double discount = 0.0;

        std::cout << "Enter product name: ";
        std::cin >> name;

        std::cout << "Enter amount of product: ";
        std::cin >> amount;

        std::cout << "Enter unit price (€): ";
        std::cin >> unit_price;

        std::cout << "Is product on discount? (y/n): ";
        std::cin >> yes_or_no;

        if (std::tolower(yes_or_no) == 'y') {
            std::cout << "Enter discount (%): ";
            std::cin >> discount;
            cart.push_back(new ProductWithDiscount(name, amount, unit_price, discount));
        } else {
            cart.push_back(new Product(name, amount, unit_price));
        }

        std::cout << "Would you like to add another product? (y/n): ";
        std::cin >> yes_or_no;

        if (std::tolower(yes_or_no) == 'n') {
            break;
        }
    }

    double value = 0.0;

    for (std::size_t i = 0; i < cart.size(); ++i) {
        value += cart[i]->calculate_value();
    }

    std::cout << "\n---------------------------------------\n";
    std::cout << "\nValue: " << value << "€\n";

    for (Product* p : cart) {
        delete p;
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

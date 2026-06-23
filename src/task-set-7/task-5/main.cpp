#include <iostream>
#include <cmath>
#include <string>
#include <limits>

class CoffeeMachine {
public:
    static void get_menu() {
        std::cout << "Menu:\n";
        for (int i = 0; i < 5; ++i) {
            std::cout << i + 1 << ". " << coffee_names[i] << " " << coffee_prices[i] << " €\n";
        }
    }
    static void select_coffee() {
        int user_choice = 0;
        while (true) {
            std::cout << "\nPlease choose the coffee you want (1-5): ";
            std::cin >> user_choice;

            if (user_choice >= 1 && user_choice <= 5) {
                break;
            }
            std::cout << "Invalid choice. Please select a number between 1 and 5.\n";
        }
        chosen_coffee = user_choice;
    }
    static void pay_for_coffee() {
        double user_money = 0.0;
        std::cout << "\nYou need to pay " << coffee_prices[chosen_coffee - 1] << " € for " << coffee_names[chosen_coffee - 1] << ": ";
        std::cin >> user_money;
        user_paid = user_money;
    }
    static void give_change() {
        if (user_paid < coffee_prices[chosen_coffee - 1]) {
            std::cerr << "Error! Not enough money to pay!\n";
            return;
        } else {
            int valid_coins[8] = { 200, 100, 50, 20, 10, 5, 2, 1 }; // All valid euro coins in cents.
            int change = static_cast<int>(std::round((user_paid * 100) - (coffee_prices[chosen_coffee - 1] * 100)));

            int total_change_cents = change;

            std::cout << "\nYour change:\n";

            int current_coin = 0;
            while (change > 0 && current_coin < 8) {
                if (valid_coins[current_coin] <= change) {
                    change -= valid_coins[current_coin];
                    std::cout << static_cast<double>(valid_coins[current_coin]) / 100.0 << " €\n";
                } else {
                    ++current_coin;
                }
            }

            std::cout << "\nIn total:\n";
            std::cout << static_cast<double>(total_change_cents) / 100.0 << " €\n";
        }
    }
private:
    static int chosen_coffee;
    static double user_paid, coffee_prices[5];
    static std::string coffee_names[5];
};

int CoffeeMachine::chosen_coffee = 0;
double CoffeeMachine::user_paid = 0;
double CoffeeMachine::coffee_prices[5] = { 0.85, 1.50, 1.30, 1.65, 1.25 };
std::string CoffeeMachine::coffee_names[5] = { "Black", "Espresso", "Americana", "With Milk", "Mocha" };

int main() {
    CoffeeMachine::get_menu();
    CoffeeMachine::select_coffee();
    CoffeeMachine::pay_for_coffee();
    CoffeeMachine::give_change();

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

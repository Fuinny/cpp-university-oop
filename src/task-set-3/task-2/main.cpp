#include "worker.hpp"

#include <limits>
#include <iostream>

int main() {
    int user_age = 0, user_experience = 0;
    double user_workplace_price = 0.0;

    std::cout << "Enter worker's age: ";
    std::cin >> user_age;
    std::cout << "Enter worker's experience: ";
    std::cin >> user_experience;
    std::cout << "Enter workplace price: ";
    std::cin >> user_workplace_price;

    Worker worker(user_age, user_experience, user_workplace_price);

    worker.get_worker_info();

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

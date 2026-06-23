#include "worker.hpp"

#include <iostream>

int main() {
    Worker bob;

    bob.age = 30;
    bob.experience = 10;
    bob.salary = 4300;

    std::cout << "Employee Bob's age is: " << bob.age
        << ", his experience is " << bob.experience
        << " and his salary is " << bob.salary << " €\n";

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

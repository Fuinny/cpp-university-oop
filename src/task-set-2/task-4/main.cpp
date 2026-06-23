#include "worker.hpp"

#include <iostream>

int main() {
    Worker bob(30, 10, 3300);

    std::cout << "Employee Bob's age is: " << bob.get_age()
        << ", his experience is " << bob.get_experience()
        << " and his salary is " << bob.get_salary() << " €\n";
    std::cout << "Bob's income tax: " << bob.get_income_tax() << " €\n";
    std::cout << "Bob's sodra tax: " << bob.get_sodra_tax() << " €\n";

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

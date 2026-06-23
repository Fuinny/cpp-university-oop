#include "worker.hpp"

#include <iostream>
#include <limits>

int main() {
    Worker bob;
    int user_input = 0;

    std::cout << "Enter Bob's age: ";
    std::cin >> user_input;
    bob.set_age(user_input);

    std::cout << "Enter Bob's experience: ";
    std::cin >> user_input;
    bob.set_experience(user_input);

    std::cout << "Enter Bob's salary: ";
    std::cin >> user_input;
    bob.set_salary(user_input);

    std::cout << "Employee Bob's age is: " << bob.get_age()
        << ", his experience is " << bob.get_experience()
        << " and his salary is " << bob.get_salary() << " €\n";

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

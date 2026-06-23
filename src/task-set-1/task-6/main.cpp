#include <iostream>
#include <limits>

bool is_number_prime(int number) {
    int count_of_divisions = 2;

    for (int i = 2; i < number; ++i) {
        if (number % i == 0) {
            ++count_of_divisions;

            if (count_of_divisions > 2) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int number = 0;

    std::cout << "Enter an integer greater than 1: ";
    while (!(std::cin >> number) || number <= 1) {
        std::cout << "Error! Please enter an integer greater than 1: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if (is_number_prime(number)) {
        std::cout << number << " is a prime number.\n";
    } else {
        std::cout << number << " is a composite number.\n";
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

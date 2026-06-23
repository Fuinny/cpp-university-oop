#include <iostream>
#include <limits>
#include <cmath>

int main() {
    int number = 0;
    unsigned int sum = 0;

    std::cout << "Enter a number: ";
    while (!(std::cin >>number)) {
        std::cout << "Error! Please enter an integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if (number < 0) {
        number = std::abs(number);
    }

    while (number != 0) {
        sum += (unsigned int) number % 10;
        number = number / 10;
    }

    std::cout << "Sum of digits of a number is " << sum << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

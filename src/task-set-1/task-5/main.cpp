#include <iostream>
#include <limits>

long long int factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    } else {
        return factorial(number - 1) * number;
    }
}

int main() {
    int number = 0;

    std::cout << "Enter the number whose factorial you want to calculate: ";
    while (!(std::cin >> number) || number < 0) {
        std::cout << "Error! Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Factorial: " << factorial(number) << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

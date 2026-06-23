#include <iostream>
#include <stack>
#include <limits>

int main() {
    int decimal_number = 0;
    std::stack<int> binary_stack;

    std::cout << "Enter any non-negative decimal number: ";
    std::cin >> decimal_number;

    if (decimal_number < 0) {
        std::cerr << "Error! You must provide non-negative decimal number!\n";
        return 1;
    }

    if (decimal_number == 0) {
        std::cout << "0";
    }

    while (decimal_number > 0) {
        binary_stack.push(decimal_number % 2);
        decimal_number /= 2;
    }

    while (!binary_stack.empty()) {
        std::cout << binary_stack.top();
        binary_stack.pop();
    }

    std::cout << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

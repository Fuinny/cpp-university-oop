#include <iostream>
#include <limits>

int main() {
    unsigned int limit = 0;

    std::cout << "To what number should the squares be displayed?: ";
    while (!(std::cin >> limit)) {
        std::cout << "Error! Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    for (unsigned int i = 1; i <= limit; ++i) {
        long long int square = i * i;
        std::cout << "The square of the number " << i << " is " << square << '\n';
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

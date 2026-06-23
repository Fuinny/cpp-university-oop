#include <iostream>

int main() {
    int numbers[10] = { 1, 1, 3, 4, 5, 7, 7, 8, 9, 10 };
    const int array_size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Initial array:\n";
    for (int i = 0; i < array_size; ++i) {
        std::cout << numbers[i] << ' ';
    }
    std::cout << '\n';

    std::cout << "\nArray values that are not repeated:\n";
    for (int i = 0; i < array_size; ++i) {
        bool is_unique = true;

        for (int j = 0; j < array_size; ++j) {
            if (j == i) {
                continue;
            }

            if (numbers[j] == numbers[i]) {
                is_unique = false;
                break;
            }
        }

        if (is_unique) {
            std::cout << numbers[i] << ' ';
        }
    }
    std::cout << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();
}

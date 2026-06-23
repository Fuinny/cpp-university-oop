#include <iostream>

int main() {
    int numbers[10] = {3, 2, 16, 9, 21, 12, 0, 1, 23, 11};
    const int array_size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Initial array:\n";
    for (int i = 0; i < array_size; ++i) {
        std::cout << numbers[i] << ' ';
    }
    std::cout << '\n';

    for (int i = 0; i < array_size - 1; ++i) {
        bool swapped = false;

        for (int j = 0; j < array_size - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }

    std::cout << "\nSorted array in ascending order:\n";
    for (int i = 0; i < array_size; ++i) {
        std::cout << numbers[i] << ' ';
    }
    std::cout << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();
}

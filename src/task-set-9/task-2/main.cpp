#include <iostream>
#include <iomanip>
#include <queue>
#include <limits>

int main() {
    std::queue<int> last_five_numbers;
    std::queue<double> last_four_average;

    int user_input;
    while(std::cin >> user_input) {
        last_five_numbers.push(user_input);

        if (last_five_numbers.size() > 5) {
            last_five_numbers.pop();
        }

        if (last_five_numbers.size() == 5) {
            double sum = 0.0;
            std::queue<int> temp_queue = last_five_numbers;

            while (!temp_queue.empty()) {
                sum += temp_queue.front();
                temp_queue.pop();
            }

            double average = sum / 5.0;

            last_four_average.push(average);
            if (last_four_average.size() > 4) {
                last_four_average.pop();
            }

            std::cout << "Last four average: ";
            std::queue<double> temp_average = last_four_average;
            while (!temp_average.empty()) {
                std::cout << std::fixed << std::setprecision(2) << temp_average.front() << " ";
                temp_average.pop();
            }
            std::cout << '\n';
        }
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

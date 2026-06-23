#include <iostream>
#include <string>
#include <deque>
#include <map>
#include <limits>

int main() {
    std::map<std::string, std::deque<std::string>> calendar;

    calendar["Thursday"] = {
        "Walk the dog",
        "Go to lectures",
        "Complete programming tasks"
    };

    bool is_close_requested = false;
    std::string user_day = "Thursday";

    while (!is_close_requested) {
        std::cout << "Selected day: " << user_day << "\n\n";

        std::cout << "What do you want to do?\n";
        std::cout << "[1] Select day\n";
        std::cout << "[2] Show day's activities\n";
        std::cout << "[3] Add new day's activities\n";
        std::cout << "[4] Remove day's activities\n";
        std::cout << "[5] Exit\n";

        int user_choice = 0;
        std::cout << "Your choice: ";
        std::cin >> user_choice;

        std::string new_task;

        switch (user_choice) {
        case 1:
            std::cout << "Enter day of the week: ";
            std::cin >> user_day;
            break;
        case 2:
            if (calendar.find(user_day) != calendar.end()) {
                std::cout << "\nDay of the week: " << user_day << '\n';
                std::cout << "\nActivities:\n";
                for (std::string task : calendar[user_day]) {
                    std::cout << "[*] " << task << '\n';
                }
            } else {
                std::cout << "There are no activities for today...\n";
            }
            std::cout << "\nPress ENTER to continue...\n";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
            break;
        case 3:
            std::cout << "\nEnter a new task (or leave it blank): ";
            std::cin.ignore();
            std::getline(std::cin, new_task);
            if (!new_task.empty()) {
                calendar[user_day].push_back(new_task);
            }
            break;
        case 4:
            if (!calendar[user_day].empty()) {
                std::cout << "[1] Remove first activity\n";
                std::cout << "[2] Remove last activity\n";
                int choice = 0;
                std::cin >> choice;
                switch (choice) {
                case 1:
                    calendar[user_day].pop_front();
                    break;
                case 2:
                    calendar[user_day].pop_back();
                    break;
                default:
                    std::cerr << "No such activity!\n";
                    break;
                }
            }
            break;
        case 5:
            is_close_requested = true;
            break;
        default:
            std::cerr << "Error! Wrong option!\n";
            break;
        }
    }

    return 0;
}

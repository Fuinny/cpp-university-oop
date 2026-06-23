#include <iostream>
#include <string>
#include <limits>

class Worker {
public:
    Worker() : name("None"), age(0), experience(0), salary(0.0) {}
    Worker(std::string name, int age, int experience, double salary)
        : name(name), age(age), experience(experience), salary(salary) {}
    int get_age() const {
        return age;
    }
    int get_experience() const {
        return experience;
    }
    double get_salary() const {
        return salary;
    }
    void get_info() const {
        std::cout << "Name: " << name << " Age: " << age << " Experience: " << experience << " Salary: " << salary << '\n';
    }
private:
    std::string name;
    int age, experience;
    double salary;
};

class Personnel {
public:
    Personnel() {
        workers[0] = Worker("Jonas", 25, 3, 1500);
		workers[1] = Worker("Petras", 35, 10, 2500);
		workers[2] = Worker("Ona", 52, 30, 3200);
		workers[3] = Worker("Ieva", 28, 5, 1800);
		workers[4] = Worker("Kazys", 65, 40, 4000);
		workers[5] = Worker("Aldona", 72, 50, 4500);
		workers[6] = Worker("Tomas", 31, 8, 2200);
		workers[7] = Worker("Rasa", 49, 20, 2800);
		workers[8] = Worker("Dalia", 22, 2, 1300);
		workers[9] = Worker("Vytas", 75, 55, 5000);
    }
    void filter(bool (*filter)(const Worker&, int, int), int min, int max) {
        for (int i = 0; i < 10; ++i) {
            if (filter(workers[i], min, max)) {
                workers[i].get_info();
            }
        }
    }
private:
    Worker workers[10];
};

bool filter_by_age(const Worker& worker, int min, int max) {
    return worker.get_age() >= min && worker.get_age() <= max;
}

bool filter_by_experience(const Worker& worker, int min, int max) {
    return worker.get_experience() >= min && worker.get_experience() <= max;
}

bool filter_by_salary(const Worker& worker, int min, int max) {
    return worker.get_salary() >= min && worker.get_salary() <= max;
}

int main() {
    Personnel p;

    int user_choice = 0;
	std::cout << "How to sort?:\n";
	std::cout << "[1] Age\n";
	std::cout << "[2] Experience\n";
	std::cout << "[3] Salary\n";
    std::cout << "Your choice: ";
	std::cin >> user_choice;

    if (user_choice < 1 || user_choice > 3) {
        std::cout << "Error! Wrong option!\n";
        return 1;
    }

    int user_min = 0, user_max = 0;
    std::cout << "\nEnter min and max: ";
	std::cin >> user_min >> user_max;

	std::cout << "\nFiltered results:\n";

	switch (user_choice)
	{
	case 1: p.filter(filter_by_age, user_min, user_max); break;
	case 2: p.filter(filter_by_experience, user_min, user_max); break;
	case 3: p.filter(filter_by_salary, user_min, user_max); break;
	default: std::cout << "There's no such option!\n"; break;
	}

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

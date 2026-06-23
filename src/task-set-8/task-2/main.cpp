#include <iostream>
#include <string>
#include <limits>

class Worker {
public:
    Worker() : name("None"), age(0) {}
    Worker(std::string name, int age) : name(name), age(age) {}
    int get_age() const {
        return age;
    }
    void get_info() const {
        std::cout << "Name: " << name << " Age: " << age << '\n';
    }
private:
    std::string name;
    int age;
};

class Personnel {
public:
    Personnel() {
        workers[0] = Worker("Jonas", 25);
		workers[1] = Worker("Petras", 35);
		workers[2] = Worker("Ona", 52);
		workers[3] = Worker("Ieva", 28);
		workers[4] = Worker("Kazys", 65);
		workers[5] = Worker("Aldona", 72);
		workers[6] = Worker("Tomas", 31);
		workers[7] = Worker("Rasa", 49);
		workers[8] = Worker("Dalia", 22);
		workers[9] = Worker("Vytas", 75);
    }
    void filter(bool (*filter)(int)) {
        for (int i = 0; i < 10; ++i) {
            if (filter(workers[i].get_age())) {
                workers[i].get_info();
            }
        }
    }
private:
    Worker workers[10];
};

bool is_young(int age) {
    return age >= 18 && age <= 30;
}

bool is_middle_age(int age) {
    return age >= 31 && age <= 50;
}

bool is_elderly(int age) {
    return age >= 51 && age <= 70;
}

bool is_old(int age) {
    return age >= 71;
}

int main() {
    Personnel p;

    int user_choice = 0;
	std::cout << "Which age group of workers do you want to see?:\n";
	std::cout << "[1] Young\n";
	std::cout << "[2] Middle Age\n";
	std::cout << "[3] Elderly\n";
	std::cout << "[4] Old\n";
    std::cout << "Your choice: ";
	std::cin >> user_choice;

    std::cout << '\n';

    if (user_choice < 1 || user_choice > 4) {
        std::cout << "Error! Wrong choice!\n";
        return 1;
    }

    switch (user_choice)
	{
	case 1: p.filter(is_young); break;
	case 2: p.filter(is_middle_age); break;
	case 3: p.filter(is_elderly); break;
	case 4: p.filter(is_old); break;
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

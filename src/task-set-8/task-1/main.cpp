#include <iostream>
#include <string>
#include <limits>

class Worker {
public:
    Worker(std::string name, std::string surname, std::string specialty, int age, int experience, double salary)
        : name(name), surname(surname), specialty(specialty), age(age), experience(experience), salary(salary) {}
    void set_name() {
        std::string name;
        std::cout << "Enter worker's name: ";
        std::cin >> name;
        this->name = name;
    }
    void set_surname() {
        std::string surname;
        std::cout << "Enter worker's surname: ";
        std::cin >> surname;
        this->surname = surname;
    }
    void set_specialty() {
        std::string specialty;
        std::cout << "Enter worker's specialty: ";
        std::cin >> specialty;
        this->specialty = specialty;
    }
    void set_age() {
        int age;
        std::cout << "Enter worker's age: ";
        std::cin >> age;
        this->age = age;
    }
    void set_experience() {
        int experience;
        std::cout << "Enter worker's experience: ";
        std::cin >> experience;
        this->experience = experience;
    }
    void set_salary() {
        double salary;
        std::cout << "Enter worker's salary: ";
        std::cin >> salary;
        this->salary = salary;
    }
    void get_name() {
        std::cout << "Name: " << name << '\n';
    }
    void get_surname() {
        std::cout << "Surname: " << surname << '\n';
    }
    void get_specialty() {
        std::cout << "Specialty: " << specialty << '\n';
    }
    void get_age() {
        std::cout << "Age: " << age << '\n';
    }
    void get_experience() {
        std::cout << "Experience: " << experience << '\n';
    }
    void get_salary() {
        std::cout << "Salary: " << salary << '\n';
    }
private:
    std::string name;
    std::string surname;
    std::string specialty;
    int age;
    int experience;
    double salary;
};

int main() {
    void (Worker::*fpoint)();
    fpoint = nullptr;

    std::cout << "In what order do you want to fill/read information about the worker?\n";
    std::cout << "[1] Name\n[2] Surname\n[3] Specialty\n[4] Age\n[5] Experience\n[6] Salary\n";

    int order[6];
    Worker generic_worker("None", "None", "None", 0, 0, 0);
    Worker *new_worker = &generic_worker;

    for (int i = 0; i < 6; ++i) {
        int choice = 0;
        std::cin >> choice;
        if (choice >= 1 && choice <= 6) {
            order[i] = choice - 1;
        } else {
            std::cout << "Error! Incorrect order!\n";
            return 1;
        }
    }

    for (int i = 0; i < 6; ++i) {
        switch (order[i]) {
        case 0: fpoint = &Worker::set_name; break;
		case 1: fpoint = &Worker::set_surname; break;
		case 2: fpoint = &Worker::set_specialty; break;
		case 3: fpoint = &Worker::set_age; break;
		case 4: fpoint = &Worker::set_experience; break;
		case 5: fpoint = &Worker::set_salary; break;
        }

        (new_worker->*fpoint)();
    }

    for (int i = 0; i < 6; i++) {
		switch (order[i]) {
		case 0: fpoint = &Worker::get_name; break;
		case 1: fpoint = &Worker::get_surname; break;
		case 2: fpoint = &Worker::get_specialty; break;
		case 3: fpoint = &Worker::get_age; break;
		case 4: fpoint = &Worker::get_experience; break;
		case 5: fpoint = &Worker::get_salary; break;
		}

        (new_worker->*fpoint)();
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

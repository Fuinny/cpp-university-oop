#include <iostream>
#include <limits>

class Worker {
public:
    class AgeOutOfRange {};
    class SalaryTooSmall {};
    class ExperienceOutOfRange {};
    void set_worker(int age, int experience, double salary) {
        if (age < 18 || age > 70) {
            throw AgeOutOfRange();
        } else if (experience > age - 18 || experience < 0) {
            throw ExperienceOutOfRange();
        } else if (salary < 500) {
            throw SalaryTooSmall();
        } else {
            this->age = age;
            this->salary = salary;
            this->experience = experience;
        }
    }
private:
    double salary;
    int age, experience;
};

int main() {
    int age = 0, experience = 0;
    double salary = 0.0;

    std::cout << "Enter worker's data (age, experience, salary): ";
    std::cin >> age >> experience >> salary;

    try {
        Worker worker;
        worker.set_worker(age, experience, salary);
    } catch (const Worker::AgeOutOfRange& ex) {
        std::cerr << "The age is either too young (<18) or too old (>70)!\n";
        return 1;
    } catch (const Worker::ExperienceOutOfRange& ex) {
        std::cerr << "The experience of the worker is unrealistic!\n";
        return 1;
    } catch (const Worker::SalaryTooSmall& ex) {
        std::cerr << "The worker's salary cannot be smaller than 500!\n";
        return 1;
    }

    std::cout << "\nWorker's information is successfully saved!\n";

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

#include "worker.hpp"
#include "salary.hpp"

#include <iostream>

Worker::Worker(int age, int experience, double salary) : age(age), experience(experience), salary(salary) {}

void Worker::get_worker_info() const {
    std::cout << "\nInformation about the employee:\n";
    std::cout << "-------------------------------\n";
    std::cout << "Age: " << age << '\n';
    std::cout << "Work experience: " << experience << '\n';

    salary.get_salary_info();
}

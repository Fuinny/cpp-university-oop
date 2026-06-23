#include "worker.hpp"

void Worker::set_age(int age) {
    this->age = age;
}

void Worker::set_experience(int experience) {
    this->experience = experience;
}

void Worker::set_salary(int salary) {
    this->salary = salary;
}

int Worker::get_age() {
    return age;
}

int Worker::get_experience() {
    return experience;
}

int Worker::get_salary() {
    return salary;
}

double Worker::get_income_tax() const {
    return salary * (double) 0.15;
}

double Worker::get_sodra_tax() const {
    return salary * (double) 0.09;
}

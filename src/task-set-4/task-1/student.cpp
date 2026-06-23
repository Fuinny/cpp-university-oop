#include "student.hpp"

#include <string>
#include <iostream>

void Student::set_id(int id) {
    this->id = id;
}

void Student::set_average(double average) {
    this->average = average;
}

void Student::set_subjects(std::string (&subjects)[5]) {
    for (int i = 0; i < 5; ++i) {
        this->subjects[i] = subjects[i];
    }
}

int Student::get_id() const {
    return id;
}

double Student::get_average() const {
    return average;
}

void Student::get_subjects() const {
    for (int i = 0; i < 5; ++i) {
        std::cout << subjects[i] << '\n';
    }
}

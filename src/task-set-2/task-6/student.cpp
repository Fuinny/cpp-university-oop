#include "student.hpp"

#include <string>

Student::Student() {
    this->name = "";
    this->surname = "";

    for (int i = 0; i < 5; ++i) {
        this->credits[i] = 0;
        this->grades[i] = 0;
    }
}

Student::Student(std::string name, std::string surname, int (&credits)[5], int (&grades)[5]) {
    this->name = name;
    this->surname = surname;

    for (int i = 0; i < 5; ++i) {
        this->credits[i] = credits[i];
        this->grades[i] = grades[i];
    }
}

void Student::set_name(const std::string& name) {
    this->name = name;
}

void Student::set_surname(const std::string& surname) {
    this->surname = surname;
}

void Student::set_credits(const int (&credits)[5]) {
    for (int i = 0; i < 5; ++i) {
        this->credits[i] = credits[i];
    }
}

void Student::set_grades(const int (&grades)[5]) {
    for (int i = 0; i < 5; ++i) {
        this->grades[i] = grades[i];
    }
}

std::string Student::get_name() const {
    return this->name;
}

std::string Student::get_surname() const {
    return this->surname;
}

const int* Student::get_credits() const {
    return this->credits;
}

const int* Student::get_grades() const {
    return this->grades;
}

double Student::get_average() const {
    int credit_sum = 0;
    for (int i = 0; i < 5; ++i) {
        credit_sum += credits[i];
    }

    double weighted_sum = 0.0;
    for (int i = 0; i < 5; ++i) {
        weighted_sum += credits[i] * grades[i];
    }

    return weighted_sum / credit_sum;
}

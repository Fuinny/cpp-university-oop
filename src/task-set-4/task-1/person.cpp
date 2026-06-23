#include "person.hpp"

#include <string>

void Person::set_age(int age) {
    this->age = age;
}

void Person::set_name(const std::string& name) {
    this->name = name;
}

void Person::set_surname(const std::string& surname) {
    this->surname = surname;
}

int Person::get_age() const {
    return age;
}

std::string Person::get_name() const {
    return name;
}

std::string Person::get_surname() const {
    return surname;
}

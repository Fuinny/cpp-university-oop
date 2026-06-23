#pragma once

#include "person.hpp"

#include <string>

class Student : public Person {
public:
    void set_id(int id);
    void set_average(double average);
    void set_subjects(std::string (&subjects)[5]);
    int get_id() const;
    double get_average() const;
    void get_subjects() const;
private:
    int id;
    double average;
    std::string subjects[5];
};

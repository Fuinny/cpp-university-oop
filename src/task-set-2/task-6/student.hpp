#pragma once

#include <string>

class Student {
public:
    Student();
    Student(std::string name, std::string surname, int (&credits)[5], int (&grades)[5]);
    void set_name(const std::string& name);
    void set_surname(const std::string& surname);
    void set_credits(const int (&credits)[5]);
    void set_grades(const int (&grades)[5]);
    std::string get_name() const;
    std::string get_surname() const;
    const int* get_credits() const;
    const int* get_grades() const;
    double get_average() const;
private:
    std::string name;
    std::string surname;
    int credits[5];
    int grades[5];
};

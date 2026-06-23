#pragma once

#include <string>

class Person {
public:
    void set_age(int age);
    void set_name(const std::string& name);
    void set_surname(const std::string& surname);
    int get_age() const;
    std::string get_name() const;
    std::string get_surname() const;
protected:
    int age;
    std::string name;
    std::string surname;
};

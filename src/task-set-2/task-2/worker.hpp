#pragma once

class Worker {
public:
    void set_age(int age);
    void set_experience(int experience);
    void set_salary(int salary);
    int get_age();
    int get_experience();
    int get_salary();
private:
    int age;
    int experience;
    int salary;
};

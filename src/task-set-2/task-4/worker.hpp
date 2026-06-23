#pragma once

class Worker {
public:
    void set_age(int age);
    void set_experience(int experience);
    void set_salary(int salary);
    int get_age();
    int get_experience();
    int get_salary();
    double get_income_tax() const;
    double get_sodra_tax() const;
    Worker();
    Worker(int user_age, int user_experience, int user_salary);
private:
    int age;
    int experience;
    int salary;
};

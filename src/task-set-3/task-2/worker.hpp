#pragma once

#include "salary.hpp"

class Worker {
public:
    Worker(int age, int experience, double salary);
    void get_worker_info() const;
private:
    int age;
    int experience;
    Salary salary;
};

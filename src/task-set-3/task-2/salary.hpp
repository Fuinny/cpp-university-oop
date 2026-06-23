#pragma once

class Salary {
public:
    Salary(double workplace_price);
    void get_salary_info() const;
private:
    double workplace_price;
    double social_security_employer;
    double social_security_employee;
    double income_tax;
    double gross_salary;
    double net_salary;
};

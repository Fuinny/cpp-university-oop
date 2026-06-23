#include "salary.hpp"

#include <iostream>

Salary::Salary(double workplace_price) {
    this->workplace_price = workplace_price;

    social_security_employer = workplace_price * 0.3117;
    gross_salary = workplace_price - social_security_employer;
    social_security_employee = gross_salary * 0.09;
    income_tax = gross_salary * 0.15;
    net_salary = gross_salary - social_security_employee - income_tax;
}

void Salary::get_salary_info() const {
    std::cout << "\nInformation about employee salary:\n";
    std::cout << "----------------------------------\n";
    std::cout << "Workplace price: " << workplace_price << " €\n";
    std::cout << "The employer pays Social Security (31.17%): " << social_security_employer << " €\n";
    std::cout << "Gross salary: " << gross_salary << " €\n";
    std::cout << "The employee pays Social Security (9%): " << social_security_employee << " €\n";
    std::cout << "Income tax (15%): " << income_tax << " €\n";
    std::cout << "Net salary: " << net_salary << " €\n";
}

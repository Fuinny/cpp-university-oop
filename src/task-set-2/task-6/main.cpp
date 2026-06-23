#include "student.hpp"

#include <iostream>

int main() {
    const int sample_grades[5] = { 10, 9, 8, 7, 6 };
    const int sample_credits[5] = { 3, 5, 6, 4, 6 };

    Student sample_student;

    sample_student.set_name("Sample");
    sample_student.set_surname("Student");
    sample_student.set_credits(sample_credits);
    sample_student.set_grades(sample_grades);

    std::cout << "Student: " << sample_student.get_name() << ' ' << sample_student.get_surname() << '\n';
    std::cout << "Student's semester average: " << sample_student.get_average() << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

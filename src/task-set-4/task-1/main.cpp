#include "person.hpp"
#include "student.hpp"

#include <string>
#include <iostream>

int main() {
    std::string subjects[5] = {
        "Mathematics",
        "Logic",
        "Ethics",
        "Programming",
        "English"
    };

    Student sample_student;

    sample_student.set_name("Sample");
    sample_student.set_surname("Student");
    sample_student.set_age(19);
    sample_student.set_id(112233);
    sample_student.set_average(9.44);
    sample_student.set_subjects(subjects);

    std::cout << "Information about the student:\n";
    std::cout << "Name: " << sample_student.get_name() << '\n';
    std::cout << "Surname: " << sample_student.get_surname() << '\n';
    std::cout << "Age: " << sample_student.get_age() << '\n';
    std::cout << "ID: " << sample_student.get_id() << '\n';
    std::cout << "Average: " << sample_student.get_average() << '\n';
    std::cout << "Subjects:\n";
    sample_student.get_subjects();

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

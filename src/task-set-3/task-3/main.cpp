#include "circle.hpp"
#include "cone.hpp"

#include <iostream>

int main() {
    Circle first_circle(3);
    Circle second_circle(5);
    Cone sample_cone(10, first_circle, second_circle);

    std::cout << "The volume of the truncated cone is: " << sample_cone.calculate_volume() << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

#include "geometric_figure.hpp"

#include <iostream>

int main() {
    GeometricFigure triangle(3, true);

    std::cout << "Geometric figure data:\n";
    std::cout << "----------------------\n";
    std::cout << "Number of sides: " << triangle.get_side_number() << '\n';
    std::cout << "Is geometric figure right?: ";

    if (triangle.get_is_right()) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

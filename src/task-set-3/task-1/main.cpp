#include "point.hpp"
#include "rectangle.hpp"

#include <iostream>

int main() {
    Point a, b, c, d;
    int user_x = 0, user_y = 0;

    std::cout << "Enter the coordinate (x) of point a: ";
    std::cin >> user_x;
    a.set_x(user_x);
    std::cout << "Enter the coordinate (y) of point a: ";
    std::cin >> user_y;
    a.set_y(user_y);

    std::cout << "Enter the coordinate (x) of point b: ";
    std::cin >> user_x;
    b.set_x(user_x);
    std::cout << "Enter the coordinate (y) of point b: ";
    std::cin >> user_y;
    b.set_y(user_y);

    std::cout << "Enter the coordinate (x) of point c: ";
    std::cin >> user_x;
    c.set_x(user_x);
    std::cout << "Enter the coordinate (y) of point c: ";
    std::cin >> user_y;
    c.set_y(user_y);

    std::cout << "Enter the coordinate (x) of point d: ";
    std::cin >> user_x;
    d.set_x(user_x);
    std::cout << "Enter the coordinate (y) of point d: ";
    std::cin >> user_y;
    d.set_y(user_y);

    Rectangle sample_rectangle(a, b, c, d);

    std::cout << "\nRectangle information:\n";
    std::cout << "Point a: (" << a.get_x() << ", " << a.get_y() << ")\n";
    std::cout << "Point b: (" << b.get_x() << ", " << b.get_y() << ")\n";
    std::cout << "Point c: (" << c.get_x() << ", " << c.get_y() << ")\n";
    std::cout << "Point d: (" << d.get_x() << ", " << d.get_y() << ")\n";

    std::cout << "Perimeter: " << sample_rectangle.get_perimeter() << '\n';
    std::cout << "Area: " << sample_rectangle.get_area() << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

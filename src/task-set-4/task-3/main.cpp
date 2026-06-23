#include <iostream>
#include <limits>

class Circle {
public:
    Circle(double radius) : radius(radius) {}
    double get_area() const { return 3.141519 * radius * radius; }
protected:
    double radius;
};

class Cylinder : public Circle {
public:
    Cylinder(double radius, double height) : Circle(radius), height(height) {}
    double get_volume() const { return get_area() * height; }
private:
    double height;
};

int main() {
    double user_radius = 0.0, user_height = 0.0;

    std::cout << "Enter radius: ";
    std::cin >> user_radius;
    std::cout << "Enter height: ";
    std::cin >> user_height;

    Cylinder c(user_radius, user_height);

    std::cout << "Volume: " << c.get_volume() << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

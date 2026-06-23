#include "circle.hpp"

Circle::Circle(double radius) {
    this->radius = radius;
}

double Circle::calculate_area() const {
    return 3.14159 * (radius * radius);
}

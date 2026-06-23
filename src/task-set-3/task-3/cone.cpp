#include "cone.hpp"

#include <cmath>

Cone::Cone(double height, Circle first_circle, Circle second_circle) :
    height(height),
    first_circle(first_circle),
    second_circle(second_circle) {}

double Cone::calculate_volume() const {
    double first_circle_area = first_circle.calculate_area();
    double second_circle_area = second_circle.calculate_area();

    return (first_circle_area + std::sqrt(first_circle_area * second_circle_area) + second_circle_area) * height / 3;
}

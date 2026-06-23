#pragma once

#include "circle.hpp"

class Cone {
public:
    Cone(double height, Circle first_circle, Circle second_circle);
    double calculate_volume() const;
private:
    double height;
    Circle first_circle;
    Circle second_circle;
};

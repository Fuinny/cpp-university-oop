#include "geometric_figure.hpp"

void GeometricFigure::set_side_number(int side_number) {
    this->side_number = side_number;
}

void GeometricFigure::set_is_right(bool is_right) {
    this->is_right = is_right;
}

int GeometricFigure::get_side_number() const {
    return side_number;
}

bool GeometricFigure::get_is_right() const {
    return is_right;
}

GeometricFigure::GeometricFigure(int side_number) {
    this->side_number = side_number;
    this->is_right = false;
}

GeometricFigure::GeometricFigure(int side_number, bool is_right) {
    this->side_number = side_number;
    this->is_right = is_right;
}

#include "point.hpp"
#include "rectangle.hpp"

#include <cmath>

Rectangle::Rectangle(Point a, Point b, Point c, Point d) {
    top_left = a;
    top_right = b;
    bottom_left = c;
    bottom_right = d;
}

void Rectangle::set_top_left(Point top_left) {
    this->top_left = top_left;
}

void Rectangle::set_top_right(Point top_right) {
    this->top_right = top_right;
}

void Rectangle::set_bottom_left(Point bottom_left) {
    this->bottom_left = bottom_left;
}

void Rectangle::set_bottom_right(Point bottom_right) {
    this->bottom_right = bottom_right;
}

Point Rectangle::get_top_left() const {
    return top_left;
}

Point Rectangle::get_top_right() const {
    return top_right;
}

Point Rectangle::get_bottom_left() const {
    return bottom_left;
}

Point Rectangle::get_bottom_right() const {
    return bottom_right;
}

double Rectangle::get_length() const {
    return std::sqrt(
        std::pow(top_left.get_x() - top_right.get_x(), 2) + std::pow(top_left.get_y() - top_right.get_y(), 2)
    );
}

double Rectangle::get_width() const {
    return std::sqrt(
        std::pow(top_left.get_x() - bottom_left.get_x(), 2) + std::pow(top_left.get_y() - bottom_left.get_y(), 2)
    );
}

double Rectangle::get_perimeter() const {
    return 2 * (get_length() + get_width());
}

double Rectangle::get_area() const {
    return get_length() * get_width();
}

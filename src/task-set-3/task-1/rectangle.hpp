#pragma once

#include "point.hpp"

class Rectangle {
public:
    Rectangle(Point a, Point b, Point c, Point d);
    void set_top_left(Point top_left);
    void set_top_right(Point top_right);
    void set_bottom_left(Point bottom_left);
    void set_bottom_right(Point bottom_right);
    Point get_top_left() const;
    Point get_top_right() const;
    Point get_bottom_left() const;
    Point get_bottom_right() const;
    double get_length() const;
    double get_width() const;
    double get_perimeter() const;
    double get_area() const;
private:
    Point top_left;
    Point top_right;
    Point bottom_left;
    Point bottom_right;
};

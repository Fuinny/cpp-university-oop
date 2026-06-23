#pragma once

class GeometricFigure {
public:
    void set_side_number(int number);
    void set_is_right(bool is_right);
    int get_side_number() const;
    bool get_is_right() const;
    GeometricFigure(int side_number);
    GeometricFigure(int side_number, bool is_right);
private:
    int side_number;
    bool is_right;
};

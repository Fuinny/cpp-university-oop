#pragma once

class Point {
public:
    void set_x(int x);
    void set_y(int y);
    int get_x() const;
    int get_y() const;
private:
    int x;
    int y;
};

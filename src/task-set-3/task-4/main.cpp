#include <iostream>
#include <cmath>

class Point {
public:
    Point(int x, int y) : x(x), y(y) {}
    int get_x() const { return x; }
    int get_y() const { return y; }
private:
    int x;
    int y;
};

class Segment {
public:
    Segment(Point start, Point end) : start(start), end(end) {}
    double calculate_lenght() const {
        return std::sqrt(std::pow(end.get_x() - start.get_x(), 2) + std::pow(end.get_y() - start.get_y(), 2));
    }
private:
    Point start;
    Point end;
};

class Circle {
public:
    Circle(double radius) : radius(radius) {}
    double calculate_area() const { return 3.14159 * radius * radius; }
private:
    double radius;
};

class Cone {
public:
    Cone(double height, Circle first_circle, Circle second_circle) :
        height(height),
        first_circle(first_circle),
        second_circle(second_circle) {}
    double calculate_volume() const {
        double first_circle_area = first_circle.calculate_area();
        double second_circle_area = second_circle.calculate_area();
        return (first_circle_area + std::sqrt(first_circle_area * second_circle_area) + second_circle_area) / 3 * height;
    }
private:
    double height;
    Circle first_circle;
    Circle second_circle;
};

int main() {
    Point p1(0, 0);
    Point p2(3, 0);
    Point p3(0, 4);
    Point p4(5, 4);

    Segment s1(p1, p2);
    Segment s2(p3, p4);

    Circle c1(s1.calculate_lenght());
    Circle c2(s2.calculate_lenght());

    Point p5(0, 0);
    Point p6(0, 10);

    Segment s3(p5, p6);

    Cone cn(s3.calculate_lenght(), c1, c2);

    std::cout << "The volume of the truncated cone is: " << cn.calculate_volume() << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

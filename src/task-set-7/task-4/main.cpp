#include <iostream>
#include <cmath>
#include <vector>

class Point {
public:
    Point(double x, double y) : x(x), y(y) {}
    void set_x(int x) { this->x = x; }
    void set_y(int y) { this->y = y; }
    double get_x() const { return x; }
    double get_y() const { return y; }
private:
    double x, y;
};

class Rectangle {
public:
    Rectangle(const Point& point) : point(point) {}
    double get_perimeter() const {
        return 2.0 * (std::abs(shared_point.get_x() - point.get_x()) + std::abs(shared_point.get_y() - point.get_y()));
    }
    double get_area() const {
        return std::abs(shared_point.get_x() - point.get_x()) * std::abs(shared_point.get_y() - point.get_y());
    }
    void get_info() const {
        std::cout << "Perimeter: " << get_perimeter() << '\n';
        std::cout << "Area: " << get_area() << '\n';
    }
    static void change_shared_point(double x, double y) {
        shared_point = Point(x, y);
    }
private:
    Point point;
    static Point shared_point;
};

Point Rectangle::shared_point = Point(0, 0);

int main() {
    std::vector<Rectangle*> rectangles;

    rectangles.push_back(new Rectangle(Point(3, 4)));
    rectangles.push_back(new Rectangle(Point(5, 2)));
    rectangles.push_back(new Rectangle(Point(7, 7)));

    std::cout << "STANDARD SHARED POINT WITH COORDINATES (0,0)\n";

    for (std::size_t i = 0; i < rectangles.size(); ++i) {
        std::cout << "Rectangle " << (i + 1) << ":\n";
        rectangles[i]->get_info();
    }

    std::cout << "\nNEW SHARED POINT WITH COORDINATES (2,2)\n";
    Rectangle::change_shared_point(2, 2);

    for (std::size_t i = 0; i < rectangles.size(); ++i) {
        std::cout << "Rectangle " << (i + 1) << ":\n";
        rectangles[i]->get_info();
        delete rectangles[i];
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

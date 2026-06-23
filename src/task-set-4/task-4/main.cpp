#include <iostream>

class GeometricFigure {
public:
    GeometricFigure(double perimeter, double area) : perimeter(perimeter), area(area) {}
    void print() const {
        std::cout << "Perimeter: " << perimeter << '\n';
        std::cout << "Area: " << area <<'\n';
    }
protected:
    double perimeter, area;
};

class Rectangle : public GeometricFigure {
public:
    Rectangle() : GeometricFigure(0, 0), lenght(0), width(0) {}
    Rectangle(double lenght, double width) : GeometricFigure(0, 0) {
        this->lenght = lenght;
        this->width = width;
        calculate_perimeter();
        calculate_area();
    }
    void calculate_perimeter() {
        perimeter = 2 * (lenght + width);
    }
    void calculate_area() {
        area = lenght * width;
    }
    void print() const {
        std::cout << "Lenght: " << lenght << '\n';
        std::cout << "Width: " << width << '\n';
        GeometricFigure::print();
    }
protected:
    double lenght, width;
};

class RectangularCuboid : public Rectangle {
public:
    RectangularCuboid() : Rectangle(), height(0), volume(0) {}
    RectangularCuboid(double length, double width, double height) : Rectangle(length, width) {
        this->height = height;
        calculate_perimeter();
        calculate_area();
        calculate_volume();
    }
    void calculate_area() {
        area = 2 * (lenght * width + lenght * height + width * height);
    }
    void calculate_volume() {
        volume = lenght * width * height;
    }
    void print() const {
        Rectangle::print();
        std::cout << "Height: " << height << '\n';
        std::cout << "Volume: " << volume << '\n';
    }
private:
    double height, volume;
};

int main() {
    std::cout << "Geometric Figure:\n";
    GeometricFigure gf(3, 4);
    gf.print();

    std::cout << "\nRectangle:\n";
    Rectangle r(5, 3);
    r.print();

    std::cout << "\nRectangular Cuboid:\n";
    RectangularCuboid rc(4, 2 ,3);
    rc.print();

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

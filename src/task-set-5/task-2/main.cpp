#include <iostream>

class Figure {
public:
    virtual ~Figure() = default;
    virtual double calculate_area() const = 0;
};

class Triangle : public Figure {
public:
    Triangle(double base, double height) : base(base), height(height) {}
    double calculate_area() const override {
        return (base * height) / 2;
    }
private:
    double base, height;
};

class Circle : public Figure {
public:
    Circle(double radius) : radius(radius) {}
    double calculate_area() const override {
        return 3.14159 * radius * radius;
    }
private:
    double radius;
};

class Rectangle : public Figure {
public:
    Rectangle(double lenght, double width) : lenght(lenght), width(width) {}
    double calculate_area() const override {
        return lenght * width;
    }
private:
    double lenght, width;
};

int main() {
    Figure* figure[3];

    figure[0] = new Triangle(6, 4);
    figure[1] = new Circle(4);
    figure[2] = new Rectangle(7, 4);

    for (int i = 0; i < 3; ++i) {
        std::cout << figure[i]->calculate_area() << '\n';
        delete figure[i];
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

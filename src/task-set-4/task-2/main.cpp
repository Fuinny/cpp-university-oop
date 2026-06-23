#include <iostream>
#include <cmath>

class Vector2D {
public:
    Vector2D(double x1, double x2, double y1, double y2) : x1(x1), x2(x2), y1(y1), y2(y2) {}
    double get_distance() const { return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2)); }
protected:
    double x1, x2, y1, y2;
};

class Vector3D : public Vector2D {
public:
    Vector3D(double x1, double x2, double y1, double y2, double z1, double z2)
        : Vector2D(x1, x2, y1, y2), z1(z1), z2(z2) {}
    double get_distance() const {
        return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2) + std::pow(z2 - z1, 2));
    }
private:
    double z1, z2;
};

int main() {
    Vector2D v2d(3, 5, 4, 6);
    Vector3D v3d(3, 4, 5, 6, 7, 8);

    std::cout << "Vector 2D: " << v2d.get_distance() << '\n';
    std::cout << "Vector 3D: " << v3d.get_distance() << '\n';

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

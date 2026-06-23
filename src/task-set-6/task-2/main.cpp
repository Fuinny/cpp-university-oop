#include <iostream>
#include <algorithm>
#include <limits>

class Triangle {
public:
    class TooLong {
    public:
        TooLong(int max_side) : max_side(max_side) {}
        int get_longest_side() const { return max_side; }
    private:
        int max_side;
    };
    void set_triangle(int a, int b, int c) {
        if (a + b <= c || a + c <= b || b + c <= a) {
            throw TooLong(std::max({a, b, c}));
        } else {
            this->a = a;
            this->b = b;
            this->c = c;
        }
    }
private:
    int a, b, c;
};

int main() {
    int a = 0, b = 0, c = 0;

    std::cout << "Enter triangle sides: ";
    std::cin >> a >> b >> c;

    try {
        Triangle triangle;
        triangle.set_triangle(a, b, c);
    } catch (const Triangle::TooLong& ex) {
        std::cerr << ex.get_longest_side() << " side of the triangle is too long!\n";
        return 1;
    }

    std::cout << "\nTriangle is correct!\n";

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

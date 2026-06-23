#include <iostream>

template <typename T1, typename T2> class Rectangle {
public:
    Rectangle(T1 length, T2 width) : length(length), width(width) {}
    void get_information() const {
        std::cout << "Length: " << length << '\n';
        std::cout << "Width: " << width << '\n';
        std::cout << "Area: " << length * width << '\n';
    }
private:
    T1 length;
    T2 width;
};

int main() {
    Rectangle<int, int> first_rectangle(5, 10);
    first_rectangle.get_information();

    std::cout << '\n';

    Rectangle<double, double> second_rectangle(5.55, 10.99);
    second_rectangle.get_information();

    std::cout << '\n';

    Rectangle<int, double> third_rectangle(5, 10.99);
    third_rectangle.get_information();

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.get();

    return 0;
}

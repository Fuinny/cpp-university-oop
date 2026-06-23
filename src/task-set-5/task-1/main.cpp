#include <iostream>
#include <cmath>
#include <limits>

class Function {
public:
    virtual ~Function() = default;
    virtual double calculate(double x) const = 0;
};

// Linear function f(x) = kx + b
class LinearFunction : public Function {
public:
    LinearFunction(double k, double b) : k(k), b(b) {}
    double calculate(double x) const override {
        return k * x + b;
    }
private:
    double k, b;
};

// Step function f(x) = x^n;
class StepFunction : public Function {
public:
    StepFunction(double n) : n(n) {}
    double calculate(double x) const override {
        return std::pow(x, n);
    }
private:
    double n;
};

// Sinusoid function f(x) = sin(x)
class SinusoidFunction : public Function {
public:
    double calculate(double x ) const override {
        return std::sin(x);
    }
};

int main() {
    Function *function[3];

    function[0] = new LinearFunction(12, 7); // f(x) = 12x + 7
    function[1] = new StepFunction(8);       // f(x) = x^8
    function[2] = new SinusoidFunction();    // f(x) = sin(x)

    double x = 0.0;

    std::cout << "Enter x: ";
    std::cin >> x;

    for (int i = 0; i < 3; ++i) {
        std::cout << function[i]->calculate(x) << '\n';
        delete function[i];
    }

    std::cout << "\nPress ENTER key to exit...\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

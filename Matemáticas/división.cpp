#include <iostream>

namespace Matematicas {double division(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: División por cero." << std::endl;
            return 0;
        }
    }
}

int main() {

    double num1 = 15;
    double num2 = 3;
    double resultado_division = Matematicas::division(num1, num2);
    std::cout << "La division de " << num1 << " entre " << num2 << " es: " << resultado_division << std::endl;

    return 0;
}
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
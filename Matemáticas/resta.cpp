#include <iostream>
namespace Matematicas { int resta(int a, int b) {
        return a - b;
    }
}
int main() {
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    return 0;
}
#include <iostream>
#include <cmath>
namespace Matematicas {

    double calcularAreaCirculo(double radio) {
        return M_PI * pow(radio, 2);
    }
}
int main() {
    std::cout << "Ingrese el radio del circulo: ";
    double radio;
    std::cin >> radio;

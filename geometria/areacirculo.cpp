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
  if (radio < 0) {
        std::cerr << "Error: El radio no puede ser negativo." << std::endl;
        return 1;
    }
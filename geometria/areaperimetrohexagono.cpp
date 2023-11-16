#include <iostream>
#include <cmath>

double areaHexagono(double lado) {
    return 3 * sqrt(3) * pow(lado, 2) / 2;
}

double perimetroHexagono(double lado) {
    return 6 * lado;
}

int main() {
    double lado;
    std::cout << "Ingrese la longitud del lado del hexagono: ";
    std::cin >> lado;

    std::cout << "Area del hexagono: " << areaHexagono(lado) << std::endl;
    std::cout << "Perimetro del hexagono: " << perimetroHexagono(lado) << std::endl;

    return 0;
}

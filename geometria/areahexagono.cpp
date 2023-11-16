#include <iostream>
#include <cmath>

double calcularAreaHexagono(double longitudLado) {
    return (3 * sqrt(3) * pow(longitudLado, 2)) / 2;
}

int main() {
    double longitudLado;
    std::cout << "Ingrese la longitud del lado del hexagono: ";
    std::cin >> longitudLado;

    if (longitudLado <= 0) {
        std::cerr << "Error: La longitud del lado debe ser un número positivo." << std::endl;
        return 1;
    }

    double area = calcularAreaHexagono(longitudLado);
    std::cout << "El area del hexagono con longitud de lado " << longitudLado << " es: " << area << std::endl;

    return 0;
}
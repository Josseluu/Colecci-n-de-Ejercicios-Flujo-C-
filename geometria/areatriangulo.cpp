#include <iostream>

double calcularAreaTriangulo(double base, double altura) {
    return 0.5 * base * altura;
}
int main() {

    double base, altura;

    std::cout << "Ingrese la base del triangulo: ";
    std::cin >> base;

    std::cout << "Ingrese la altura del triangulo: ";
    std::cin >> altura;
    if (base > 0 && altura > 0) {
        double area = calcularAreaTriangulo(base, altura);
        std::cout << "El area del triangulo es: " << area << std::endl;
    } else {
        std::cerr << "Error: La base y la altura deben ser valores positivos." << std::endl;
    }

    return 0;
}
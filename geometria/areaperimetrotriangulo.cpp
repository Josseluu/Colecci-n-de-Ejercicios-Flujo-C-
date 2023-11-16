#include <iostream>
#include <cmath>

class Triangulo {
public:
    Triangulo(double a, double b, double c) : lado1(a), lado2(b), lado3(c) {}

    double calcularArea() const {
        double s = (lado1 + lado2 + lado3) / 2.0;
        return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
    }

    double calcularPerimetro() const {
        return lado1 + lado2 + lado3;
    }

private:
    double lado1, lado2, lado3;
};

int main() {
    double a, b, c;

    std::cout << "Ingrese los lados del triángulo: ";
    std::cin >> a >> b >> c;

    Triangulo miTriangulo(a, b, c);

    std::cout << "Área: " << miTriangulo.calcularArea() << std::endl;
    std::cout << "Perímetro: " << miTriangulo.calcularPerimetro() << std::endl;

    return 0;
}


#include <iostream>
namespace Matematicas {

    double multiplicacion(double a, double b) {
        return a * b;
    }}
int main() {
    double num1 = 12;
    double num2 = 5;

    double resultado_multiplicacion = Matematicas::multiplicacion(num1, num2);
    std::cout << "La multiplicacion de " << num1 << " y " << num2 << " es: " << resultado_multiplicacion << std::endl;
    return 0;
}
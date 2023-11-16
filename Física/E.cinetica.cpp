#include <iostream>

namespace Ciencia {

    namespace Fisica {

        const double velocidad_de_la_luz = 299792458.0;

        double calcular_energia_cinetica(double masa, double velocidad) {
            return 0.5 * masa * velocidad * velocidad;
        }
    }
}

int main() {

    double masa_del_objeto = 10.0;
    double velocidad_del_objeto = 20.0;


    double velocidad_luz = Ciencia::Fisica::velocidad_de_la_luz;
    double energia_cinetica_resultante = Ciencia::Fisica::calcular_energia_cinetica(masa_del_objeto, velocidad_del_objeto);


    std::cout << "Velocidad de la luz: " << velocidad_luz << " metros por segundo" << std::endl;
    std::cout << "Energia Cinetica: " << energia_cinetica_resultante << " julios" << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {

    std::cout << "Contenedor vector:" << std::endl;
    std::vector<int> miVector;

    for (int i = 1; i <= 5; ++i) {
        miVector.push_back(i * 10);
    }

    std::cout << "Elementos del vector: ";
    for (int valor : miVector) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    std::cout << "\nContenedor map:" << std::endl;
    std::map<int, std::string> miMapa;

    miMapa[1] = "Uno";
    miMapa[2] = "Dos";
    miMapa[3] = "Tres";

    std::cout << "Elementos del mapa:" << std::endl;
    for (const auto& par : miMapa) {
        std::cout << par.first << ": " << par.second << std::endl;
    }

    std::cout << "\nContenedor set:" << std::endl;
    std::set<std::string> miSet;

    miSet.insert("Manzana");
    miSet.insert("Banana");
    miSet.insert("Naranja");

    std::cout << "Elementos del set: ";
    for (const std::string& elemento : miSet) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    return 0;
}

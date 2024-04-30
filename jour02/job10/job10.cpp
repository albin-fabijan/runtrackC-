#include <iostream>
#include <cmath>

int main() {
    double nombre;
    while (true) {
        std::cout << "nb positif (0 pour terminer) : ";
        std::cin >> nombre;
        if (nombre == 0) {
            break;
        }

        if (nombre < 0) {
            std::cout << "Veuillez entrer un nombre positif." << std::endl;
        } else {
            double racine_carree = sqrt(nombre);
            std::cout << "la racine carree de " << nombre << " est : " << racine_carree << std::endl;
        }
    }
    return 0;
}

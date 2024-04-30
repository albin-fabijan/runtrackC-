#include <iostream>
#include <cmath>
int nombreDeChiffres(int nombre) {
    int count = 0;
    while (nombre != 0) {
        nombre /= 10;
        ++count;
    }
    return count;
}
bool estNarcissique(int nombre) {
    int nombreTemp = nombre;
    int somme = 0;
    int n = nombreDeChiffres(nombre);

    while (nombreTemp != 0) {
        int chiffre = nombreTemp % 10;
        somme += std::pow(chiffre, n);
        nombreTemp /= 10;
    }

    return somme == nombre;
}

int main() {
    int nombre;
    std::cout << "nb : ";
    std::cin >> nombre;

    if (estNarcissique(nombre)) {
        std::cout << nombre << " est un nombre narcissique." << std::endl;
    } else {
        std::cout << nombre << " n'est pas un nombre narcissique." << std::endl;
    }

    return 0;
}

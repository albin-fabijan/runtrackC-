#include <iostream>

int main() {
    int nombre, a, b;

    std::cout << "Entrez un entier : ";
    std::cin >> nombre;

    std::cout << "inferieure a " << nombre << " :";
    std::cin >> a;

    std::cout << "superieure à" << nombre << " :";
    std::cin >> b;

    if (nombre >= a && nombre <= b) {
        std::cout << "GAGNE" << std::endl;
    } else {
        std::cout << "PERDU" << std::endl;
    }

    return 0;
}

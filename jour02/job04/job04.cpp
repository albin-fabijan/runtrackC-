#include <iostream>

int main() {
    char operation;
    double nombre1, nombre2, resultat;

    std::cout << "le signe (+, -, *, /) ";
    std::cin >> operation;

    std::cout << "nombre 1 ";
    std::cin >> nombre1;

    std::cout << "nombre 2";
    std::cin >> nombre2;

    switch (operation) {
        case '+':
            resultat = nombre1 + nombre2;
            break;
        case '-':
            resultat = nombre1 - nombre2;
            break;
        case '*':
            resultat = nombre1 * nombre2;
            break;
        case '/':
            if (nombre2 != 0) {
                resultat = nombre1 / nombre2;
            } else {
                std::cout << "division par zero " << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "erreur" << std::endl;
            return 1;
    }

    std::cout << "le resultat:" << resultat << std::endl;

    return 0;
}

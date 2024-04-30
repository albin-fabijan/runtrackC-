#include <iostream>

int main() {
    int nombre;
    std::cout << "Entrez un entier : ";
    std::cin >> nombre;

    for (int i = 1; i <= 10; ++i) {
        std::cout << nombre << " x " << i << " = " << (nombre * i) << std::endl;
    }

    return 0;
}

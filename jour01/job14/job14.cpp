#include <iostream>

int main() {
    int nombre, nombreInverse = 0;

    std::cin >> nombre;

    while (nombre != 0) {
        int chiffre = nombre % 10;
        nombreInverse = nombreInverse * 10 + chiffre; 
        nombre /= 10;
    } // qui a dit que les chaine etait utile ?

    std::cout << nombreInverse << std::endl;

    return 0;
}

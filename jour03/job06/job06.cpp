#include <iostream>

int main() {
    int taille = 10;
    int T[taille];
    int compte = 0;

    for (int i = 0; i < taille; ++i) {
        std::cout << "Entier " << i+1 << " : ";
        std::cin >> T[i];
    }

    for (int i = 0; i < taille; ++i) {
        if (T[i] >= 5) {
            compte++;
        }
    }

    std::cout << compte;

    return 0;
}

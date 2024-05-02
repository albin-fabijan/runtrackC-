#include <iostream>

int main() {
    int taille = 10;
    int T[taille];

    for (int i = 0; i < taille; ++i) {
        std::cout << "Entier " << i+1 << " : ";
        std::cin >> T[i];
    }

    int indiceMax = 0;
    for (int i = 1; i < taille; ++i) {
        if (T[i] > T[indiceMax]) {
            indiceMax = i;
        }
    }
    indiceMax++;
    std::cout<< indiceMax;

    return 0;
}

#include <iostream>

int main() {
    int taille;

    std::cout << "def taille tableau: ";
    std::cin >> taille;

    int* tableau = new int[taille];

    for (int i = 0; i < taille; ++i) {
        std::cin >> tableau[i];
    }

    for (int i = 0; i < taille; ++i) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;

    delete[] tableau;

    return 0;
}

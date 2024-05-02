#include <iostream>

int sommes(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] % 2 == 0) {
            somme += tableau[i];
        }
    }
    return somme;
}

int main() {
    const int taille = 5;
    int tableau[taille];

    std::cout << "entrer " << taille << " entiers :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cin >> tableau[i];
    }

    int somme = sommes(tableau, taille);
    std::cout << somme;

    return 0;
}

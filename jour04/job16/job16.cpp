#include <iostream>

int trouverMax(int tableau[], int taille) {
    int max = tableau[0];

    for (int i = 1; i < taille; ++i) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    return max;
}

int main() {
    int tableau[] = {5, 8, 3, 12, 7, 10};

    int max = trouverMax(tableau, sizeof(tableau) / sizeof(tableau[0]));

    std::cout << max << std::endl;

    return 0;
}

#include <iostream>

void fusionnerTableaux(const int tableau1[], int taille1, const int tableau2[], int taille2, int resultat[]) {
    int i = 0, j = 0, k = 0;

    while (i < taille1 && j < taille2) {
        if (tableau1[i] < tableau2[j]) {
            resultat[k++] = tableau1[i++];
        } else {
            resultat[k++] = tableau2[j++];
        }
    }

    while (i < taille1) {
        resultat[k++] = tableau1[i++];
    }

    while (j < taille2) {
        resultat[k++] = tableau2[j++];
    }
}

int main() {
    int taille1 = 5;
    int taille2 = 4;
    int tableau1[taille1] = {1, 3, 5, 7, 9};
    int tableau2[taille2] = {2, 4, 6, 8};
    int resultat[taille1 + taille2];

    fusionnerTableaux(tableau1, taille1, tableau2, taille2, resultat);

    std::cout << "Tableau fusionne : ";
    for (int i = 0; i < taille1 + taille2; ++i) {
        std::cout << resultat[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

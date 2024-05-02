#include <iostream>
#include <cstring>
void inverserChaine(char* chaine) {
    int longueur = std::strlen(chaine);
    char* debut = chaine;
    char* fin = chaine + longueur - 1;

    while (debut < fin) {
        char temp = *debut;
        *debut = *fin;
        *fin = temp;
        debut++;
        fin--;
    }
}

int main() {
    const int tailleMax = 100;
    char chaine[tailleMax];

    std::cin.getline(chaine, tailleMax);

    inverserChaine(chaine);

    std::cout << chaine << std::endl;

    return 0;
}

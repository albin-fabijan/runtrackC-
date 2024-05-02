#include <iostream>
#include <cstring>

int main() {
    const char* chaine = "Vive la plateforme !";

    int longueur = std::strlen(chaine);

    std::cout << "La taille est " << longueur;

    return 0;
}

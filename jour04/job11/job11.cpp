#include <iostream>
#include <string>

int main() {
    std::string fruit[] = {"pomme", "banane", "orange", "kiwi", "fraise"};
    for (const auto& f : fruit) {
        std::cout << f << std::endl;
    }

    int tailleFavoris;
    std::cout << "nb de fruits: ";
    std::cin >> tailleFavoris;

    std::string* favoris = new std::string[tailleFavoris];

    std::cout << tailleFavoris<< std::endl;
    for (int i = 0; i < tailleFavoris; ++i) {
        std::cout << "Fruit " << i + 1 << " : ";
        std::cin >> favoris[i];
    }

    std::cout << "Contenu du tableau favoris :" << std::endl;
    for (int i = 0; i < tailleFavoris; ++i) {
        std::cout << favoris[i] << std::endl;
    }

    delete[] favoris;

    return 0;
}

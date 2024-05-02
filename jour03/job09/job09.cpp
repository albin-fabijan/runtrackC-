#include <iostream>
#include <cstring>

bool estIncluse(const char* chaine1, const char* chaine2) {
    return (std::strstr(chaine2, chaine1) != nullptr);
}

int main() {
    int tailleMax = 100;
    char chaine1[tailleMax];
    char chaine2[tailleMax];

    std::cin.getline(chaine1, tailleMax);
    std::cin.getline(chaine2, tailleMax);

    if (estIncluse(chaine1, chaine2)) {
        std::cout << "incluse";
    } else {
        std::cout << "pas incluse";
    }

    return 0;
}

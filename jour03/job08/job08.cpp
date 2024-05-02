#include <iostream>
#include <cstring>

int main() {
    int tailleMax = 100;
    char tab[tailleMax];

    std::cin.getline(tab, tailleMax);

    tab[strlen(tab)] = '\0';

    std::cout << tab << std::endl;
    std::cout << tab[1];

    return 0;
}

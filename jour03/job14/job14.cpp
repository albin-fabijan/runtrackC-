#include <iostream>
#include <string>

bool estPalindrome(const std::string& str) {
    int debut = 0;
    int fin = str.length() - 1;

    while (debut < fin) {
        if (str[debut] != str[fin]) {
            return false;
        }
        debut++;
        fin--;
    }
    return true;
}

int main() {
    std::string tab[] = {"radar", "hello", "lvel", "stats", "world"};
    int taille = sizeof(tab) / sizeof(tab[0]);

    for (int i = 0; i < taille; ++i) {
        if (estPalindrome(tab[i])) {
            std::cout << tab[i] << std::endl;
        }
    }

    return 0;
}

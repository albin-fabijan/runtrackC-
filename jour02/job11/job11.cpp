#include <iostream>

unsigned long long int factorielle(int n) {
    if (n < 0) {
        std::cerr << "erreur nb negatif" << std::endl;
        return 0;
    }
    if (n == 0 || n == 1) 
    {
        return 1;
    }




    unsigned long long int resultat = 1;
    for (int i = 2; i <= n; ++i) {
        resultat *= i;
        if (resultat < 0) {
            std::cerr << "depassement de capacite" << std::endl;
            return 0;
        }
    }

    return resultat;
}


int main() {
    int nombre;
    std::cout << "nb : ";
    std::cin >> nombre;

    unsigned long long int resultat = factorielle(nombre);
    
    if (resultat != 0) 
    {
        std::cout << "La factorielle est : " << resultat << std::endl;
    }

    return 0;
}

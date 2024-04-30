#include <iostream>

double serieHarmonique(int n) {
    double somme = 0.0;
    for (int i = 1; i <= n; ++i) {
        somme += 1.0 / i;
    }
    return somme;
}

int main() {
    int n;
    std::cout << "nb : ";
    std::cin >> n;

    double resultat = serieHarmonique(n);
    std::cout << "La somme est : " << resultat << std::endl;

    return 0;
}

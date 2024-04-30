#include <iostream>

int main() {
    double prixHTCarottes, nombreKilos, tauxTVA;
    std::cout << "prix HT d'un kilo de carottes  ";
    std::cin >> prixHTCarottes;
    std::cout << "nombre de kilos de carottes  ";
    std::cin >> nombreKilos;
    std::cout << "taux de TVA en pourcentage (15 pour 15%) : ";
    std::cin >> tauxTVA;
    double prixTTC = prixHTCarottes * nombreKilos * (1 + tauxTVA / 100);
    std::cout << "Le prix TTC des carottes est : " << prixTTC << " euros." << std::endl;

    return 0;
}

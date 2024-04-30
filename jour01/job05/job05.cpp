#include <iostream>

int main() {
    double nombre1, nombre2, produit;
    std::cout << "Entrez un nb : ";
    std::cin >> nombre1;
    std::cout << "Entrez un nb : ";
    std::cin >> nombre2;
    produit = nombre1 * nombre2;
    std::cout << "Le produit est : " << produit << std::endl;

    return 0;
}

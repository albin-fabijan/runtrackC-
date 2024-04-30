#include <iostream>

int main() {
    int annee;

    std::cout << "entre une annee : ";
    std::cin >> annee;

    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        std::cout << annee << " bissextile." << std::endl;
    } else {
        std::cout << annee << " pas bissextile." << std::endl;
    }

    return 0;
}

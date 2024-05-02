#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int nombreMystere = std::rand() % 101;
    const int nombreEssaisMax = 10;
    int nombreEssaisRestants = nombreEssaisMax;

    std::cout << "Devinez un nombre entre 0 et 100." << std::endl;

    int nombreJoueur;

    while (nombreEssaisRestants > 0) {
        std::cout<< nombreEssaisRestants << " essais." << std::endl;
        std::cin >> nombreJoueur;

        if (nombreJoueur == nombreMystere) {
            std::cout << "Felicitations !";
            return 0;
        } else if (nombreJoueur < nombreMystere) {
            std::cout << "Trop petit !" << std::endl;
        } else {
            std::cout << "Trop grand !" << std::endl;
        }
        
        nombreEssaisRestants--;
    }

    std::cout << "le nombre etait : " << nombreMystere << std::endl;
    
    return 0;
}

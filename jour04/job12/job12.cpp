#include <iostream>
#include <string>

struct Staff {
    std::string nom;
    std::string prenom;
};

struct Etudiant {
    std::string nom;
    std::string prenom;
};

int main() {
    Staff alicia = {"Cordial", "Alicia"};
    Staff pierre = {"Malardier", "Pierre"};

    std::cout << "prenoms du staff :" << std::endl;
    std::cout << alicia.prenom << std::endl;
    std::cout << pierre.prenom << std::endl;

    int nombreEtudiants;
    std::cout << "nb d'etudiants : ";
    std::cin >> nombreEtudiants;

    Etudiant* etudiants = new Etudiant[nombreEtudiants];

    for (int i = 0; i < nombreEtudiants; ++i) {
        std::cout << "etudiant " << i + 1 << " :" << std::endl;
        std::cout << "Nom : ";
        std::cin >> etudiants[i].nom;
        std::cout << "Prenom : ";
        std::cin >> etudiants[i].prenom;
    }

    std::cout << "etudiants :" << std::endl;
    for (int i = 0; i < nombreEtudiants; ++i) {
        std::cout << etudiants[i].prenom << std::endl;
    }

    delete[] etudiants;

    return 0;
}

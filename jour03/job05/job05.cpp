#include <iostream>
#include <string>

bool verifierFormatHeure(const std::string& heure) {
    if (heure.length() != 5) {
        return false;
    }

    if (heure[2] != 'h') {
        return false; 
    }

    if (!isdigit(heure[0]) || !isdigit(heure[1]) || !isdigit(heure[3]) || !isdigit(heure[4])) {
        return false;
    }

    return true;
}

int main() {
    std::string saisie = "22h40";


    if (verifierFormatHeure(saisie)) {
        std::cout << "valide.";
    } else {
        std::cout << "invalide.";
    }

    return 0;
}

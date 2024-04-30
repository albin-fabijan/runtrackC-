#include <iostream>

int main() {
    double note;

    std::cout << "note : ";
    std::cin >> note;

    if (note >= 0 && note <= 20) {
        if (note > 10) {
            std::cout << "valide" << std::endl;
        } else {
            std::cout << "non valide" << std::endl;
        }
    } else {
        std::cout << "La note doit être comprise entre 0 et 20." << std::endl;
    }

    return 0;
}

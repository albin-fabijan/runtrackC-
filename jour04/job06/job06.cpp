#include <iostream>

int main() {
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    const char* caractere = "La Plateforme";

    std::cout << "entier " << &entier << " : " << entier << std::endl;
    std::cout << "flottant " << &flottant << " : " << flottant << std::endl;
    std::cout << "reel " << &reel << " : " << reel << std::endl;
    std::cout << "caractere " << (void*)&caractere << " : " << caractere << std::endl;

    return 0;
}

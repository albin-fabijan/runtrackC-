#include <iostream>

int main() {
    double nombre1, nombre2, somme;
    std::cout << "entre un nb 1 ";
    std::cin >> nombre1;

    std::cout << "entre un nb 2 ";
    std::cin >> nombre2;
    somme = nombre1 + nombre2;
    std::cout << "le resul est : " << somme << std::endl;
    return 0;
}
#include <iostream>

int main() {
    int nombre1, nombre2, nombre3;

    std::cout << "nb 1 ";
    std::cin >> nombre1;

    std::cout << "nb 2 ";
    std::cin >> nombre2;

    std::cout << "nb 3 ";
    std::cin >> nombre3;

    int plusGrand = nombre1;
    if (nombre2 > plusGrand) {
        plusGrand = nombre2;
    }
    if (nombre3 > plusGrand) {
        plusGrand = nombre3;
    }

    std::cout << plusGrand << std::endl;

    return 0;
}

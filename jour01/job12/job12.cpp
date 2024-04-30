#include <iostream>

int main() 
{
    int total = 0;

    std::cout << "Entrez nb" << std::endl;
    for (int i = 0; i < 5; ++i) {
        int entier;
        std::cin >> entier;
        total += entier;
    }

    double moyenne = total / 5.0;

    std::cout << moyenne << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int n, m, temp;
    std::cin >> n;
    std::cin >> m;
    std::cout << "Avant l'echange  " << std::endl;
    std::cout << "n : " << n << std::endl;
    std::cout << "m : " << m << std::endl;

    temp = n;
    n = m;
    m = temp;

    std::cout << "Apres l'echange  " << std::endl;
    std::cout << "n : " << n << std::endl;
    std::cout << "m : " << m << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int tableau[] = {1, 2, 3, 4, 5};

    for (int& valeur : tableau) {
        std::cout << valeur << " ";
    }
    std::cout << std::endl;

    return 0;
}

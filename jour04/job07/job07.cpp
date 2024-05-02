#include <iostream>

int main() {
    int tableau[] = {10000000, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        std::cout << i << " : " << &tableau[i] << " : " << tableau[i] << std::endl;
    }
    return 0;
}

#include <iostream>

int main() {
    int N;
    int somme = 0;
    std::cin >> N;
    for (int i = 5; i <= N; ++i) {
        somme += i * i * i;
    }
    std::cout << somme << std::endl;

    return 0;
}

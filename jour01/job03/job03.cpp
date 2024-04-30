#include <iostream>

int main() {
    int N;

    do {
        std::cout << "entre un nb" << std::endl;
        std::cin >> N;

        for (int i = 0; i < N; ++i) {
            std::cout << "Hello World" << std::endl;
        }

    } while (N != 0);
    return 0;
}

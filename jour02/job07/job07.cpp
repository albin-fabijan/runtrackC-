#include <iostream>

int main() {
    int a, b;

    std::cout << "nb 1 : ";
    std::cin >> a;

    std::cout << "nb 2 : ";
    std::cin >> b;

    for (int i = a; i <= b; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}

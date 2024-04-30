#include <iostream>

int main() {
    int a, b;
    std::cout << "nb 1 : ";
    std::cin >> a;

    std::cout << "nb 2 : ";
    std::cin >> b;

    int i = a;
    while (i <= b) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;

    return 0;
}

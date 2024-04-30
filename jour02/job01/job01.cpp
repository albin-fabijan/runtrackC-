#include <iostream>

int main() {
    int n;

    do {
        std::cout << "donner un nb ";
        std::cin >> n;
    } while (n <= 0);

    std::cout << n;

    return 0;
}

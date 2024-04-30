#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setw(6) << "-";
    for (int i = 1; i <= 10; ++i) {
        std::cout << "------";
    }
    std::cout << std::endl;

    for (int i = 1; i <= 10; ++i) {
        std::cout << std::setw(4) << "|" << std::setw(3) << std::left << i;
        for (int j = 1; j <= 10; ++j) {
            std::cout << std::setw(3) << "|" << std::setw(3) << i * j;
        }
        std::cout << std::endl;
    }

    return 0;
}

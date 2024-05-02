#include <iostream>
#include <string>

int main() {
    std::string string;
    std::string string2 = "Bonjour";

    std::cin >> string;

    if (string < string2) {
        std::cout << string << ", " << string2 << std::endl;
    } else if (string > string2) {
        std::cout << string2 << ", " << string << std::endl;
    } else {
        std::cout << "Les deux chaines sont identiques." << std::endl;
    }

    return 0;
}

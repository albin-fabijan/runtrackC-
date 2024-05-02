#include <iostream>
#include <string>

int main() {
    std::string chaine = "vive la plateforme !";
    std::string chaineSansVoyelles;

    for (char c : chaine) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && c != 'Y') {
            chaineSansVoyelles += c;
        }
    }

    std::cout << chaineSansVoyelles << std::endl;

    return 0;
}

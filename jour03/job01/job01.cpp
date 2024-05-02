#include <iostream>
#include <string>

int main() {
    std::string chaine = "vive la plateforme !";
    for (char &c : chaine) 
    {
        c = std::toupper(c);
    }
    std::cout << chaine << std::endl;

    return 0;
}

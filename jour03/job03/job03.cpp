#include <iostream>
#include <string>

int compare(std::string& chaine1,std::string& chaine2) 
{
    if (chaine1 == chaine2) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    std::string chaine1 = "NON";
    std::string chaine2 = "OUI";

    int resultat = compare(chaine1, chaine2);

    if (resultat == 0) {
        std::cout << "0" ;
    } else {
        std::cout << "1" ;
    }

    return 0;
}

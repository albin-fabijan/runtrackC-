#include <iostream>

int main() {
    int valeur1 = 2019;
    const char* valeur2 = "La Plateforme";
    double valeur3 = 3.14;
    const char* valeur4 = "Etudiants";

    void* ptrs[4];

    ptrs[0] = &valeur1;
    ptrs[1] = (void*)valeur2;
    ptrs[2] = &valeur3;
    ptrs[3] = (void*)valeur4;

    std::cout << &valeur1 << "\t" << *(static_cast<int*>(ptrs[0])) << std::endl;
    std::cout << &valeur2 << "\t" << static_cast<const char*>(ptrs[1]) << std::endl;
    std::cout << &valeur3 << "\t" << *(static_cast<double*>(ptrs[2])) << std::endl;
    std::cout << &valeur4 << "\t" << static_cast<const char*>(ptrs[3]) << std::endl;

    return 0;
}

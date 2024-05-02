#include <iostream>

int main() {
    int a = 10;
    int b = 20;

    std::cout<< a << std::endl;
    std::cout<< b << std::endl;
    int *ptrA = &a;
    int *ptrB = &b;

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    std::cout<< a << std::endl;
    std::cout<< b << std::endl;

    return 0;
}

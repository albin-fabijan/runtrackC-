#include <iostream>

int main() {
    int var1 = 10;
    int var2 = 20;
    int var3 = 30;

    int* ptr1 = &var1;
    int* ptr2 = &var2;
    int* ptr3 = &var3;

    std::cout << *ptr1 << std::endl;
    std::cout << *ptr2 << std::endl;
    std::cout << *ptr3 << std::endl;

    *ptr1 = 100;
    *ptr2 = 200;
    *ptr3 = 300;

    std::cout << var1 << std::endl;
    std::cout << var2 << std::endl;
    std::cout << var3 << std::endl;

    return 0;
}

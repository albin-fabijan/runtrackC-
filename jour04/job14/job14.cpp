#include <iostream>

int main() {
    int x = 12; 

    int& refX = x; 

    std::cout << x << std::endl;

    refX = 24;

    std::cout << x ;

    return 0;
}

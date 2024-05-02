#include <iostream>

struct Point { int x ; int y ; };

int main() {
    Point p;
    p.x = 5;
    p.y = 10;
    Point* ptr = &p;
    ptr->x = 20;
    ptr->y = 30;
    std::cout << p.x << std::endl;
    std::cout << p.y;

    return 0;
}

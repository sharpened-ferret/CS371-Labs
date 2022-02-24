#include <iostream>
#include "Shape.h"

int main(int argc, char *argv[]) {
    Shape *x = new Circle(0, 0, 1); // x, y, r

    std::cout << x->to_string() << std::endl;
    x->centre_at(2, 3);

    std::cout << x->to_string() << std::endl;

    Shape *rect = new Rectangle(0, 1, 1, 0);
    std::cout << rect->to_string() << std::endl;
    rect->centre_at(-2.5, 2.5);
    std::cout << rect->to_string() << std::endl;

    delete x;
    return 0;
}

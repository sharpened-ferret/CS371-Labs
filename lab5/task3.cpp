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

    Shape **xs = new Shape*[10];
    xs[0] = new Circle(0,0,1);
    xs[1] = new Triangle(0, 0, 1, 1, 0, 1);
    xs[2] = new Circle(0, 1, 5);
    xs[3] = new Rectangle(0, 2, 1, 0);
    xs[4] = new Circle(1,2,0.5);
    xs[5] = new Triangle(0, 0, 2, 2, 0, 2);
    xs[6] = new Rectangle(0,0,1,1);
    xs[7] = new Circle(0, 1, 3);
    xs[8] = new Triangle(0, 2, 2, 2, 0, 0);
    xs[9] = new Rectangle(0, 1, 1, 0);

    std::cout << "\nTask 3: " << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << xs[i]->to_string();
    }
    std::cout << "\nMoving Shapes...\n" << std::endl;

    for (int i = 0; i < 10; i++) {
        xs[i]->centre_at(1, 1);
    }
    for (int i = 0; i < 10; i++) {
        std::cout<<xs[i]->to_string();
    }

    delete[] xs;

    return 0;
}

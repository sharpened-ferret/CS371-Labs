#include <iostream>
#include "cat.h"

int main(int argc, char* argv[]) {
    if (argc > 1) {
        const int numArgs = argc - 1;
        const int numCats = numArgs / 2;

        Cat *cats = new Cat[numCats]();
        int currCat = 0;
        for (int i = 1; i < argc; i += 2) {
            cats[currCat].set_name(argv[i]);
            if (i+1 <= argc) {
                cats[currCat].set_lives(atoi(argv[i+1]));
                currCat++;
            }
        }

        for (int i = 0; i < numCats; i++) {
            std::cout << cats[i].get_name() << " has "
                      << cats[i].get_lives() << " lives." << std::endl;
        }

        delete[] cats;
    }

    return 0;
}

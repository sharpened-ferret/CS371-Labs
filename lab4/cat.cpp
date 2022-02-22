#include <iostream>
#include "cat.h"


Cat::Cat(std::string name):name(name), lives(9) {
    std::cout << "Constructor called with name: " << name << "\n";
}
Cat::Cat(std::string name, unsigned int lives):name(name), lives(lives) {
    std::cout << "Constructor called with name: " << name << " and lives: " << lives << "\n";
}

Cat::~Cat() {
    std::cout << "Destructor called...\n";
    this->name = "";
    this->lives = 0;
}

std::string Cat::get_name() const {
    return name;
}

void Cat::set_name(std::string name) {
    Cat::name = name;
}

unsigned int Cat::get_lives() const {
    return lives;
}

void Cat::set_lives(unsigned int lives) {
    Cat::lives = lives;
}

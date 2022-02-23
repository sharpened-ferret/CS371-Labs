#include <iostream>
#include "cat.h"

Cat::Cat() {
    std::cout << "Default constructor called...\n";
    this->name = "Tom";
    this->lives = 9;
}

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

unsigned int Cat::get_lives() const {
    return lives;
}

void Cat::set_name(const std::string &name) {
    std::cout << "set_name called...\n";
    Cat::name = name;
}

void Cat::set_lives(const unsigned int &lives) {
    std::cout << "set_lives called...\n";
    if (lives >= this->lives) {
        return;
    }
    if (this->lives > 0 && lives == 0) {
        set_name("The Cat formerly known as " + get_name());
    }
    Cat::lives = lives;
}

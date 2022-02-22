#ifndef LAB4_CAT_H
#define LAB4_CAT_H


#include <string>

class Cat {
private:
public:
    Cat(std::string name);
    Cat(std::string name, unsigned int lives);
    virtual ~Cat();

    std::string get_name() const;
    void set_name(std::string name);
    unsigned int get_lives() const;
    void set_lives(unsigned int lives);

private:
    std::string name;
    unsigned int lives;
};


#endif //LAB4_CAT_H

#ifndef LAB4_CAT_H
#define LAB4_CAT_H


#include <string>
#include <sstream>

class Cat {
private:
public:
    Cat();
    Cat(std::string name);
    Cat(std::string name, unsigned int lives);
    virtual ~Cat();

    friend std::ostream &operator<<(std::ostream &os, const Cat& cat);

    std::string get_name() const;
    unsigned int get_lives() const;
    void set_name(const std::string &name);
    void set_lives(const unsigned int &lives);

private:
    std::string name;
    unsigned int lives;
};

namespace std {
    template <>
    struct hash <Cat> {
        size_t operator()(const Cat &obj) const {
            stringstream hs;
            hs << obj;
            unsigned int hash = std::hash<std::string>{}(hs.str());
            return hash;
        }
    };
}

#endif //LAB4_CAT_H

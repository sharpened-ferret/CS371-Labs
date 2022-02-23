#ifndef LAB5_SHAPE_H
#define LAB5_SHAPE_H

#include <string>

class Shape {
public:
    virtual std::string to_string() const = 0;
    virtual void centre_at(double x, double y) = 0;
};

class Circle: public Shape {
public:
    Circle(double x, double y, double r);
    std::string to_string() const override;
    void centre_at(double x, double y) override;

private:
    double x, y, r;
};

#endif //LAB5_SHAPE_H

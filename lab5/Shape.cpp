#include "Shape.h"
#include <sstream>

std::string Circle::to_string() const {
    std::stringstream sstr;
    sstr << "Circle centred at (" << this->x << ", " << this->y << ") with radius " << this->r << "..." << std::endl;
    return sstr.str();
}

Circle::Circle(double x, double y, double r) : x(x), y(y), r(r) {
    this->x = x;
    this->y = y;
    this->r = r;
}

void Circle::centre_at(double x, double y) {
    this->x = x;
    this->y = y;
}

#include "Shape.h"
#include <sstream>
#include <iostream>

Circle::Circle(double x, double y, double r) : x(x), y(y), r(r) {
    this->x = x;
    this->y = y;
    this->r = r;
}

std::string Circle::to_string() const {
    std::stringstream sstr;
    sstr << "Circle centred at (" << this->x << ", " << this->y << ") with radius " << this->r << "..." << std::endl;
    return sstr.str();
}

void Circle::centre_at(double x, double y) {
    this->x = x;
    this->y = y;
}

Rectangle::Rectangle(double x0, double y0, double x1, double y1) {
    this->x0 = x0;
    this->x1 = x1;
    this->y0 = y0;
    this->y1 = y1;
}

std::string Rectangle::to_string() const {
    std::stringstream sstr;
    double height = 0;
    double width = 0;
    if (this->x0 > this->x1) {
        width = this->x0 - this->x1;
    }
    else {
        width = this->x1 - this->x0;
    }

    if (this->y0 > this->y1) {
        height = this->y0 - this->y1;
    }
    else {
        height = this->y1 - this->y0;
    }

    sstr << "Rectangle at [(" << this->x0 << ", " << this->y0 << "), (" << this->x1 << ", " << this->y1
        << ")] with width " << width << ", height " << height << std::endl;
    return sstr.str();
}

void Rectangle::centre_at(double x, double y) {
    double centre_x;
    double centre_y;
    if (this->x1 > this->x0) {
        centre_x = (this->x1 - this->x0) / 2.0;
    }
    else {
        centre_x = (this->x0 - this->x1) /2.0;
    }
    if (this->y1 > this->x0) {
        centre_y = (this->y1 - this->y0) / 2.0;
    }
    else {
        centre_y = (this->y0 - this->y1) / 2.0;
    }

    double change_x = x - centre_x;
    double change_y = y - centre_y;
    this->x0 += change_x;
    this->x1 += change_x;
    this->y0 += change_y;
    this->y1 += change_y;
}

Triangle::Triangle(double x0, double y0, double x1, double y1, double x2, double y2) {
    this->x0 = x0;
    this->x1 = x1;
    this->x2 = x2;
    this->y0 = y0;
    this->y1 = y1;
    this->y2 = y2;
}

std::string Triangle::to_string() const {
    std::stringstream sstr;
    sstr << "Triangle at [(" << this->x0 << ", " << this->y0 << "), (" << this->x1 << ", " << this->y1
        << "), (" << this->x2 << ", " << this->y2 << ")] with side lengths " << std::endl;
    return std::string();
}

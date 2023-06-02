#include "rectangle.h"

Rectangle::Rectangle(const Point & center) : Shape(center) {
    this->height = 1;
    this->width = 3;
}

void Rectangle::setheight(double height) {
    this->height = height;
}
        
double Rectangle::getheight() const {
    return this->height;
}

void Rectangle::setwidth(double width) {
    this->width = width;
}
        
double Rectangle::getwidth() const {
    return this->width;
}

double Rectangle::getarea() {
    return this->height * this->width;
}

double Rectangle::getperimeter() {
    return 2 * (this->height + this->width);
}

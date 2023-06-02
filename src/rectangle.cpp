#include "rectangle.h"

Rectangle::Rectangle(const Point & center) : Shape(center) {
    this->height = 1;
    this->width = 3;
}

Rectangle::Rectangle(const Rectangle & rectangle) :
    Shape(rectangle.getcenter()),
    Rotatable(rectangle) {
    this->height = rectangle.height;
    this->width = rectangle.width;
}

Rectangle::Rectangle(Rectangle && rectangle) :
    Shape(rectangle.getcenter()),
    Rotatable(std::move(rectangle)) {
    this->height = rectangle.height;
    this->width = rectangle.width;
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

void Rectangle::operator=(const Rectangle & rectangle) {
    Shape::setcenter(rectangle.getcenter());
    Rotatable::operator=(rectangle);
    this->height = rectangle.height;
    this->width = rectangle.width;
}

void Rectangle::operator=(Rectangle && rectangle) {
    Shape::setcenter(rectangle.getcenter());
    Rotatable::operator=(std::move(rectangle));
    this->height = rectangle.height;
    this->width = rectangle.width;
}

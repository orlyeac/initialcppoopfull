#include "circle.h"

Circle::Circle(const Point & center) : Shape(center) {
    this->radius = 1;
}

void Circle::setradius(double radius) {
    this->radius = radius;
}
        
double Circle::getradius() const {
    return this->radius;
}

double Circle::getarea() {
    return PI * this->radius * this->radius;
}

double Circle::getperimeter() {
    return 2 * PI * this->radius;
}

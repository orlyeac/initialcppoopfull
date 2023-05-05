#include "point.h"
#include <cmath>

Point::Point() {
    this->x = 0;
    this->y = 0;
}

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point & Point::setx(double x) {
    this->x = x;
    return *this;
}

double Point::getx() const {
    return this->x;
}

Point & Point::sety(double y) {
    this->y = y;
    return *this;
}

double Point::gety() const {
    return this->y;
}

double Point::distance(const Point & p) {
    return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
}

bool Point::operator==(const Point & p) {
    return this->x == p.x && this->y == p.y;
}

bool Point::operator!=(const Point & p) {
    return this->x != p.x || this->y != p.y;
}

std::ostream & operator<<(std::ostream & f, const Point & p) {
    f << "(" << p.x << ", " << p.y << ")";
    return f;
}

#include "point.h"

Point::Point() {
    x = 0;
    y = 0;
}

void Point::setx(double x1) {
    x = x1;
}

double Point::getx() {
    return x;
}

void Point::sety(double y1) {
    y = y1;
}

double Point::gety() {
    return y;
}

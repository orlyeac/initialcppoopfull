#include "shape.h"

Shape::Shape(const Point & center) {
    this->center = center;
}

void Shape::setcenter(const Point & center) {
    this->center = center;
}

Point & Shape::getcenter() {
    return this->center;
}

#include "shape.h"

Shape::Shape(const Point & center) {
    this->center = center;
}

Shape::~Shape() {

}
        
void Shape::setcenter(const Point & center) {
    this->center = center;
}

const Point & Shape::getcenter() const {
    return this->center;
}
        
Point & Shape::getcenter() {
    return this->center;
}

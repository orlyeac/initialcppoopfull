#include "square.h"

Square::Square(const Point & center) : Rectangle(center) {
    Rectangle::setheight(1);
    Rectangle::setwidth(1);
}

void Square::setheight(double height) {
    Rectangle::setheight(height);
    Rectangle::setwidth(height);
}

void Square::setwidth(double width) {
    Rectangle::setheight(width);
    Rectangle::setwidth(width);
}

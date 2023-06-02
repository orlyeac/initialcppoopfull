#include "square.h"

Square::Square(const Point & center) : Rectangle(center) {
    Rectangle::setheight(1);
    Rectangle::setwidth(1);
}

Square::Square(const Square & square) : Rectangle(square) {

}

Square::Square(Square && square) :
    Rectangle(std::move(square)) {

}

void Square::setheight(double height) {
    Rectangle::setheight(height);
    Rectangle::setwidth(height);
}

void Square::setwidth(double width) {
    Rectangle::setheight(width);
    Rectangle::setwidth(width);
}

void Square::operator=(const Square & square) {
    Rectangle::operator=(square);
}

void Square::operator=(Square && square) {
    Rectangle::operator=(std::move(square));
}

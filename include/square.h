#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square : public Rectangle {
    public:
        Square(const Point &);
        Square(const Square &);
        Square(Square &&);
        void setheight(double);
        void setwidth(double);
        void operator=(const Square &);
        void operator=(Square &&);
};

#endif // SQUARE_H

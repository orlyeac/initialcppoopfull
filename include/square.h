#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square : public Rectangle {
    public:
        Square(const Point &);
        void setheight(double);
        void setwidth(double);
};

#endif // SQUARE_H

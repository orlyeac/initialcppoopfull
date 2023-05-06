#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
    public:
        Rectangle(const Point &);
        void setheight(double);
        double getheight() const;
        void setwidth(double);
        double getwidth() const;
    private:
        double height;
        double width;
};

#endif // RECTANGLE_H

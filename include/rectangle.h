#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include "rotatable.h"

class Rectangle : public Shape {
    public:
        Rectangle(const Point &);
        virtual ~Rectangle();
        virtual void setheight(double);
        double getheight() const;
        virtual void setwidth(double);
        double getwidth() const;
        double getarea();
        double getperimeter();
        Rotatable rotatable;
    private:
        double height;
        double width;
};

#endif // RECTANGLE_H

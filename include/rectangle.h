#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include "rotatable.h"

class Rectangle : public Shape, public Rotatable {
    public:
        Rectangle(const Point &);
        Rectangle(const Rectangle &);
        Rectangle(Rectangle &&);
        virtual void setheight(double);
        double getheight() const;
        virtual void setwidth(double);
        double getwidth() const;
        double getarea();
        double getperimeter();
        void operator=(const Rectangle &);
        void operator=(Rectangle &&);
    private:
        double height;
        double width;
};

#endif // RECTANGLE_H

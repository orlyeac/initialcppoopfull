#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape {
    public:
        void setcenter(const Point &);
        const Point & getcenter() const;
        Point & getcenter();
        virtual double getarea() = 0;
        virtual double getperimeter() = 0;
    protected:
        Shape(const Point &);
    private:
        Point center;
};

#endif // SHAPE_H

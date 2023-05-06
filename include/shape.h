#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape {
    public:
        Shape(const Point &);
        void setcenter(const Point &);
        const Point & getcenter() const;
        Point & getcenter();
    private:
        Point center;
};

#endif // SHAPE_H

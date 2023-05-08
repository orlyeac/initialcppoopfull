#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
    public:
        Circle(const Point &);
        void setradius(double);
        double getradius() const;
    private:
        double radius;
};

#endif // CIRCLE_H

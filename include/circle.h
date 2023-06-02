#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#define PI 3.1415926535897932384

class Circle : public Shape {
    public:
        Circle(const Point &);
        void setradius(double);
        double getradius() const;
        double getarea();
        double getperimeter();
    private:
        double radius;
};

#endif // CIRCLE_H

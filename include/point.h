#ifndef POINT_H
#define POINT_H

#include <ostream>

class Point {
    public:
        Point();
        Point(double, double);
        Point & setx(double);
        double getx() const;
        Point & sety(double);
        double gety() const;
        double distance(const Point &);
        bool operator==(const Point &);
        bool operator!=(const Point &);
        friend std::ostream & operator<<(std::ostream &, const Point &);
    private:
        double x;
        double y;
};

#endif // POINT_H

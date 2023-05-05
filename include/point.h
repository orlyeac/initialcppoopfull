#ifndef POINT_H
#define POINT_H

class Point {
    public:
        Point();
        void setx(double);
        double getx();
        void sety(double);
        double gety();
    private:
        double x;
        double y;
};

#endif // POINT_H

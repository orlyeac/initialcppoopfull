#include <iostream>
#include "point.h"

using namespace std;

void testpoint();

int main() {
    testpoint();
    return 0;
}

void testpoint() {
    try {
        Point point0;
        Point point1(1, 1);
        if (!(point1.getx() == 1 && point1.gety() == 1)) throw 1;
        cout << point1 << endl;
        point1.setx(3).sety(4);
        if (!(point1.getx() == 3 && point1.gety() == 4)) throw 1;
        cout << point1 << endl;
        if (!(point0.distance(point1) == 5)) throw 1;
        point1.setx(0).sety(0);
        if (!(point0 == point1 && !(point0 != point1))) throw 1;
        point1.setx(3).sety(0);
        if (!(!(point0 == point1) && point0 != point1)) throw 1;
        point1.setx(0).sety(4);
        if (!(!(point0 == point1) && point0 != point1)) throw 1;
        point1.setx(3).sety(4);
        if (!(!(point0 == point1) && point0 != point1)) throw 1;
        cout << "test point: ok" << endl;
    }
    catch (...) {
        cout << "test point: failed" << endl;
    }
}

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
        if (!(point0.getx() == 0 && point0.gety() == 0)) throw 1;
        cout << "(" << point0.getx() << ", " << point0.gety() << ")" << endl;
        point0.setx(3);
        point0.sety(4);
        if (!(point0.getx() == 3 && point0.gety() == 4)) throw 1;
        cout << "(" << point0.getx() << ", " << point0.gety() << ")" << endl;
        cout << "test point 0001: ok" << endl;
    }
    catch (...) {
        cout << "test point 0001: failed" << endl;
    }
}
#include <iostream>
using namespace std;

class Dummy {
    int year;
public:
    Dummy(int a) {year = a;};
    friend class Point2D;
};

class Point2D {
    int x, y;
public:
    Point2D() { x = y = 0; };
    Point2D(int a, int b) {
        x = a;
        y = b;
    };
    void setValues(int a, int b) {
        x = a;
        y = b;
    };
    void printStr() {
        cout << "x: " << x << " y: " << y << endl;
    };
    friend Point2D doublePoint (Point2D);
    void printDummyYear(Dummy param) {
        cout << param.year << endl;
    };
};


Point2D doublePoint(Point2D param) {
    Point2D result;
    result.setValues(param.x * 2, param.y * 2);
    return result;
}

int main() {
    Point2D a(2,4);
    Point2D b = doublePoint(a);
    b.printStr();

    Point2D c;
    Dummy d(1997);
    c.printDummyYear(d);

    return 0;
}






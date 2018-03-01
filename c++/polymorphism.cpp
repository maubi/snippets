#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_values(int a, int b) {
        width = a;
        height = b;
    }
    virtual int area() {
        return 0;
    }
};

class Rect: public Polygon {
public:
    int area() {
        return width * height;
    }
};

class Tri: public Polygon {
public:
    int area() {
        return width * height / 2;
    }
};

int main() {
    Rect rect1;
    Tri tri1;
    Polygon *pPoly1 = &rect1;
    Polygon *pPoly2 = &tri1;
    pPoly1->set_values(10, 10);
    pPoly2->set_values(30, 40);
    cout << pPoly1->area() << endl;
    cout << pPoly2->area() << endl;
    return 0;
}
#include <iostream>
using namespace std;

// abstract class
class Polygon {
protected:
    int width, height;
public:
    void set_values(int a, int b) {
        width = a;
        height = b;
    }
    virtual int area() = 0;
    void printArea(void) {
        cout << this->area() << endl;
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
    // statically allocated objects
    Rect rect1;
    Tri tri1;
    //Polygon poly1;            # wrong. Polygon is abstract, therefore it cannot be instantiated
    Polygon *pPoly1 = &rect1;
    Polygon *pPoly2 = &tri1;
    pPoly1->set_values(10, 10);
    pPoly2->set_values(20, 20);
    pPoly1->printArea();
    pPoly2->printArea();

    // dynamically allocated objects
    Polygon *pPoly3 = new Rect;
    Polygon *pPoly4 = new Tri;
    pPoly3->set_values(30, 30);
    pPoly4->set_values(40, 40);
    pPoly3->printArea();
    pPoly4->printArea();
    delete pPoly3;
    delete pPoly4;

    return 0;
}














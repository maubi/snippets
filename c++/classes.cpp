#include <iostream>
using namespace std;

class Rectangle {
    int x, y;
public:
    int area() { return x * y;};
    void set_values(int, int);
};

class Square {
    int *edge;
public:
    int area() {return (*edge) * (*edge);};
    Square(int); // constructor (declaration)
    Square();    // constructor (declaration)
    ~Square();   // destructor (declaration)
};

int main() {
    Rectangle rect1;
    Rectangle *pRect;
    rect1.set_values(10, 20);
    cout << "Area(10, 20): " << rect1.area() << endl;

    Square square1(10);
    cout << "Area(10): " << square1.area() << endl;

    Square square2;
    cout << "Area(): " << square2.area() << endl;

    pRect = new Rectangle;
    pRect->set_values(100, 100);
    cout << "pRect->area(): " << pRect->area() << endl;
    delete pRect;

    return 0;
}

// constructor for class Square (definition)
Square::Square(int a) {
    cout << "Constructor1 invoked!" << endl;
    edge = new int;
    *edge = a;
}

Square::Square() {
    cout << "Constructor2 invoked!" << endl;
    edge = new int;
    *edge = 5;
}

Square::~Square() {
    cout << "Destructor invoked!" << endl;
    delete edge;
}

void Rectangle::set_values(int a, int b) {
    x = a;
    y = b;
    return;
}
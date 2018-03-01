#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    Polygon(int a, int b) {
        width = a;
        height = b;
    }
    Polygon() {
        width = 0;
        height = 0;
    }
    void setValues(int a, int b) {
        width = a;
        height = b;
    }
};

class Rectangle: public Polygon {
public:
    Rectangle(): Polygon() {};
    Rectangle(int a, int b): Polygon(a, b) {};
    int area() {
        return width * height;
    }
};

class Triangle: public Polygon {
public:
    Triangle(): Polygon() {};
    Triangle(int a, int b): Polygon(a, b) {};
    int area() {
        return width * height / 2;
    }
};

int main() {
    Rectangle rect1(10,20);
    int area;
    area = rect1.area();
    cout << "rect1 area: " << area << endl;
    Rectangle rect2;
    area = rect2.area();
    cout << "rect2 area: " << area << endl;
    
    return 0;
}







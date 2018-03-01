#include <iostream>
using namespace std;

class Vector2D {
    int x, y;
public:
    Vector2D() {
        x = y = 0;
    }
    Vector2D(int a, int b) {
        x = a;
        y = b;
    }

    void setValues(int a, int b) {
        x = a;
        y = b;
    }

    void printStr() { cout << "x: " << x << " y: " << y << endl; };

    Vector2D operator + (Vector2D param) {
        Vector2D result;
        result.setValues(x + param.x, y + param.y);
        return result;
    };
};

int main() {
    Vector2D a, b, c;
    a.setValues(1, 10);
    b.setValues(-3,4);
    c = a + b;
    c.printStr();
    return 0;
}
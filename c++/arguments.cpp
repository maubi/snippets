#include <iostream>
using namespace std;

// pass-by-reference
void duplicate(int& a, int& b, int& c) {
    a *= 2;
    b *= 2;
    c *= 2;

    return;
}

// pass-by-value
int duplicate2(int a) {
    a *= 2;
    return a;
}

int addNum (int a, int b = 1) {
    return a + b;
}

int main() {
    int w, x, y, z;

    w = 10;
    x = 20;
    y = 30;
    z = 40;

    duplicate (w, x, y);
    cout << "w: " << w << " x: " << x << " y: " << y << endl;

    z = duplicate2(z);
    cout << "z: " << z << endl;

    x = 10;
    y = 20;
    z = addNum(x, y);
    cout << "z: " << z << endl;

    x = 10;
    z = addNum(x);
    cout << "z: " << z << endl;

    return 0;
}





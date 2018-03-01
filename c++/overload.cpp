#include <iostream>
using namespace std;

int divideBy2 (int a) {
    return a / 2;
}

float divideBy2 (float a) {
    return a / 2;
}

int main() {
    int x = 9;
    float y = 9;

    cout << divideBy2(x) << endl;
    cout << divideBy2(y) << endl;

    return 0;
}
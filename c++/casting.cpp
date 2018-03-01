#include <iostream>

using namespace std;

int main() {
    int a;
    float b;
    int c;
    float d;

    b = 1.5;
    a = (int) b;                    // casting C-style

    cout << "a: " << a << "\n";

    d = 1.3;
    c = int (d);                    // casting C++-style

    cout << "c: " << c << "\n";

    return 0;
}
// Variables example

#include <iostream>
using namespace std;

int main() {
    int a, b;
    int result;
    int c = 10;   // initialization c-style
    int d (30); // initialization c++-style

    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    cout << result;
    cout << "\n";
    cout << c;
    cout << "\n";
    cout << d;
    cout << "\n";

    return 0;
}
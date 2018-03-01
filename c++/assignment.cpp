// assignment operator

#include <iostream>
using namespace std;

int main() {
    int a, b;

    a = 2 + (b = 5);

    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    
    return 0;
}
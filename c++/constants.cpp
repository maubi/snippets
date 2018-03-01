// Constants

#include <iostream>
using namespace std;

#define PI 3.14159

// int main() is wrong! must insert space before parentheses (??)
int main () {
    const char NEWLINE ('\n');
    double r = 5.0;
    double circle;

    circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE;

    return 0;
}
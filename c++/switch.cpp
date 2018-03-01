#include <iostream>
using namespace std;

int main() {
    int i;

    cout << "Insert a number ";
    cin >> i;

    switch (i) {
        case 1:
            cout << "You entered 1" << endl;
            break;
        case 2:
            cout << "You entered 2" << endl;
            break;
        default:
            cout << "You entered a number that is not 1 nor 2" << endl;
    }

    return 0;
}
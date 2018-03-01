#include <iostream>
using namespace std;

int doubleNum (int a) {
    a = a * 2;
    return a;
}

int main() {
    int num;
    int result;
    cout << "Insert a number ";
    cin >> num;

    result = doubleNum(num);

    cout << num << " multiplied by 2 is " << result << endl;

    return 0;
}
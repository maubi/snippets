#include <iostream>

using namespace std;

int main() {
    int i;

    for (i = 0; i < 10; i++) {
        if (i == 2)
            continue;
        else if (i == 5)
            break;

        cout << "i: " << i << endl;
    }

    i = 10;
    while (i >= 0) {
        cout << "i: " << i << endl;
        i--;
    }

    i = 10;
    do {
        cout << "i: " << i << endl;
        i--;
    } while (i >= 0);

}
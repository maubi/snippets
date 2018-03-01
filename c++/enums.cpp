#include <iostream>
using namespace std;

enum months_t {january = 1, february, march, april, may, june, july, august, september, october, november, december};

int main() {
    months_t cMonth;

    cMonth = february;

    if (cMonth == 2) {
        cout << "OK" << endl;
    }
    else {
        cout << "Internal Error" << endl;
    }

    return 0;
}
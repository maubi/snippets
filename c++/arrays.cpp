#include <iostream>
using namespace std;

void printArray(int ar[], int length);

int main() {
    int list1[] = {10, 20, 30, 40};
    int list2[5] = {1, 2, 3, 4, 5};
    int list3[3] = {100, 200, 300};

    int i, n = 0, size = 4;

    for (i = 0; i < size; i++) {
        n += list1[i];
    }

    cout << "n: " << n << endl;

    for (i = 0; i < 5; i++) {
        cout << "list2[" << i <<"] = " << list2[i] << endl;
    }

    printArray(list3, 3);

    return 0;
}

void printArray(int ar[], int length) {
    int i;
    
    for (i = 0; i < length; i++) {
        cout << ar[i] << endl;
    }

    return;
}
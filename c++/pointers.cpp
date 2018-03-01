#include <iostream>
using namespace std;

void increase (void *data, int size);
int addition (int, int);
int operation (int (*funct)(int, int), int, int);
int subtraction (int, int);

int main() {
    int a = 10;
    int *p;
    int ar1[] = {1, 2, 3};
    int *arp;
    char c1;
    char *cp1;
    char **cp2;
    char incChar = 'a';
    int incInt = 100;
    char *nullPointer;
    int result;
    int (*minus) (int, int);

    // referencing and dereferencing
    p = &a;
    cout << (*p) + 1 << endl;

    // array as pointers
    arp = ar1;
    cout << *(arp+1) << endl;
    cout << arp[2] << endl;

    // multi-level referencing and dereferencing
    c1 = 'a';
    cp1 = &c1;
    cp2 = &cp1;

    cout << "cp2: " << **cp2 << endl;

    // void pointer utilization
    increase(&incChar, sizeof(incChar));
    cout << "incChar: " << incChar << endl;
    increase(&incInt, sizeof(incInt));
    cout << "incInt: " << incInt << endl;

    // null pointer
    nullPointer = 0;

    // function pointers
    result = operation (addition, 10, 20);
    cout << "result: " << result << endl;
    minus = subtraction;
    result = operation (minus, 60, 30);
    cout << "result: " << result << endl;

    return 0;
}

void increase (void *data, int size) {
    char *pchar;
    int *pint;    

    if (size == sizeof(char)) {
        pchar = (char *) data;
        ++(*pchar);
    }
    else if (size = sizeof(int)) {
        pint = (int *) data;
        ++(*pint);
    }
}

int addition (int a, int b) {
    return a + b;
}

int subtraction (int a, int b) {
    return a - b;
}

int operation (int (*funct)(int,int), int x, int y) {
    int result;
    result = (*funct)(x, y);
    return result;
}




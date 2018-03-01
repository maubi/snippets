#include <iostream>
using namespace std;

int main() {
    int *pInt;
    int i;    
    char *pChar;
    char *pNoThrow;

    // dynamically allocate memory throwing an exception on error (unhandled here)
    pInt = new int[10];

    for (i = 0; i < 10; i++) {
        *(pInt + i) = 1;
    }

    cout << "*pInt" << endl;
    for (i = 0; i < 10; i++) {
        cout << i << ": " << *(pInt + i) << endl;
    }
    cout << endl;

    pChar = new char;
    *pChar = 'a';
    cout << "*pChar: " << *pChar << endl;

    // free allocated memory blocks
    delete [] pInt;
    delete pChar;

    // dynamically allocate memory without raising exception on error (returns a NULL pointer if it fails)
    pNoThrow = new (nothrow) char [10000000000];
    if (pNoThrow == 0) {
        cout << "Error allocating memory!" << endl;
    }
    else {
        cout << "Memory allocated successfully!" << endl;
    }

    // free allocated memory block
    delete [] pNoThrow;

    return 0;
}
#include <iostream>
using namespace std;

typedef char *pChar;

int main() {
    char a = 'a';
    pChar p1;
    
    p1 = &a;
    cout << "p1: " << *p1 << endl;

    return 0;
}
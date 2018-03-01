#include <iostream>
using namespace std;

int main() {
    union mix {
        unsigned short int i;
        unsigned char c;
    };

    struct {
        char name[50];
        unsigned short int age;
        union {
            unsigned short int i;
            unsigned char c;
        } val;
    } struct1;

    struct {
        char name[50];
        unsigned short int age;
        union {
                unsigned short int i;
                unsigned char c;
        };
    } struct2;

    cout << "Sizeof(int): " << sizeof(short int) << endl;
    cout << "Sizeof(char): " << sizeof(char) << endl;

    union mix mix1;

    mix1.i = 65535;
    mix1.c = 255;

    cout << "mix1.c: " << mix1.c << endl;
    cout << "mix1.i: " << mix1.i << endl;

    struct1.val.i = 32767;
    cout << "struct1.val.i: " << struct1.val.i << endl;

    struct2.i = 100;
    cout << "struct2.i: " << struct2.i << endl;

    return 0;
}
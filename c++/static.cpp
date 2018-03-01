#include <iostream>
using namespace std;

class Dummy {
public:
    static int n;                               // cannot initialize here
    static void printN() { cout << n << endl;};
    Dummy() { n++; };
    ~Dummy() { n--; };
};

int Dummy::n = 0;

int main() {
    Dummy a, b, c;
    Dummy *pDummy = new Dummy[10];
    cout << "n: " << a.n << endl;
    delete [] pDummy;
    cout << "n: " << Dummy::n << endl;
    Dummy::printN();
    
    return 0;
}
#include <iostream>
using namespace std;

class MyException: public exception {
    virtual const char* what() const noexcept {
        return "myexception";
    } 
} myex;

int main() {
    int param;
    cout << "Enter choice [0 = num; 1 = char; 2 = default ";
    cin >> param;
    try {
        switch(param) {
            case 0:
                throw 20;
                break;
            case 1:
                throw 'X';
                break;
            case 2:
                throw "Generic Error";
                break;
        }
    }
    catch (int e) {
        cout << "Exception nr. " << e << endl;
    }
    catch (char e) {
        cout << "Exception '" << e <<"'" << endl;
    }
    catch (...) {
        cout << "Generic Exception" << endl;
    }

    try {
        try {
            throw 20;
        }
        catch (int e) {
            throw;
        }
    }
    catch (int e) {
        cout << "Exception nr. " << e << endl;
    }
    catch (...) {
        cout << "Exception occurred" << endl;
    }

    try {
        int *myarray = new int[1000000000000];
    }
    catch (bad_alloc& e) {
        cout << "Exception: " << e.what() << endl;
    }

    try {
        throw myex;
    }
    catch (exception& e) {
        cout << "Exception: " << e.what();
    }

    return 0;
}
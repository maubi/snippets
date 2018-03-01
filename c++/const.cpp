#include <iostream>
using namespace std;

class A {
public:
    int foo() { return 42; }
    int bar() const { return 42; }
};

class B {
public:
    void member() const {
        //p = 0;       //won't work. member is const so it cannot modify members (unless they are marked mutable)
        *p = 'a';      //will work
    }
private:
    char *p;
};

void test (const A& a) {        // pass-by-reference to work on the actual instance, not a copy
    //a.foo();        // won't work. class instance is const, so only const methods are allowed
    cout << a.bar() << endl;         // will work. bar is a const method
}

int main() {
    A obj1;
    test(obj1);

    B obj2;
    obj2.member();

    const A& obj3;                      // obj3 is a reference?
    //obj3.foo();                       // won't work
    cout << obj3.bar() << endl;         // will work
}
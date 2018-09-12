#include <iostream>

using namespace std;

class Foo {
public:
	void algorithm(int a, int b) {
		cout << "Step 1\n";
		cout << "Step 2 ";
		op(a, b);
		cout << "Step 3\n";
	}
	virtual void op(int a, int b) = 0;
};

class FooAdd: public Foo {
public:
	void op(int a, int b) {
		cout << a + b << endl;
	}
};

class FooMultiply: public Foo {
public:
	void op(int a, int b) {
		cout << a * b << endl;
	}
};

int main(void) {
	FooAdd obj1;
	obj1.algorithm(2, 3);

	FooMultiply obj2;
	obj2.algorithm(2, 3);

	return 0;
}

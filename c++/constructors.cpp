#include <iostream>
#include <string>

using namespace std;

class Cat {
private:
	int age;
	string name;
public:
	Cat(string name, int age) {
		this->age = age;
		this->name = name;
	}
	void print_str() {
		cout << name << " is " << age << " years old." << endl;
	}
};

int main(int argc, char **argv) {
	// automatic storage
	Cat kyoko("kyoko", 16);		// object allocated on the stack(?)
	kyoko.print_str();

	// dynamic allocation
	Cat *p;			// automatic storage
	p = new Cat("madoka", 13);	// object allocated on the heap(?)
	p->print_str();
	delete p;

/*
	Cat misaki;			WRONG: no matching constructor
*/
}

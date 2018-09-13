#include <iostream>

using namespace std;

class ICar {
public:
	virtual int getType() = 0;
};

class CarFactory {
public:
	virtual ICar *makeCar() = 0;
};

class Sedan: public ICar {
public:
	virtual int getType() {
		return 0;
	}
	void foo() {
		cout << "Foo!" << endl;
	}
};

class OffRoad: public ICar {
public:
	virtual int getType() {
		return 1;
	}
};

class SedanFactory: public CarFactory {
public:
	virtual Sedan *makeCar() override {
		return new Sedan;
	}
};

class OffRoadFactory: public CarFactory {
public: 
	virtual OffRoad *makeCar() override {
		return new OffRoad;
	}
};

int main(void) {
	SedanFactory factory1;
	OffRoadFactory factory2;

	auto mySedan = factory1.makeCar();
	cout << mySedan->getType() << endl;
	mySedan->foo();

	auto myOffRoad = factory2.makeCar();
	cout << myOffRoad->getType() << endl;
	return 0;
}












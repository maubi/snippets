#include <iostream>

using namespace std;

class ICar {
public:
	virtual void driveCar() = 0;
};

class Car: public ICar {
public:
	virtual void driveCar() override {
		cout << "Car has been driven!" << endl;
	}
};

class ProxyCar: public ICar {
private:
	int driverAge;
	Car realCar;
public:
	ProxyCar(int age) {
		driverAge = age;
	}
	virtual void driveCar() override {
		if(driverAge >= 18) {
			realCar.driveCar();
		} else {
			cout << "Underage driver cannot drive car!" << endl;
		}
	}
};

int main(void) {
	auto myCar = ProxyCar(19);
	myCar.driveCar();

	auto myCar2 = ProxyCar(15);
	myCar2.driveCar();
	return 0;
}









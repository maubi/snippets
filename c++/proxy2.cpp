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
	int _driverAge;
	ICar *realCar;
public:
	ProxyCar(int age) {
		_driverAge = age;
		realCar = new Car;
	}

	virtual void driveCar() override {
		if (_driverAge < 18) {
			cout << "Driver is underage. Cannot drive car!" << endl;
		} else {
			realCar->driveCar();
		}
	}
	~ProxyCar() {
		delete realCar;
	}
};

int main(void) {
	ICar *myCar = new ProxyCar(15);
	myCar->driveCar();

	ICar *myCar2 = new ProxyCar(20);
	myCar2->driveCar();
	return 0;
}

#include <iostream>
using namespace std;


class Car {
public:
	void drive() {
		cout << "Driving...\n";
	}
};


class Person {
private:
	Car* car;

public:
	Person(Car* c) {
		car = c;
	}

	void goForDrive() {
		car->drive();
	}
};

int main() {

	return 0;
}
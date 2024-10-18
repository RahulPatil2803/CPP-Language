/*
3. Write a code to implement inheritance where vehicle is base class and derived 
classes like bike, car, bus etc.
*/
#include<iostream>
using namespace std;

class Vehicle{
	public:
	virtual void start(){
		printf("\nVehicle is Starting");
	}
};
class Bike:public Vehicle{
	public:
	void start(){
		printf("\nBike is start");
	}
};
class Car:public Vehicle{
	public:
	void start(){
		printf("\nCar is start");
	}
};
class Bus:public Vehicle{
	public:
	void start(){
		printf("\nBus is start");
	}
};

int main(){
	Vehicle v;
	v.start();

	Bike b;
	b.start();

	Car c;
	c.start();

	Bus bus;
	bus.start();
	return 0;
}
//Lorry.h
#pragma once
#include <string>
#include "Car.h"
using namespace std;

class Lorry
{
private:
	int capacity;
	Car car;
public:
	int getCapacity() const { return capacity; }
	Car getCar() const { return car; }

	void setCapacity(int capacity) { this->capacity = capacity; }
	void getCar(Car car) { this->car = car; }

	void Init(int capacity, Car car);
	void Display() const;
	void Read();
};

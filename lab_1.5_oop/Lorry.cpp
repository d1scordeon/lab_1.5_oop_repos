//Lorry.cpp
#include "Car.h"
#include "Lorry.h"
#include <iostream>

using namespace std;

void Lorry::Init(int capacity, Car car)
{
	setCapacity(capacity);
	getCar(car);
}

void Lorry::Display() const
{
	cout << endl;
	car.Display();
	cout << "Capacity =" << capacity << endl;
}

void Lorry::Read()
{
	int capacity;
	Car c;
	cout << endl;
	c.Read();
	cout << "Capacity = ?"; cin >> capacity;
	Init(capacity, c);
}
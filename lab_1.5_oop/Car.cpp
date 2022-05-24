//Car.cpp
#include "Car.h"
#include <iostream>

using namespace std;

void Car::Init(string brand, int cylinders, int power)
{
	setBrand(brand);
	setCylinders(cylinders);
	setPower(power);
}

void Car::Display() const
{
	cout << endl;
	cout << "Brand = " << brand << endl;
	cout << "Cylinders = " << cylinders << endl;
	cout << "Power = " << power << endl;
}

void Car::Read()
{
	string brand;
	int cylinders;
	int power;
	cout << "Brand = ?"; cin >> brand;
	cout << "Cylinders = ?"; cin >> cylinders;
	cout << "Power = ?"; cin >> power;
	Init(brand, cylinders, power);
}
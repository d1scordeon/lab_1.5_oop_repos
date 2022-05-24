//Car.h
#pragma once
#include <string>
using namespace std;
class Car
{
private:
	string brand;
	int cylinders;
	int power;
public:
	string getBrand() const { return brand; }
	int getCylinders() const { return cylinders; }
	int getPower() const { return power; }

	void setBrand(string brand) { this->brand = brand; }
	void setCylinders(int cylinders) { this->cylinders = cylinders; }
	void setPower(int power) { this->power = power; }

	void Init(string brand, int cylinders, int power);
	void Display() const;
	void Read();
};
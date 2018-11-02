#include <iostream>
#include <string>
#include "Hostel.h"
using namespace std;

Hostel::Hostel() {
	name = "Kyiv";
	number = 4323;
	quantity = 80;

	location = "square";
	reserved = 30;
}


Hostel::Hostel(string _name, int _number, int _quantity, string _location, int _reserved)
{
	name = _name;
	number = _number;
	quantity = _quantity;

	location = _location;
	reserved = _reserved;
}


Hostel::~Hostel()
{
	cout << "hostel" << endl;
}


void Hostel::getname() {
	cout << "the name of hostel " << name << endl;
}


void Hostel::getnumber() {
	cout << "the customers: " << number << endl;
}


void Hostel::getquantity() {
	cout << "floats " << quantity << endl;
﻿#include <iostream>
#include <string>
#include "Hostel.h"
using namespace std;

int main(void) {
	string _name[3];
	int _number[3];
	int _quantity[3];
	string _location[3];
	int _reserved[3];

	for (int i = 0; i < 3; i++) {
		cout << "Enter the name: ";
		cin >> _name[i];
		cout << "Enter the number of customers : ";
		cin >> _number[i];
		cout << "Enter the number of floats): ";
		cin >> _quantity[i];
		cout << "Enter the location: ";
		cin >> _location[i];
		cout << "Enter reserved place: ";
		cin >> _reserved[i];
		cout << endl;
	}

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	Hostel H1(_name[0], _number[0], _quantity[0], _location[0], _reserved[0]);
	Hostel H2(_name[1], _number[1], _quantity[1], _location[1], _reserved[1]);
	Hostel H3(_name[2], _number[2], _quantity[2], _location[2], _reserved[2]);

	H1.getname();
	H1.getnumber();
	H1.getquantity();

	cout << endl << endl;

	H2.getname();
	H2.getnumber();
	H2.getquantity();

	cout << endl << endl;

	H3.getname();
	H3.getnumber();
	H3.getquantity();

	cout << endl << endl;


	H1

		; getchar();
	getchar();
	return 0;

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Hostel
{
private:
	string name; // назва готелю 
	int number; // кількість відвідувачів за рік
	int quantity; // кількість квартир
protected:
	string location;
	int reserved;


	// location - розташування 
	// reserved - зарезервовано
public:
	Hostel();
	Hostel(string _name, int _number, int _quantity, string _location, int _reserved);
	~Hostel();
	void getname();
	void getnumber();
	void getquantity();
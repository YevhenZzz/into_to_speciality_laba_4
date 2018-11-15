#pragma once
#include <iostream>
#include <string>
using namespace std;

class Hostel
{
private:
	string name;  
	int number;
	int quantity;
protected:
	string location;
	int reserved; 
	
public:
	Hostel();
	Hostel(string _name, int _number, int _quantity, string _location, int _reserved);
	~Hostel();
	void getname();
	void getnumber();
	void getquantity()

#include <iostream>
#include <string>

#ifndef TECHNICIAN_H
#define TECHNICIAN_H

using namespace std;

class Technician{
	protected:
		string name, id;
		int payRate = 50;
	public:
		Technician();
		setName(string name);
		string getName();
		setID(string id);
		string getID();
		virtual void adjustPay();
};

#endif

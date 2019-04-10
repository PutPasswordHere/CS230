#include <iostream>
#include <string>

#ifndef TECHNICIAN_H
#define TECHNICIAN_H

using namespace std;

class Technician{
	private:
		string name, id;
		int payRate;
	public:
		Technician();
		setName(string name);
		getName();
		setID(string id);
		getID();
		virtual const adjustPay() = 0;
};

#endif

#include "Technician.h"
#include <string>
#include <iostream>

#ifndef GENTECHNICIAN_H
#define GENTECHNICIAN_H

using namespace std;

class genTechnician : public Technician{
	private:
		string department;
	public:
		setDepartment(string s);
		getDepartment();
};

#endif

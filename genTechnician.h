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
		genTechnician(){department = "";}
		setDepartment(string s){department = s;}
		string getDepartment(){return department;}
		void adjustPay(){payRate = payRate * 2;}
};

#endif


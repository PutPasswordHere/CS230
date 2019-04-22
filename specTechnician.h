#include "Technician.h"
#include <iostream>
#include <string>

#ifndef SPECTECHNICIAN_H
#define SPECTECHNICIAN_H

using namespace std;

class specTechnician : public Technician{
	private:
		string specialization;
	public:
		specTechnician(){specialization = "";}
		setSpecialization(string s){specialization = s;}
		string getSpecialization(){return specialization;}
		void adjustPay(){payRate = payRate * 5;}
};

#endif

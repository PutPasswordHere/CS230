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
		setSpecialization();
		getSpecialization();
};

#endif

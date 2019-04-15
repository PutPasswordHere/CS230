#include "specTechnician.h"
#include <iostream>
#include <string>

using namespace std;

specTechnician::specTechnician(){
	specialization = "";
}

void specTechnician::adjustPay(){
	payRate = payRate * 5;
}


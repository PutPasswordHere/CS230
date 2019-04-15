#include "genTechnician.h"
#include <iostream>
#include <string>

using namespace std;

genTechnician::genTechnician(){
	department = "";
}

void genTechnician::adjustPay(){
	payRate = payRate * 2;
}

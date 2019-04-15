/* Equipment Header File */

#include <iostream>
#include <string.h>
#include "Technician.h"

#ifndef EQUIPMENT_H
#define EQUIPMENT_H

using namespace std;

class Equipment
{
	public:
	string ID;
	string DateEntered;
	float LaborCost;
	float LaborHours;
	float TotalPartCost;
	string PartsUsed;
	Technician Technicians[3];
	string RepairStatus;
	string ManagerApprovalDate;
	string Customer;
	
	Equipment();
	void setDate(string Date) {DateEntered = Date;};
	void setLaborCost(float Cost) {LaborCost = Cost;};
	void addPartCost(float Cost) {TotalPartCost += Cost;};
	void addPart(string Part) { PartsUsed.append(Part);};  //using namespace std; #include <string>, #include <iostream>
	void addTechnician(technician t);
	void setRepairStatus(string S) {RepairStatus = S;};
	void addLaborTime(float Num) {LaborHours += Num;};
	void setManagerApproval(string S) {ManagerApprovalDate = S;};
};

#endif

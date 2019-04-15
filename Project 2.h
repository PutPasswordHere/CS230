/* Equipment Header File */

#include <iostream>
#ifndef EQUIPMENT_H
#define EQUIPMENT_H

using namespace std;

class Equipment
{
	public:
	string id;
	string dateEntered;
	float laborCost;
	float laborHours;
	float totalPartCost;
	string partsUsed;
	Technician technicians; //linked list, array, or one technician?
	string repairStatus;
	string managerApprovalDate;
	Customer customer;
	
	Equipment();
	void setDate(string date) { dateEntered = date;};
	void setLaborCost(float cost) {laborCost = cost;};
	void addPartCost(float cost) {totalPartCost += cost;};
	void addPart(string part) { partsUsed.append(part);};  //using namespace std; #include <string>, #include <iostream>
	void addTechnician(technician t); //linked list? array? single techincian?
	void setRepairStatus(string s) {repairStatus = s;};
	void addLaborTime(float num) { laborHours += num;};
	void setManagerApproval(string s) {managerApprovalDate = s;};
};

#endif

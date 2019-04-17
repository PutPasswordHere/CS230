/* Equipment Header File */
//edited by matt v
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
	string Technicians[3];
	string RepairStatus;
	string ManagerApprovalDate;
	string Customer;
	
	Equipment();
	void setDate(string Date) 
	{
	cout << "Set the date: \n";
	cin >> Date;
	DateEntered = Date;
	};
	
	void setLaborCost(float Cost) 
	{
	cout << "set labor the cost: \n";
	cin >> Cost;
	LaborCost = Cost;
	};
	
	void addPartCost(float Cost) 
	{
	cout << "What was the part cost: \n";
	cin >> Cost;
	TotalPartCost += Cost;
	};
	
	void addPart(string Part) 
	{ 
	cout << "Name of the part you want to add: \n";
	cin >> Part;
	PartsUsed.append(Part);
	};
//using namespace std; #include <string>, #include <iostream>
//	void addTechnician(technician t);
	void setRepairStatus(string S) 
	{
	cout << "What is the current Repair status: \n";
	cin >> S;
	RepairStatus = S;
	};
	
	void addLaborTime(float Num) 
	{
	cout << " What is the amount of labor time: \n";
	cin >> Num;
	LaborHours += Num;
	};
	
	void setManagerApproval(string S) 
	{
	cout << " Did the manager approve: \n";
	cin >> S;
	ManagerApprovalDate = S;
	};
};

#endif

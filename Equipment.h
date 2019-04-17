/* Equipment Header File */

#include <iostream>
#include <string.h>

#ifndef EQUIPMENT_H
#define EQUIPMENT_H

using namespace std;

class Equipment{
	private:
		string ID;
		string DateEntered;
		float LaborCost;
		float LaborHours;
		float TotalPartCost;
		string PartsUsed;
		string tech;
		string RepairStatus;
		string ManagerApprovalDate;
		string Customer;
	public:
		Equipment(){
				ID = "";
				DateEntered = "";
				LaborCost = 0.0;
				LaborHours = 0.0;
				TotalPartCost = 0.0;
				PartsUsed = "";
				tech = "";
				RepairStatus = "";
				ManagerApprovalDate = "";
				Customer = "";
				}
		void setDate(string Date) {DateEntered = Date;}
		
		void setLaborCost(float Cost) {LaborCost = Cost;}
		
		void addPartCost(float Cost) {TotalPartCost += Cost;}
		
		void addPart(string Part) {PartsUsed.append(Part);} //using namespace std; #include <string>, #include <iostream>
		
		void addTechnician(string t) {tech = t;}
		
		void setRepairStatus(string S) {RepairStatus = S;}
		
		void addLaborTime(float Num) {LaborHours += Num;}
		
		void setManagerApproval(string S) {ManagerApprovalDate = S;}
		
		void setCustomer(string c){Customer = c;}
		
		string ReturnDate(){ return DateEntered;}
		
		float ReturnLaborCost() {return LaborCost;}
		
		float ReturnPartCost() {return TotalPartCost;}

		string ReturnPartsUsed() {return PartsUsed;}
		
		string ReturnTechnician() {return tech;}
		
		string ReturnRepairStatus() {return RepairStatus;}
		
		float ReturnLaborTime() {return LaborHours;}	
		
		string ReturnManagerApproval() {return ManagerApprovalDate;}
		
		string ReturnCustomer() {return Customer;}
};

#endif

/* Equipment Header File */

#include <iostream>
#include <string>

#ifndef EQUIPMENT_H
#define EQUIPMENT_H

using namespace std;

class Equipment{
	private:
		int ID; 
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
				ID = 0;
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
		void setID(int i){ID = i;}
		int getID(){return ID;}
		void setDate(string Date) {DateEntered = Date;}
		void setLaborCost(float Cost) {LaborCost = Cost;}
		void addPartCost(float Cost) {TotalPartCost += Cost;}
		void addPart(string Part) {PartsUsed.append(Part);} //using namespace std; #include <string>, #include <iostream>
		void addTechnician(string t){tech = t;}
		void setRepairStatus(string S) {RepairStatus = S;}
		string getRepairStatus(){return RepairStatus;}
		void addLaborTime(float Num) {LaborHours += Num;}
		float getLaborHours(){return LaborHours;}
		void setManagerApproval(string S) {ManagerApprovalDate = S;}
		string getManagerApproval(){return ManagerApprovalDate;}
		void setCustomer(string c){Customer = c;}
		string getTech(){return tech;}
        float getTotalPartCost(){return TotalPartCost;}

        string getDate(){ return DateEntered;}

        float getLaborCost() {return LaborCost;}

        float getPartCost() {return TotalPartCost;}

        string getPartsUsed() {return PartsUsed;}

        string getTechnician() {return tech;}

        string getCustomer() {return Customer;}
		
		void getEverything(){ 
			cout << "ID: " << ID;
			cout << "\nDate Entered: " << DateEntered;
			cout << "\nLaborCost: " << LaborCost << "\nLaborHours: " << LaborHours << "\nTotal Part Cost: " << TotalPartCost;
			cout << "\nParts used: " << PartsUsed << "\nTechnician assigned: " << tech << "\nRepair Status: " << RepairStatus << "\nManager Approval Date: " << ManagerApprovalDate <<
							"\nCustomer name: " << Customer;
		}

};

#endif


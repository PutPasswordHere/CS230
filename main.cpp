#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <sys/stat.h>

#include "Equipment.h"
#include "Technician.h"
#include "genTechnician.h"
#include "specTechnician.h"

using namespace std;

//===========================================================================================ManagerMenu + related functions=================================
void viewActiveRepairs(list<Equipment> equipmentList){
	
	int choice;
	list<Equipment> :: iterator it;
	
	do{	
		cout << "View by: \n"
			 << "1. Pending\n"
			 << "2. Waiting for parts\n"
			 << "3. Equipment with over 5 hours of labor\n"
			 << "4. Exit\n"
			 << "Choose: ";
		cin >> choice;
		system("CLS");
		if(choice == 1){
			cout << "All pending repairs:\n";
			
			for(it = equipmentList.begin(); it != equipmentList.end(); ++it){
				if(it->getRepairStatus() == "Pending")
					it->getEverything();
				cout << "\n";
			}
			system("PAUSE");
		}else if(choice == 2){
			cout << "All repairs waiting for parts: \n";
			
			for(it = equipmentList.begin(); it != equipmentList.end(); ++it){
				if(it->getRepairStatus() == "Waiting for parts")
					it->getEverything();
				cout << "\n";
			}
			system("PAUSE");
		}else if(choice == 3){
			cout << "All equipment with over 5 labor hours: \n";
			
			for(it = equipmentList.begin(); it != equipmentList.end(); ++it){
				if(it->getLaborHours() > 5.0)
					it->getEverything();
				cout << "\n";
			}
			system("PAUSE");
		}
	}while(choice != 4);

}

void issueInvoice(list<Equipment> equipmentList){
	list<Equipment> :: iterator it;
	for(it = equipmentList.begin(); it != equipmentList.end(); ++it){
		
	}
}

void managerSignoff(list<Equipment>& equipmentList){
	
	list<Equipment> :: iterator it;
	int invoiceVar;
	string tempDate;
	
	cout << "Showing all completed repairs yet to be invoiced: \n";
	for(it = equipmentList.begin(); it != equipmentList.end(); ++it){
		if(it->getRepairStatus() == "Complete")
			if(it->getManagerApproval() == ""){
				it->getEverything();
			}
	}
	cout << "\nChoose the ID of the piece of equipment to invoice: ";
	cin >> invoiceVar;
	cout << "Enter the date: ";
	cin >> tempDate;
	for(it = equipmentList.begin(); it != equipmentList.end(); ++it){
		if(invoiceVar == it->getID())
			it->setManagerApproval(tempDate);
	}
	
}

void addTechnician(list<Technician>& technicianList){
	int choice;
	
	cout << "Pick a Technician type: \n1 - Specialized\n2 - General\nMake a selection: ";
	cin >> choice;
	if(choice == 1){
		specTechnician tech;
		string tempName, tempSpec;
		int tempChoice, tempID;
		cout << "Choose the technician specialization: \n"
			 << "1. Mechanical\n"
			 << "2. Electronic\n"
			 << "Select: ";
		cin >> tempChoice;
		cout << "Enter the technicians name: ";
		cin >> tempName;
		cout << "Enter the technicians ID (Integer only): ";
		cin >> tempID;
		
		tech.setName(tempName);
		tech.setID(tempID);
		if(tempChoice == 1){
			tempSpec = "Mechanical";
		}else{
			tempSpec = "Electronic";
		}
		tech.setSpecialization(tempSpec);
		
		technicianList.push_back(tech);
	}else{
		genTechnician tech;
		string tempName, tempDept;
		int tempChoice, tempID;
		cout << "Choose the technicians department: \n"
			 << "1. Toys\n"
			 << "2. Electronics\n"
			 << "Select: ";
		cin >> tempChoice;
		cout << "Enter the technicians name: ";
		cin >> tempName;
		cout << "Enter the technicians ID (Integer only): ";
		cin >> tempID;
		tech.setName(tempName);
		tech.setID(tempID);
		if(tempChoice == 1){
			tempDept = "Toys";
		}else{
			tempDept = "Electronics";
		}
		tech.setDepartment(tempDept);
		
		technicianList.push_back(tech);
	}
}

void managerMenu(list<Equipment>& equipmentList, list<Technician>& technicianList){
	
	int choice;
	
	do{
		system("CLS");
		cout <<"\tManager Menu\n"
			 <<"\t=========\n"
			 <<"\t1. View active repair orders\n"
			 <<"\t2. Issue Invoice\n"
			 <<"\t3. Sign off on repair order\n"
			 <<"\t4. Add Technicians\n"
			 <<"\t5. EXIT\n"
			 <<"\tEnter your choice: ";
		cin >> choice;
		
		switch(choice){
			case 1: viewActiveRepairs(equipmentList);
				break;
			case 2: issueInvoice(equipmentList);
				break;
			case 3: managerSignoff(equipmentList);
				break;
			case 4: addTechnician(technicianList);
				break;
			case 5:
				break;
			default:
				cout << "You have entered an invalid selection." << endl;
		}
	}while(choice != 5);
}

//===========================================================================================TechnicianMenu + related functions=================================

void addEquipment(list<Equipment>& equipmentList, list<Technician> technicianList, int techID){
	
	string tDate, tCustomer, tTech, tRepair, tParts;
	int tempChoice, tID;
	float tLaborCost, tPartsCost, tLaborHours;
	Equipment tempEquipment;
	
	cout << "Please enter the ID of the equipment: ";
	cin >> tID;
	cout << "Please enter the current date: ";
	cin >> tDate;
	cout << "Please enter the customers name: ";
	cin >> tCustomer;
	cout << "Choose the current repair status: \n"
		 << "1. Pending\n"
		 << "2. Waiting for parts\n"
		 << "3. Complete\n";
	cin >> tempChoice;
	if(tempChoice == 1){
		tRepair = "Pending";
	}else if(tempChoice == 2){
		tRepair = "Waiting for parts";
	}else{
		tRepair = "Complete";
	}
	cout << "Please enter the parts used: ";
	cin >> tParts;
	cout << "Please enter part cost: ";
	cin >> tPartsCost;
	cout << "Please enter labor hours: ";
	cin >> tLaborHours;
	
	list<Technician> :: iterator it;
	for(it = technicianList.begin(); it != technicianList.end(); it++){
		if(techID == it->getID()){
			tLaborCost = it->returnCost(tLaborHours);
			tTech = it->getID();
		}
	}
	
	//populate equipment instance
	tempEquipment.addPart(tParts);
	tempEquipment.addPartCost(tPartsCost);
	tempEquipment.addLaborTime(tLaborHours);
	tempEquipment.setCustomer(tCustomer);
	tempEquipment.setDate(tDate);
	tempEquipment.setLaborCost(tLaborCost);
	tempEquipment.setRepairStatus(tRepair);
	tempEquipment.setID(tID);
	tempEquipment.addTechnician(tTech);
	
	//send to linked list
	equipmentList.push_back(tempEquipment);
	
}

void editEquipment(list<Equipment>& equipmentList, list<Technician> technicianList, int techID){
	
	int tempID, option;
	int flag = 0;
	//switch statement variables
	string part, repairVar2;
	float laborTime;
	int repairVar;
	//end
	
	list<Equipment> :: iterator it;
	
	do{
		cout << "Choose from the following selection of equipment: " << endl;
	
		
		for(it = equipmentList.begin(); it != equipmentList.end(); it++){
			cout << "ID: " << it->getID() << endl;
		}
		cout << "Choose: ";
		cin >> tempID;

		for(it = equipmentList.begin(); it != equipmentList.end(); it++){
			if (tempID == it->getID())
				flag = 1;
		}
		system("CLS");
	}while(flag != 1);
	
	
	do{
		cout << "Choose an option: " 
			 << "1. Add a part to this piece of equipment\n"
			 << "2. Add labor time\n"
			 << "3. Change repair status\n"
			 << "4. Exit\n"
			 << "Choose: ";
		cin >> option;
		
		switch(option){
			case 1:
				cout << "Enter the part: ";
				cin >> part;
				for(it = equipmentList.begin(); it != equipmentList.end(); it++){
					if(tempID == it->getID()){
						it->addPart(part);
					}
				}
				break;
			case 2:
				cout << "Enter the additional labor hours: ";
				cin >> laborTime;
				for(it = equipmentList.begin(); it != equipmentList.end(); it++){
					if(tempID == it->getID()){
						it->addLaborTime(laborTime);
					}
				}
				break;
			case 3:
				cout << "Choose: \n"
					 << "1. Pending\n"
		 			 << "2. Waiting for parts\n"
		 			 << "3. Complete\n";
		 		cin >> repairVar;
		 		if(repairVar == 1){
					repairVar2 = "Pending";
				}else if(repairVar == 2){
					repairVar2 = "Waiting for parts";
				}else{
					repairVar2 = "Complete";
				}
		 		for(it = equipmentList.begin(); it != equipmentList.end(); it++){
					if(tempID == it->getID()){
						it->setRepairStatus(repairVar2);
					}
				}
				break;
			default:
				cout << "Goodbye\n";
		}
		
	}while(option != 4);
	
}

void showTechnicians(list<Technician>& technicianList){
	list<Technician> :: iterator it;
	for(it = technicianList.begin(); it != technicianList.end(); ++it){
		cout << "ID: " << it->getID() << endl;
		cout << "NAME: " << it->getName() << "\n" << endl;
	}
}

void technicianMenu(list<Equipment>& equipmentList, list<Technician> technicianList){
	
	//technician login
	int choice, techID;
	int loginVar = 0;
	do{
		cout << "Please enter your Technician ID, type 0 to quit: ";
		cin >> techID;
		if(techID == 0)
			break;
		//check if ID exists
		list<Technician> :: iterator it;
		for(it = technicianList.begin(); it != technicianList.end(); it++){
			if(techID == it->getID()){
				loginVar = 1;
			}else{
				cout << "Login not found.\n";
			}
		}
		system("CLS");
	}while(loginVar != 1);
	
	
	do{
		if(techID == 0)
			break;
		system("CLS");
		cout << "\tTechnician Menu: \n";
		cout << "\t=========\n";
		cout << "\t1. Add New Equipment\n";
		cout << "\t2. Edit a specific Equipment\n";
		cout << "\t3. EXIT\n";
		cin >> choice;
		switch(choice){
			case 1: addEquipment(equipmentList, technicianList, techID);
				break;
			case 2: editEquipment(equipmentList, technicianList, techID);
				break;
			case 3:
				break;
			default:
				cout << "You have entered an invalid selection." << endl;
		}
	}while(choice != 3);
}

bool fileExists(const std::string& name) {
  struct stat buffer;
  return (stat (name.c_str(), &buffer) == 0);
}

int mainMenu() {
	int choice;
	cout << "\tMain Menu: \n"
		 << "\t=========\n"
		 << "\t1. Manager log-in\n"
		 << "\t2. Technician log-in\n"
		 << "\t3. EXIT\n"
		 << "\tEnter choice: ";
	cin >> choice;
	if (choice == 3) //exit condition
		choice = -1; //generic exit
			
	return choice;
}

void fileEquipment(list<Equipment>& equipmentList) {
    list<Equipment> :: iterator it;
    std::ofstream fin;
    fin.open("equipList.txt");
    for(it = equipmentList.begin(); it != equipmentList.end(); it++){
            fin << it->getID() << "\n" << it->getDate() << "\n" << 
			it->getLaborCost() << "\n" << it->getLaborHours() << "\n" << 
			it->getTotalPartCost() << "\n"<< it->getPartsUsed()<< "\n"<< 
			it->getTech()<< "\n" << it->getRepairStatus() << "\n" << 
			it->getManagerApproval() <<"\n" << it->getCustomer()<< "\n"<<endl;
        }
}

void loadEFile(list<string>& temp) {
	string line;
	ifstream file;
	file.open("equipList.txt");
	
	while(getline(file, line)) {
		temp.push_back(line);
	}
}

void loadTFile(list<string>& temp) {
	string line;
	ifstream file;
	file.open("techList.txt");
	
	while(getline(file, line)) {
		temp.push_back(line);
	}
}

void fileTechnician(list<Technician>& technicianList)
{
    list<Technician> :: iterator t;
    std::ofstream fin;
    fin.open("techList.txt");
    for(t = technicianList.begin(); t != technicianList.end(); t++)
    {
        fin << t->getID() << "\n" << t->getName() << "\n" << t->getPayRate() << endl;
    }
    fin.close();
}

//=========================================================================================== Main ================================

int main(int argc, char** argv) {
	int option = 0;

	list<Equipment> equipmentList;
	list<Technician> technicianList;
	
	if(fileExists("techList.txt") & fileExists("equipList.txt")) {
		list<string> tempE;
		list<string> tempT;
		loadTFile(tempT);
		loadEFile(tempE);
		
		string tDate, tCustomer, tTech, tRepair, tParts;
		int tempChoice, tID;
		float tLaborCost, tPartsCost, tLaborHours;
		
		cout << "The equipment and technician list files exist.\n"
			 << "There is code here to repopulate the lists, but\n"
			 << "there is an error with the formatting that causes the casting to mess up." << endl;
		
		system("pause");
		Equipment tempEquipment;
		/*
		for(int i = 0; i < tempT.size(); ++i) {
			
		}
		int size = tempE.size();
		for(int i = 0; i < size; ++i) {
			tID = stoi(tempE.front());
			tempEquipment.setID(tID);
			tempE.pop_front();
			tempEquipment.setDate(tempE.front());
			tempE.pop_front();
			tLaborCost = stof(tempE.front());
			tempEquipment.setLaborCost(tLaborCost);
			tempE.pop_front();
			tLaborHours = stof(tempE.front());
			tempEquipment.addLaborTime(tLaborHours);
			tempE.pop_front();
			tPartsCost = stof(tempE.front());
			tempEquipment.addPartCost(tPartsCost);
			tempE.pop_front();
			tempEquipment.addPart(tempE.front());
			tempE.pop_front();
			tempEquipment.setCustomer(tempE.front());
			tempE.pop_front();
			tempEquipment.setRepairStatus(tempE.front());
			tempE.pop_front();
			
			equipmentList.push_back(tempEquipment);
		}*/		
	}
	
	do {
		system("CLS");
		option = mainMenu();
		switch(option) {
			//brings up the manager menu
			case 1: {
				managerMenu(equipmentList, technicianList);
				break;
			}
			//brings up the technician menu
			case 2: 
				technicianMenu(equipmentList, technicianList);
				break;
			//exits program
			case -1: cout << "Exiting...\n";
				break;
			default: cout << "Invalid option, choose again\n";	
		}
		system("PAUSE");
	}while (option != -1);
	
	fileEquipment(equipmentList);
	fileTechnician(technicianList);
	
	system("pause");
	return 0;
}


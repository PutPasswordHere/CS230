#include <cstdlib>
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include "Equipment.h"
#include "Technician.h"
#include "genTechnician.h"
#include "specTechnician.h"

using namespace std;

//===========================================================================================ManagerMenu + related functions=================================
void viewActiveRepairs(list<Equipment> equipmentList){
	list<Equipment> :: iterator it;
	for(it = equipmentList.begin(); it != equipmentList.end(); ++it){
		
	}
}

void issueinvoice(list<Equipment> equipmentList){
	list<Equipment> :: iterator it;
	for(it = equipmentList.begin(); it != equipmentList.end(); ++it){
		
	}
}

void managerSignoff(list<Equipment> equipmentList){
	list<Equipment> :: iterator it;
	for(it = equipmentList.begin(); it != equipmentList.end(); ++it){
		
	}
}

void addTechnicians(list<Technician> technicianList){
	int choice;
	
	cout << "Pick a Technician type: \n1 - Specialized\n2 - General\nMake a selection: ";
	cin >> choice;
	if(choice == 1){
		specTechnician tech;
		string tempName, tempID, tempSpec;
		cout << "Enter the technician specialization: ";
		cin >> tempSpec;
		cout << "Enter the technicians name: ";
		cin >> tempName;
		cout << "Enter the technicians ID: ";
		cin >> tempID;
		
		technicianList.push_back(tech);
	}else{
		genTechnician tech;
		string tempName, tempID, tempDept;
		cout << "Enter the technicians department";
		cin >> tempDept;
		cout << "Enter the technicians name: ";
		cin >> tempName;
		cout << "Enter the technicians ID: ";
		cin >> tempID;
		
		technicianList.push_back(tech);
	}
}

void managerMenu(list<Equipment> equipmentList, list<Technician> technicianList){
	int choice;
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
	
	do{
		switch(choice){
			case 1: viewActiveRepairs(equipmentList);
				break;
			case 2: 
				break;
			case 3:
				break;
			case 4:addTechnicians(technicianList);
				break;
			case 5:
				break;
			default:
				cout << "You have entered an invalid selection." << endl;
		}
	}while(choice != 4);
}

//===========================================================================================TechnicianMenu + related functions=================================

void addEquipment(list<Equipment> equipmentList, list<Technician> technicianList){
	
	string tID, tDate;
	
	cout << "Please enter the ID of the equipment: ";
	cin >> tID;
	cout << "Please enter the current date: ";
	cin >> tDate;
}

void editEquipment(){
	
}

void showTechnicians(list<Technician> technicianList){
	list<Technician> :: iterator it;
	for(it = technicianList.begin(); it != technicianList.end(); ++it){
		cout << it -> getName() << endl;
	}
}

void technicianMenu(list<Equipment> equipmentList, list<Technician> technicianList){
	int choice;
	system("CLS");
	cout << "\tTechnician Menu: \n";
	cout << "\t=========\n";
	cout << "\t1. Add New Equipment\n";
	cout << "\t2. Edit a specific Equipment\n";
	cout << "\t3. EXIT\n";
	cin >> choice;
	
	do{
		switch(choice){
			case 1: //addEquipment();
				break;
			case 2:
				break;
			case 3:
				break;
			default:
				cout << "You have entered an invalid selection." << endl;
		}
	}while(choice != 3);
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

//===========================================================================================Main================================

int main(int argc, char** argv) {
	int option = 0;

	list<Equipment> equipmentList;
	list<Technician> technicianList;

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
				showTechnicians(technicianList);
				//technicianMenu();
				break;
			//exits program
			case -1: cout << "Exiting...\n";
				break;
			default: cout << "Invalid option, choose again\n";	
		}
		system("PAUSE");
	}while (option != -1);
	
	system("pause");
	return 0;
}


//edited by mattv
#include <cstdlib>
#include <iostream>
#include "Technician.h"
#include "equipment.h"
using namespace std;
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 

void AddEquipment()
{

	void setDate(string Date);
	void setLaborCost(float Cost);
	void addPartCost(float Cost);
	void addPart(string Part);
	void setRepairStatus(string S);
	void addLaborTime(float Num);
	void setManagerApproval(string S);
	
}


using namespace std;

void technicianMenu(){
	system("CLS");
	int toption = 0;
	int choice2;
	cout << "\tTechnician Menu: \n";
	cout << "\t=========\n";
	cout << "\t1. Add New Equipment\n";
	cout << "\t2. Edit a current Equipment\n";
	cout << "\t3. EXIT\n";
	cin >> choice2;
	if (choice2 == 3)
		choice2 = -1;
	
	switch(choice2) {
		case 1:{
		void AddEquipment();
			break;
		}
		case 2:{
			
			break;
		}
		case -1:{
			cout << "Exiting technician menu...\n";
			system("PAUSE");
			break;
		}
		default: cout << "Invalid option, choose again\n";
	}
}



int technicianLogin()
{

	string answer;
	string answer2;
	cout << "Enter a Technician id\n";
	cin >> answer;

/*	if (answer = answer2)
	{
		cout << "Welcome Back";
	}
	else {
	return 1;
	}*/
}


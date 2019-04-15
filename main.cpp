#include <cstdlib>
#include <iostream>
#include "managerMenu.h"
#include "technicianMenu.h"
using namespace std;

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

int main(int argc, char** argv) {
	int option = 0;

	do {
		system("CLS");
		option = mainMenu();
		switch(option) {
			//brings up the manager menu
			case 1: {
				managerMenu();
				break;
			}
			//brings up the technician menu
			case 2: 
				technicianMenu();
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


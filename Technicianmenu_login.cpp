#include <cstdlib>
#include <iostream>

using namespace std;



void technictianMenu()
{
	system("CLS");
	int toption = 0;
	int choice2;
	cout << "\t Welcome To the technician menu \n";
	cout << "\t ==============================\n";
	cout << "\t1. add a New Equipment\n";
	cout << "\t2. Edit A current Equipment\n";
	cout << "\t3. EXIT\n";
	cin >> choice2;
	switch(choice2) {
		case 1:{
			
			break;
		}
		case 2:{
			
			break;
		}
		if (choice2 == 3)
		{
			choice2 = -1;
		}
		case -1:{
			"Exiting...\n";
			break;
		}
		default: cout << "Invalid option, choose again\n";
	}
}



void technicianLogin()
{
	
}


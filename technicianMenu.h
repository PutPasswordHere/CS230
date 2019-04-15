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

void technicianLogin()
{
	
}

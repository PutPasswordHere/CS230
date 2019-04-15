//Dan Laukzemis Manager menu
#ifndef MANAGERMENU_H
#define MANAGERMENU_H
class managerMenu{
	public:
		managerMenu();
		void displayMenu();
		void viewrepairs();
		void issueinvoice();
		void signoff();
	private:

};

managerMenu::managerMenu(){
	int select;
	system("CLS");
	cout <<"\tManager Menu\n"
		 <<"\t=========\n"
		 <<"\t1. View active repair orders\n"
		 <<"\t2. Issue Invoice\n"
		 <<"\t3. Sign off on repair order\n"
		 <<"\t4. EXIT\n"
		 <<"\tEnter your choice: ";
	cin >> select;
	switch(select)
	{
		case 1:{
			break;
		}	
		
		case 2:{
			break;
		}
		
		case 3:{
			break;
		}
		
		case 4:{
			break;
		}
	}
}

#endif

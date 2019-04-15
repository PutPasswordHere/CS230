//Dan Laukzemis Manager menu
using namespace std;

#ifndef MANAGERMENU_H
#define MANAGERMENU_H
class managerMenu{
	public:
		managerMenu();
		void displayMenu();
	private:
		
};

managerMenu::managerMenu(){
	int choice;
	system("CLS");
	cout <<"\tManager Menu\n"
		 <<"\t=========\n"
		 <<"\t1. View active repair orders\n"
		 <<"\t2. Issue Invoice\n"
		 <<"\t3. Sign off on repair order\n"
		 <<"\t4. EXIT\n"
		 <<"\tEnter your choice: ";
	cin >> choice;
}

#endif

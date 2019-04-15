//Dan Laukzemis Manager menu

#ifndef MANAGER_MENU_H
#define MANAGER_MENU_H
class Manager_Menu{
	public:
		manager_menu();
		void displaymanagermenu();
	private:
		int choice;
		string menu;
};

Manager_Menu::Manager_Menu()
{
		int choice;
	system("CLS");
	cout <<"\tManager Main Menu\n"
		<<"\t=========\n"
		<<"\t1. View active repair orders\n"
		<<"\t2. Issue Invoice\n"
		<<"\t3. Sign off on repair order\n"
		<<"\t4. Exit\n"
		<<"\tEnter your choice: ";
	cin >>choice;
	return choice;
}


#endif

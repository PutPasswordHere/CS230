/*Project 1: Linked Lists
Author: Kayla Hutchins
Date: February 26, 2019
*/

#include "Account.h"
#include "AccountList.h"
#include "Checking.h"
#include "Client.h"
#include "Savings.h"

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int menu()
{
	int choice;
	system ("CLS");
	cout <<"\t\t Main Menu\n"
		 <<"\t\t\n"
		 <<"\t\t 1. Add a Client\n"
		 <<"\t\t 2. View all Clients\n"
		 <<"\t\t 3. View all Checking Accounts\n"
		 <<"\t\t 4. View all Savings Accounts\n"
		 <<"\t\t 5. Deposit or Withdraw\n"
		 <<"\t\t 6. Remove a Client\n"
		 <<"\t\t 7. Exit\n"<<endl;
	cout <<"Enter your choice: ";
	cin >>choice;
	
	return choice;
}

int main(int argc, char** argv) 
{
	int option, Type, searchID, AccountID, choice, i;
	Checking TempCheck;
	Saving Tempsave;
	AccountList AccList;
	Account TempAcc;
	
		do{
		option = menu();
		Type = 0;
		
		switch (option)
		{
			case 1:
				while (!(Type == 1 || Type == 2))
				{
					cout << "Would you like a: \n 1. Savings \n 2. Checking \n ";
					cin>> Type;
				}
				AccList.InsertAccount(Type);
				break;
			case 2:
				AccList.printList();
				system("PAUSE");
				break;
			case 3:
				AccList.printAccount(2);
				break;
			case 4:
				AccList.printAccount(1);
				break;
			case 5:
				cout<<"Enter an account ID: ";
				cin>>searchID;
				cout<<"Would you like to: \n 1. Deposit \n 2. Withdraw\n";
				cin>>choice;
				AccList.getAccount(searchID, choice);
				break;
			case 6:
				cout<< "Enter an account ID: \n";
				cin>>AccountID;
				AccList.DeleteAccount(AccountID);
				break;
			case 7:
				cout<<"Goodbye!\n";
				break;
			default:
				cout<<option<<" is an invalid choice\n";
		}
		system("PAUSE");
	}while(option != 7);
	
	return EXIT_SUCCESS;
}


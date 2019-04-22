#include <iostream>
#include <string>

#ifndef TECHNICIAN_H
#define TECHNICIAN_H

using namespace std;

class Technician{
	protected:
		string name, id;
		int payRate;
	public:
		Technician(){
			name = "";
			id = "";
			payRate = 50;
			}
		setName(string n){name = n;}
		string getName(){return name;}
		setID(string i){id = i;}
		getID(){cout << id << endl;}
		virtual void adjustPay(){};
};

#endif

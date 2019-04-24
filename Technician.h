#include <iostream>
#include <string>

#ifndef TECHNICIAN_H
#define TECHNICIAN_H

using namespace std;

class Technician{
	protected:
		string name;
		int payRate, id;
	public:
		Technician(){
			name = "";
			id = 0;
			payRate = 50;
			}
		setName(string n){name = n;}
		string getName(){return name;}
		setID(int i){id = i;}
		int getID(){return id;}
		float returnCost(float tLaborHours){return tLaborHours * payRate;}
		int getPayRate(){return payRate;}
		virtual void adjustPay(){};
};

#endif


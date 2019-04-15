#include "Technician.h"
#include <string>
#include <iostream>

using namespace std;

Technician::Technician(){
	name = "";
	id = "";
	payRate = 50;
}

Technician::setName(string n){
	name = n;
}

Technician::setID(string i){
	id = i;
}

string Technician::getName(){
	return name;
}

string Technician::getID(){
	return id;
}


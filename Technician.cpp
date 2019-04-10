#include "Technician.h"
#include <string>
#include <iostream>

using namespace std;

Technician::Technician(){
	name = "";
	id = "";
	basePay = 50;
}

void Technician::setName(string n){
	name = n;
}

void Technician::setID(string i){
	id = i;
}

string Technician::getName(){
	return name;
}

int Technician::getID(){
	return id;
}


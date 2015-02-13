/*
 * File:   contacts.cpp
 * Author: brandan
 *
 * Created on February 3, 2015, 11:59 AM
 */
#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

Contact::Contact() {

	name = "i";
}
Contact::Contact(Contact& nCon){
	this->name = nCon.name;
	this->pref = nCon.pref;
}

Contact::Contact(char * aName, Type flag) {
	this->setName(aName);
	this->setPref(flag);

}
Contact::~Contact() {
	if (this->name) {
		delete[] this->name;
	}
}

void Contact::setName(char * aName){
	if (this->name) {
		delete[] this->name;
	}
	if (aName) {
		this->name = new char[strlen(aName) + 1];
		strcpy(this->name, aName);
	}
}

char * Contact::getName() const {
	return name;
}

void Contact::print(){
	const char * Accounts[] = { "Text", "Email", "FaceBook" };
	cout << "Account Type: " << Accounts[pref] << endl;
	cout << "name: " << name << endl;
}

Contact::Type Contact::getPref(){
	return pref;
}

void Contact::setPref(Type flag){
	pref = flag;
}


void Contact::operator=(Contact& nCon){
	this->name = nCon.name;
	this->pref = nCon.pref;
}

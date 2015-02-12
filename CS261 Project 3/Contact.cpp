/*
 * File:   contacts.cpp
 * Author: brandan
 * 
 * Created on February 3, 2015, 11:59 AM
 */

#include "Contact.h"

Contact::Contact(): index(0), pref(0){

	name = "i";
}
Contact::Contact(Contact& nCon){
	this->name = nCon.name;
	this->index = nCon.index; //sets contact index for new contact record
	this->pref = nCon.pref;
}

Contact::Contact(string aName, int index, int flag){

	this->name = aName;
	this->index = index;
	this->pref = flag;

}
Contact::~Contact() {
}

void Contact::setName(const string aName){
	name = aName;
}

string Contact::getName(){
		return name;
}

void Contact::print(){
	cout << "record index: " << index << " name: " <<  name;
}

int Contact::getPref(){
	return pref;
}

void Contact::setPref(int flag){

	pref = flag;
}


void Contact::operator=(Contact& nCon){
	this->name = nCon.name;
	this->index = nCon.index; //sets contact index for new contact record
        this->pref = nCon.pref;
}

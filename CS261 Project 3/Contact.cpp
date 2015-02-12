/*
 * File:   contacts.cpp
 * Author: brandan
 * 
 * Created on February 3, 2015, 11:59 AM
 */

#include "Contact.h"

Contact::Contact() {

	name = "i";
}
Contact::Contact(Contact& nCon){
	this->name = nCon.name;
	this->pref = nCon.pref;
}

Contact::Contact(string & aName, int & index, Type & flag){
	this->name = aName;
	this->pref = flag;

}
Contact::~Contact() {

}

void Contact::setName(const string & aName){
	name = aName;
}

string Contact::getName(){
		return name;
}

void Contact::print(){
	cout << " name: " <<  name;
}

Contact::Type Contact::getPref(){
	return pref;
}

void Contact::setPref(const Type & flag){

	pref = flag;
}


void Contact::operator=(Contact& nCon){
	this->name = nCon.name;
        this->pref = nCon.pref;
}

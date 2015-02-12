//
//  EmailContact.cpp
//  
//
//  Created by Kaleb Striplin on 2/5/15.
//
//

#include "EmailContact.h"
/*
EmailContact::EmailContact():Contact("i", 0, 0) {
	eAdress = "i";
}*/
EmailContact::EmailContact(string &  aName, int & index, Type & pref, string &  emAdress) : Contact(aName, index, pref){
	this->eAdress = emAdress;
}

EmailContact::EmailContact(EmailContact & currEmContact):Contact(currEmContact)
{
	
	this->eAdress = currEmContact.eAdress; 
}

EmailContact::~EmailContact(){
}
void EmailContact:: setEmAdress(const string nAdress){
	this->eAdress = nAdress;
}

string EmailContact::getEmAdress(){
	return eAdress;
}
/*
int getIndex(){
	int index = Contact::getIndex();
	return index;
}

void setIndex(int & index){
	Contact::setIndex(index);
}*/
void EmailContact::print(){
	Contact::print();
	cout << "email adress" << eAdress << endl;
}











































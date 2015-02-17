//
//  EmailContact.cpp
//  
//
//  Created by Kaleb Striplin on 2/5/15.
//
//
#define _CRT_SECURE_NO_WARNINGS
#include "EmailContact.h"

EmailContact::EmailContact(char * aName, char * emAdress) : Contact(aName, Contact::Email) {
	eAdress = NULL;
	this->setEmAdress(emAdress);
}

EmailContact::EmailContact(const EmailContact & currEmContact) : Contact(currEmContact) {
	eAdress = NULL;
	this->setEmAdress(currEmContact.eAdress);
}

EmailContact::~EmailContact() {
	if (this->eAdress) {
		delete[] this->eAdress;
	}
}

void EmailContact::setEmAdress(char * nAdress) {
	if (this->eAdress) {
		delete[] this->eAdress;
	}
	if (nAdress) {
		this->eAdress = new char[strlen(nAdress) + 1];
		strcpy(this->eAdress, nAdress);
	}
	else {
		this->eAdress = NULL;
	}
}

char * EmailContact::getEmAdress() const {
	return eAdress;
}

void EmailContact::print() {
	cout << "Email address: " << eAdress << endl;
	Contact::print();
}

const EmailContact& EmailContact::operator = (const EmailContact& obj) {
	this->setEmAdress(obj.getEmAdress());
	this->setName(obj.getName());
	this->setPref(obj.getPref());
	return *this;
}
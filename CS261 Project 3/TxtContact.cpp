//
//  TxtContact.cpp
//  
//
//  Author:David P
//
//
#define _CRT_SECURE_NO_WARNINGS
#include "TxtContact.h"

/*TxtContact::TxtContact():Contact("i", 0, 0), phone(0){

}*/
TxtContact::TxtContact(char * aName, char * ph) : Contact(aName, Contact::Text) {
	this->phone = NULL;
	this->setPhNumber(ph);
}

TxtContact::TxtContact(const TxtContact & tContact) : Contact(tContact) {
	this->phone = NULL;
	*this = tContact;
}

TxtContact::~TxtContact() {
	if (this->phone) {
		delete[] this->phone;
	}
}

char * TxtContact::getPhNumber()const {
	return phone;
}

void TxtContact::setPhNumber(char * ph) {
	if (this->phone) {
		delete[] this->phone;
	}
	if (ph) {
		this->phone = new char[strlen(ph) + 1];
		strcpy(this->phone, ph);
	}
}

void TxtContact::print() {
	cout << "phone: " << phone << endl;
	Contact::print();
}

const TxtContact& TxtContact::operator=(const TxtContact& obj) {
	this->setName(obj.getName());
	this->setPhNumber(obj.getPhNumber());
	this->setPref(obj.getPref());
	return *this;
}
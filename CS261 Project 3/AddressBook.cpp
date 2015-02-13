/*
 * File:   addressbook.cpp
 * Author: brandan
 *
 * Created on February 3, 2015, 11:56 AM
 */

#include "AddressBook.h"

AddressBook::AddressBook() {
	// TODO
}

AddressBook::AddressBook(const AddressBook& orig) {
	// TODO
}

AddressBook::~AddressBook() {

}

void AddressBook::displayContacts(){
	myContacts.display();
}

void AddressBook::addContact(char * _name, char * _address, Type  thing) {
	if (thing == AddressBook::TextCont) {
		TxtContact * newContact = new TxtContact(_name, _address);
		myContacts.insert(newContact);
	}
	else if (thing == AddressBook::EmailCont) {
		EmailContact * newContact = new EmailContact(_name, _address);
		myContacts.insert(newContact);
	}
	else if (thing == AddressBook::FacebookCont) {
		FBContact * newContact = new FBContact(_name, _address);
		myContacts.insert(newContact);
	}
	else {
		cout << "Invalid Command";
	}
}
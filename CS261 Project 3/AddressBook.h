/*
 * File:   addressbook.h
 * Author: brandan
 *
 * Created on February 3, 2015, 11:56 AM
 */

#ifndef ADDRESSBOOK_H
#define	ADDRESSBOOK_H

#include "Linklist.h"
#include "TxtContact.h"
#include "EmailContact.h"
#include "FBContact.h"

using namespace std;

class AddressBook {
public:
	enum Type {
		TextCont,
		EmailCont,
		FacebookCont
	};
	AddressBook();
	AddressBook(const AddressBook& orig);
	~AddressBook();
	void displayContacts();
	void addContact(char * _name, char * _address, Type  thing);
private:
	Linklist <Contact> myContacts;
};

#endif	/* ADDRESSBOOK_H */


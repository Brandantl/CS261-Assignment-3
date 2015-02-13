/*
 * File:   addressbook.h
 * Author: brandan
 *
 * Created on February 3, 2015, 11:56 AM
 */

#ifndef ADDRESSBOOK_H
#define	ADDRESSBOOK_H
#include <vector>
#include "TxtContact.h"
#include "EmailContact.h"
#include "FBContact.h"
#include "Contact.h"
using namespace std;

class AddressBook {
public:
	AddressBook();
	AddressBook(const AddressBook& orig);
	~AddressBook();
	void displayContacts();
	void addContact(char * var);
private:
	vector <Contact*> myContacts;
};

#endif	/* ADDRESSBOOK_H */


/* 
 * File:   addressbook.h
 * Author: brandan
 *
 * Created on February 3, 2015, 11:56 AM
 */

#ifndef ADDRESSBOOK_H
#define	ADDRESSBOOK_H
#include <vector>
#include <string>
#include "Contact.h"
using namespace std;

class AddressBook {
public:
    AddressBook();
    AddressBook(const AddressBook& orig);
    ~AddressBook();
    int displayContacts();
    int addContact(string var);
    int removeContact(int index);
private:
    vector <Contact*> myContacts;
};

#endif	/* ADDRESSBOOK_H */


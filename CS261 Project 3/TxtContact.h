//
//  TxtContact.h
//  
//
//  Author: David P
//
//

#ifndef ____TxtContact__
#define ____TxtContact__
#include "Contact.h"
#include <stdio.h>


class TxtContact: public Contact{

public:
	TxtContact();//default constructor
	TxtContact(string &, int &, int &, Type &);
	TxtContact(TxtContact & tContact);//copy constructor
	~TxtContact();
	int getPhNumber()const;
	void print();
//	TxtContact& operator=(TxtContact & tContact);
	void setPhNumber(const int);
private:
	int phone;


};
#endif /* defined(____TxtContact__) */

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
	TxtContact(char *, char *);
	TxtContact(const TxtContact & tContact);//copy constructor
	~TxtContact();
	char * getPhNumber()const;
	void print();
//	TxtContact& operator=(TxtContact & tContact);
	void setPhNumber(char *);
private:
	char * phone;


};
#endif /* defined(____TxtContact__) */

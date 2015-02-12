//
//  FBContact.h
//  
//
// Author: David P
//
//

#ifndef ____FBContact__
#define ____FBContact__

#include <stdio.h>
#include "Contact.h"
//#include "FBContact.h"
class FBContact: public Contact{
public:
	FBContact(string &, int &, Type &, string &);
	FBContact(FBContact &);
	~FBContact();
	string getFbName();
	void setFbName(string);
	void print();
//	virtual void operator=(FBContact &);
private:
	string login;
};
#endif /* defined(____FBContact__) */

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
class FBContact: public Contact{
public:
	FBContact(char *, char *);
	FBContact(FBContact &);
	~FBContact();
	char * getFbName() const;
	void setFbName(char *);
	void print();
	virtual const FBContact& operator=(const FBContact& obj);
private:
	char * login;
};
#endif /* defined(____FBContact__) */

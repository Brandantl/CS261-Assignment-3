#ifndef _EmailContact_h_
#define _EmailContact_h_

#include "Contact.h"

class EmailContact:public Contact{
public:
	EmailContact(char *, char*);
	EmailContact(const EmailContact&);
	~EmailContact();
	void setEmAdress(char *);
	char * getEmAdress() const;
	void print();
	// Todo add = and ==
private:
	char * eAdress;
};
#endif

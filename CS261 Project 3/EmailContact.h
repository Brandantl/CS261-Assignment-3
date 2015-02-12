#ifndef _EmailContact_h_
#define _EmailContact_h_

#include "Contact.h"

class EmailContact:public Contact{
public:
	EmailContact(string &, int &, Type &, string&);
	EmailContact(EmailContact&);
	~EmailContact();
	void setEmAdress(const string);
	string getEmAdress();
	void print();

private:
	string eAdress;
};
#endif

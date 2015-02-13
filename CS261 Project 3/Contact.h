/*
 * File:   contacts.h
 * Author:David P
 *
 * Created on February 3, 2015, 11:59 AM
 */
#ifndef CONTACTS_H
#define	CONTACTS_H

#include<iostream>
#include<string>



using namespace std;
class Contact {
public:
	enum Type {
		Text,
		Email,
		Facebook
	};

	Contact();//default constructor
	Contact(char *, Type);
	Contact(const Contact&);//copy constructor
	virtual ~Contact();
	virtual void setName( char *);
	virtual char * getName() const;
	virtual void  print();
	virtual Type getPref();
	virtual void setPref(Type);
	virtual void operator=(Contact&);
	// Todo and ==
private:
	char * name;
	Type pref;// preference 1 is txt, preference 2 is email, preference 3 is facebook
};

#endif	/* CONTACTS_H */


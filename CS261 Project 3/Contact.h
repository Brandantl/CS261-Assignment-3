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
	Contact(string &, int &, Type &);
	Contact(Contact&);//copy constructor
	virtual ~Contact();
	virtual void setName(const string &);
	virtual string getName();
	virtual void  print();
	virtual Type getPref();
	virtual void setPref(const Type &);
	virtual void operator=(Contact&);
private:
	string name;
	Type pref;// preference 1 is txt, preference 2 is email, preference 3 is facebook
};

#endif	/* CONTACTS_H */


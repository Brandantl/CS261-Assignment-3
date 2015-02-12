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
    Contact();//default constructor
    Contact(string &, int &, int &);
    Contact(Contact&);//copy constructor
    virtual ~Contact();
    virtual void setName(const string &);
    virtual string getName();
    //virtual int getIndex();
    //virtual void setIndex(const int &);
    virtual void  print();
    virtual int getPref();
    virtual void setPref(const int &);
    virtual void operator=(Contact&);
private:
	int index;
	string name;
	int pref;// preference 1 is txt, preference 2 is email, preference 3 is facebook
};

#endif	/* CONTACTS_H */


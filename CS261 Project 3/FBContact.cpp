//
//  FBContact.cpp
//  
//
//  Created by Kaleb Striplin on 2/5/15.
//
//

#include "FBContact.h"

/*
FBContact::FBContact():Contact("i", 0, 0){
	
	login = "i";
}*/
FBContact::FBContact(string & name, int & index, int & pref, string & log) : Contact(name, index, pref){
	this->login = log;
}
FBContact::FBContact(FBContact & nFbContact) : Contact(nFbContact){
	
	this->login = nFbContact.login;
}
FBContact::~FBContact(){
}
string FBContact::getFbName(){
	return login;
}
void FBContact::setFbName(string nLog){
	this->login = nLog;
}
void FBContact::print(){
	Contact::print();
	cout << "login: " << login << endl;
}

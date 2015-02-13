//
//  FBContact.cpp
//  
//
//  Created by Kaleb Striplin on 2/5/15.
//
//
#define _CRT_SECURE_NO_WARNINGS
#include "FBContact.h"

/*
FBContact::FBContact():Contact("i", 0, 0){
	
	login = "i";
}*/
FBContact::FBContact(char * name, char * log) : Contact(name, Contact::Facebook){
	login = NULL;	
    this->setFbName(log);
}

FBContact::FBContact(FBContact & nFbContact) : Contact(nFbContact){
	login = NULL;
	this->login = nFbContact.login;
}

FBContact::~FBContact(){
	if (this->login) {
		delete[] this->login;
	}
}

char * FBContact::getFbName() const {
	return login;
}

void FBContact::setFbName(char * nLog){
	if (this->login) {
		delete[] this->login;
	}
	if (nLog) {
		this->login = new char[strlen(nLog) + 1];
		strcpy(this->login, nLog);
	}
	else {
		this->login = NULL;
	}
}

void FBContact::print(){
	Contact::print();
	cout << "login: " << login << endl;
}

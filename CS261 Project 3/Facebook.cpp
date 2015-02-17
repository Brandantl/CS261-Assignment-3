/* h

 * File:   facebook.cpp
 * Author: brandan
 *
 * Created on February 3, 2015, 11:57 AM
 */
#define _CRT_SECURE_NO_WARNINGS
#include "Facebook.h"

Facebook::Facebook(char * _to, char * _from, char * _message) : Message(_to, _from, _message) {
userName = NULL;	
    this->setUsername(_from);
}

Facebook::Facebook(const Facebook& obj, char * _to, char * _from, char * _message) : Message(_to, _from, _message)  {
userName = NULL;		
*this = obj;
}

Facebook::~Facebook() {
	if (this->userName) {
		delete[] this->userName;
	}
}

void Facebook::print() {
	Message::print();
}


void Facebook::compose(char * aMessage) {
	Message::compose(aMessage);
}

char* Facebook::getUsername() const {
	return userName;
}

void Facebook::setUsername(char * name) {
	if (this->userName) {
		delete[] this->userName;
	}
	if (name) {
		this->userName = new char[strlen(name) + 1];
		strcpy(userName, name);
	}
	else {
		this->userName = NULL;
	}
}

Facebook Facebook::operator=(const Facebook & f) {
	Message::operator=(f);
	this->setUsername(f.userName);
	return *this;
}

bool Facebook::operator==(const Facebook& obj) const {
	return Message::operator==(obj);
}
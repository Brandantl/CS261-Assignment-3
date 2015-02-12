/* h

 * File:   facebook.cpp
 * Author: brandan
 * 
 * Created on February 3, 2015, 11:57 AM
 */
#define _CRT_SECURE_NO_WARNINGS
#include "Facebook.h"

Facebook::Facebook() {
	userName = NULL;
}

Facebook::~Facebook() {
    
}

void Facebook::print() {
    cout << "Username: " << userName << endl;
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
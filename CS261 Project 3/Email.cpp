/*
 * File:   email.cpp
 * Author: brandan
 *
 * Created on February 3, 2015, 11:57 AM
 */
#define _CRT_SECURE_NO_WARNINGS

#include "Email.h"
Email::Email() {
	emailAddress = NULL;
	emailSubject = NULL;
}


Email::~Email() {
}

void Email::print() {
	cout << "Email address: " << emailAddress << endl;
	cout << "Subject: " << emailSubject << endl;
	Message::print();
}

char* Email::getEmailAddress() const {
	return this->emailAddress;
}

char* Email::getEmailSubject() const {
	return this->emailSubject;
}

void Email::setEmailAddress(char* address) {
	if (this->emailAddress) {
		delete[] this->emailAddress;
	}
	if (address) {
		this->emailAddress = new char[strlen(address) + 1];
		strcpy(this->emailAddress, address);
	}
	else {
		this->emailAddress = NULL;
	}
}

void Email::setEmailSubject(char* subject) {
	if (this->emailSubject) {
		delete[] this->emailAddress;
	}
	if (emailSubject) {
		this->emailSubject = new char[strlen(subject) + 1];
		strcpy(this->emailSubject, subject);
	}
	else {
		this->emailSubject = NULL;
	}
}

void Email::compose(char * aMessage) {
	Message::compose(aMessage);
}

const Email& Email::operator=(const Email& e) {
	if (!(*this == e)) {
		Message::operator=(e);
		this->emailAddress = e.emailAddress;
		this->emailSubject = e.emailSubject;
	}
	return *this;
}

bool Email::operator==(const Email& obj) const {
	return true;
}
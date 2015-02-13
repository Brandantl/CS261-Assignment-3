/*
 * File:   email.cpp
 * Author: brandan
 *
 * Created on February 3, 2015, 11:57 AM
 */
#define _CRT_SECURE_NO_WARNINGS

#include "Email.h"
Email::Email(char * _subject, char * _to, char * _from, char * _message) : Message(_to, _from, _message) {
	this->setEmailAddress(_to);
	this->setEmailSubject(_subject);
}


Email::~Email() {
	if (this->emailAddress) {
		delete[] this->emailAddress;
	}
	if (this->emailSubject) {
		delete[] this->emailSubject;
	}
}

void Email::print() {
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
	if (subject) {
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
/*
 * File:   text.cpp
 * Author: brandan
 *
 * Created on February 3, 2015, 11:57 AM
 */
#define _CRT_SECURE_NO_WARNINGS
#include "Text.h"

Text::Text(char * numTo, char * numFrom, char * msg) : Message(numTo, numFrom, msg) {
	phoneNumberTo = NULL;
	phoneNumberFrom = NULL;
	this->setPhoneNumberTo(numTo);
	this->setPhoneNumberFrom(numFrom);
}

Text::Text(const Text& orig) : Message(NULL, NULL, NULL) {
	*this = orig;
}

Text::~Text() {
	if (this->phoneNumberTo) {
		delete[] this->phoneNumberTo;
	}
	if (this->phoneNumberFrom) {
		delete[] this->phoneNumberFrom;
	}
}

void Text::print() {
	Message::print();
}

void Text::compose(char * aMessage) {
	Message::compose(aMessage);
}

void Text::setPhoneNumberFrom(char * number) {
	if (this->phoneNumberFrom) {
		delete[] this->phoneNumberFrom;
	}
	if (number) {
		this->phoneNumberFrom = new char[strlen(number) + 1];
		strcpy(this->phoneNumberFrom, number);
	}
	else {
		this->phoneNumberFrom = NULL;
	}
}

void Text::setPhoneNumberTo(char * number) {
	if (this->phoneNumberTo) {
		delete[] this->phoneNumberTo;
	}
	if (number) {
		this->phoneNumberTo = new char[strlen(number) + 1];
		strcpy(this->phoneNumberTo, number);
	}
	else {
		this->phoneNumberTo = NULL;
	}
}

char * Text::getPhoneNumberFrom() const {
	return phoneNumberFrom;
}

char * Text::getPhoneNumberTo() const {
	return phoneNumberTo;
}

const Text& Text::operator=(const Text& t) {
	if (!(*this == t)) {
		Message::operator=(t);
		this->setPhoneNumberTo(t.phoneNumberFrom);
		this->setPhoneNumberFrom(t.phoneNumberTo);
	}
	return *this;
}

bool Text::operator==(const Text& obj) const {
	return Message::operator==(obj);
}
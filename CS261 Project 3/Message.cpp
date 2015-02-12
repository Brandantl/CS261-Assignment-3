/*
 * File:   Message.cpp
 * Author: brandan
 *
 * Created on February 3, 2015, 11:56 AM
 */
#define _CRT_SECURE_NO_WARNINGS

#include "Message.h"

Message::Message(const Message& orig) {
	*this = orig;
}

Message::Message(){
	content = NULL;
	this->nameFrom = NULL;
	this->nameTo = NULL;
	timeStamp = time(NULL);
}

Message::~Message() {
	if (this->nameFrom) {
		delete[] this->nameFrom;
	}
	if (this->content) {
		delete[] this->content;
	}
	if (this->nameTo) {
		delete[] this->nameTo;
	}
}

int Message::print() {

	struct tm* timeinfo;
	timeinfo = localtime(&timeStamp);

	cout << "Time: " << asctime(timeinfo) << endl;
	cout << "From: " << nameFrom << endl;
	cout << "To: " << nameTo << endl;
	cout << content << endl << endl;
	return 1;
}

int Message::compose(char * aMessage) {
	if (this->content) {
		delete[] this->content;
	}
	if (aMessage) {
		this->content = new char[strlen(aMessage) + 1];
		strcpy(this->content, aMessage);
	}
	else {
		this->content = NULL;
	}
	return 1;
}

const Message& Message::operator=(const Message& m) {
	if (!(*this == m)) {
		this->setFrom(m.nameFrom);
		this->setTo(m.nameTo);
		this->content = m.content;
		this->index = m.index;
		this->timeStamp = m.timeStamp;
	}
	return *this;
}

bool Message::operator == (const Message& obj) const {
	return true;
}

void Message::setFrom(char * _from)  {
	if (this->nameFrom) {
		delete[] this->nameFrom;
	}
	if (_from) {
		this->nameFrom = new char[strlen(_from) + 1];
		strcpy(this->nameFrom, _from);
	}
	else {
		this->nameFrom = NULL;
	}
}

void Message::setTo(char * _to)   {
	if (this->nameTo) {
		delete[] this->nameTo;
	}
	if (_to) {
		this->nameTo = new char[strlen(_to) + 1];
		strcpy(this->nameTo, _to);
	}
	else {
		this->nameTo = NULL;
	}
}

char * Message::getFrom() const {
	return nameFrom;
}

char * Message::getTo() const  {
	return nameTo;
}
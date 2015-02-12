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

Message::Message(char * _to, char* _from, char* content) {
	this->setTo(_to);
	this->setFrom(_from);
	this->compose(content);
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

void Message::print() {
	struct tm* timeinfo;
	timeinfo = localtime(&timeStamp);

	cout << "Time: " << asctime(timeinfo) << endl;
	cout << "From: " << nameFrom << endl;
	cout << "To: " << nameTo << endl;
	cout << content << endl << endl;
}

void Message::compose(char * aMessage) {
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
	if ((this->nameFrom == obj.nameFrom) && (this->nameTo == obj.nameTo) && (this->content == obj.content)) {
		return true;
	}
	return false;
}

bool  Message::operator!=(const Message& obj) const {
	return (!this->operator==(obj));
}

Message  Message::operator+(const Message& obj) {
	this->operator+=(obj);
	return *this;
}

Message  Message::operator+=(const Message& obj){
	string tmp = content;
	string tmp2 = obj.content;
	tmp += tmp2;
	if (this->content) {
		delete[] this->content;
	}
	if (tmp.c_str()) {
		this->nameFrom = new char[strlen(tmp.c_str()) + 1];
		strcpy(this->content, tmp.c_str());
	}
	return *this;
}

bool Message::operator<(const Message& obj) const {
	if (obj.timeStamp > this->timeStamp) {
		return true;
	}
	return false;
}

bool Message::operator>(const Message& obj) const {
	if (obj.timeStamp < this->timeStamp) {
		return true;
	}
	return false;
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

char * Message::getContent() const {
	return this->content;
}
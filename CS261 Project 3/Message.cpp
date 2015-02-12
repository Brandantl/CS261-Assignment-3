/* 
 * File:   Message.cpp
 * Author: brandan
 * 
 * Created on February 3, 2015, 11:56 AM
 */
#define _CRT_SECURE_NO_WARNINGS

#include "Message.h"

Message::Message(string to, string from, int num) {
    nameTo = to;
    nameFrom = from;
    index = num;
    timeStamp = time(NULL);
}

Message::Message(const Message& orig) {
    nameFrom = orig.nameFrom;
    nameTo = orig.nameTo;
    content = orig.content;
    index = orig.index;
}

Message::~Message() {

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

int Message::compose(string aMessage) {
    content = aMessage;
    return 1;
}

const Message& Message::operator=(const Message& m) {
	if (!(*this == m)) {
		this->nameFrom = m.nameFrom;
		this->nameTo = m.nameTo;
		this->content = m.content;
		this->index = m.index;
		this->timeStamp = m.timeStamp;
	}
    return *this;
}

bool Message::operator == (const Message& obj) const {
	return true;
}
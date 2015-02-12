/* 
 * File:   text.cpp
 * Author: brandan
 * 
 * Created on February 3, 2015, 11:57 AM
 */

#include "Text.h"

/*Text::Text(string to, string from, int num, int numTo, int numFrom) {
    Message(to, from, num);
    phoneNumberTo = numTo;
    phoneNumberFrom = numFrom;
}

Text::Text(const Text& orig) {
	//*this = orig;
}*/


Text::~Text() {

}

void Text::print() {
    cout << "Phone number to: " << phoneNumberTo << endl
            << "Phone number from: " << phoneNumberFrom << endl;
    Message::print();
}

void Text::compose(char * aMessage) {
    Message::compose(aMessage);
}

void Text::setPhoneNumberFrom(long long number) {
	phoneNumberFrom = number;
}
//Yes

void Text::setPhoneNumberTo(long long number) {
	phoneNumberTo = number;
}

long long Text::getPhoneNumberFrom() const {
	return phoneNumberFrom;
}

long long Text::getPhoneNumberTo() const {
	return phoneNumberTo;
}

const Text& Text::operator=(const Text& t) {
	if (!(*this == t)) {
		Message::operator=(t);
		this->phoneNumberFrom = t.phoneNumberFrom;
		this->phoneNumberTo = t.phoneNumberTo;
	}
    return *this;
}

bool Text::operator == (const Text& obj) const {
	return true;
}
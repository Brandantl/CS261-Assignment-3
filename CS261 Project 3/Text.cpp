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

int Text::print() {
    cout << "Phone number to: " << phoneNumberTo << endl
            << "Phone number from: " << phoneNumberFrom << endl;
    Message::print();
    return 1;
}

int Text::compose(char * aMessage) {
    Message::compose(aMessage);
    return 1;
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
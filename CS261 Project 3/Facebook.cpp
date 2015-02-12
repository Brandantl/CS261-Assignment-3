/* 
 * File:   facebook.cpp
 * Author: brandan
 * 
 * Created on February 3, 2015, 11:57 AM
 */

#include "Facebook.h"

/*Facebook::Facebook(string to, string from, int num, string aUserName) {
    Message(to, from, num);
    userName = aUserName;
}

Facebook::Facebook(const Facebook& orig) {
    userName = orig.userName;
}*/

Facebook::~Facebook() {
    
}

void Facebook::print() {
    cout << "Username: " << userName << endl;
    Message::print();
}


void Facebook::compose(char * aMessage) {
    Message::compose(aMessage);
}

Facebook Facebook::operator=(const Facebook & f) {
    Message::operator=(f);
    this->userName = f.userName;
	return *this;
}

bool Facebook::operator==(const Facebook& obj) const {
	return true;
}
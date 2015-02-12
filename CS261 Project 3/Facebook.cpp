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

int Facebook::print() {
    cout << "Username: " << userName << endl;
    Message::print();
    return 1;
}


int Facebook::compose(string aMessage) {
    Message::compose(aMessage);
    return 1;
}

Facebook Facebook::operator=(const Facebook & f) {
    Message::operator=(f);
    this->userName = f.userName;
	return *this;
}

bool Facebook::operator==(const Facebook& obj) const {
	return true;
}
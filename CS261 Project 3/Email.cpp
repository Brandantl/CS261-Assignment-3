/* 
 * File:   email.cpp
 * Author: brandan
 * 
 * Created on February 3, 2015, 11:57 AM
 */

#include "Email.h"

/*Email::Email(string to, string from, int num, string address, string subject) {
    Message(to, from, num);
    emailAddress = address;
    emailSubject = subject;
}

Email::Email(const Email& orig) {
    emailAddress = orig.emailAddress;
    emailSubject = orig.emailSubject;
}*/

Email::~Email() {
}

int Email::print() {
    cout << "Email address: " << emailAddress << endl;
    cout << "Subject: " << emailSubject << endl;
    Message::print();
    return 1;
}



int Email::compose(string aMessage) {
    Message::compose(aMessage);
    return 1;
}

Email Email::operator=(const Email & e) {
    Message::operator=(e);
    this->emailAddress = e.emailAddress;
    this->emailSubject = e.emailSubject;
}
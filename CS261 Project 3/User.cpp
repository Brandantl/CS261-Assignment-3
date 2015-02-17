/*
 * File:   user.cpp
 * Author: brandan
 *
 * Created on February 5, 2015, 10:18 AM
 */
#define _CRT_SECURE_NO_WARNINGS
#include "User.h"

User::User(char * _emailAddress, char* _PhoneNumer, char * _FBUserName) {
    emailAddress = NULL;
    PhoneNumer = NULL;
    FBUserName = NULL;
    this->setEmailAddress(_emailAddress);
    this->setPhoneNumber(_PhoneNumer);
    this->setFBUserName(_FBUserName);
}

User::User(const User& orig) {
    // Todo
}

User::~User() {
    if (this->emailAddress) {
        delete[] this->emailAddress;
    }
    if (this->PhoneNumer) {
        delete[] this->PhoneNumer;
    }
    if (this->FBUserName) {
        delete[] this->FBUserName;
    }
}

void User::checkMessages() {
    myMailbox.displayMessages();
}

void User::displayAddressBook() {
    myAddressBook.displayContacts();
}

void User::writeMessage(char * contents, char * message, char * to, Mailbox::Type thing) {
    if (thing == Mailbox::TextMsg) {
        myMailbox.writeMessage(message, NULL, this->PhoneNumer, to, thing);
    } else if (thing == Mailbox::EmailMsg) {
        myMailbox.writeMessage(message, contents, this->emailAddress, to, thing);
    } else if (thing == Mailbox::FacebookMsg) {
        myMailbox.writeMessage(message, NULL, this->FBUserName, to, thing);
    }
}

void User::addContact(char * _name, char * _address, AddressBook::Type thing) {
    myAddressBook.addContact(_name, _address, thing);
}

void User::setEmailAddress(char * _address) {
    if (this->emailAddress) {
        delete[] this->emailAddress;
    }
    if (_address) {
        this->emailAddress = new char[strlen(_address) + 1];
        strcpy(this->emailAddress, _address);
    } else {
        this->emailAddress = NULL;
    }
}

void User::setPhoneNumber(char * _phone) {
    if (this->PhoneNumer) {
        delete[] this->PhoneNumer;
    }
    if (_phone) {
        this->PhoneNumer = new char[strlen(_phone) + 1];
        strcpy(this->PhoneNumer, _phone);
    } else {
        this->PhoneNumer = NULL;
    }
}

void User::setFBUserName(char * _fbusername) {
    if (this->FBUserName) {
        delete[] this->FBUserName;
    }
    if (_fbusername) {
        this->FBUserName = new char[strlen(_fbusername) + 1];
        strcpy(this->FBUserName, _fbusername);
    } else {
        this->FBUserName = NULL;
    }
}

const User& User::operator=(const User& obj) {
	this->setEmailAddress(obj.emailAddress);
	this->setFBUserName(obj.FBUserName);
	this->setPhoneNumber(PhoneNumer);
	return *this;
}
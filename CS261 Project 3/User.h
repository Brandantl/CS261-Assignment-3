/* 
 * File:   user.h
 * Author: brandan
 *
 * Created on February 5, 2015, 10:18 AM
 */

#ifndef USER_H
#define	USER_H
#include <string>
#include "Mailbox.h"
#include "AddressBook.h"

class User {
public:
    User(char *, char*, char *);
    User(const User& orig);
    virtual ~User();
    void setEmailAddress(char *);
    void setPhoneNumber(char *);
    void setFBUserName(char *);
    void checkMessages();
    void displayAddressBook();
    void writeMessage(char * contents, char * message, char * to, Mailbox::Type thing);
    void addContact(char *, char *, AddressBook::Type);
private:
    Mailbox myMailbox;
    AddressBook myAddressBook;
    char * emailAddress;
    char * PhoneNumer;
    char * FBUserName;
};

#endif	/* USER_H */


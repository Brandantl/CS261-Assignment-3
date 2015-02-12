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
    User();
    User(const User& orig);
    virtual ~User();
    int checkMessages();
    int readMessage(int var);
    int writeMessage(string);
    int displayAddressBook();
private:
    Mailbox myMailbox;
    AddressBook myAddressBook;
};

#endif	/* USER_H */


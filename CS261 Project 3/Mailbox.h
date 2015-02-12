/* 
 * File:   inbox.h
 * Author: brandan
 *
 * Created on February 5, 2015, 10:19 AM
 */

#ifndef INBOX_H
#define	INBOX_H
#include <string>
#include <vector>
#include "Message.h"
using namespace std;

class Mailbox {
public:
    Mailbox();
    Mailbox(const Mailbox& orig);
	virtual ~Mailbox();
    int displayMessage(int var);
    int writeMessage(string);
    int print();
    int removeMessage(int var);
private:
    vector <Message*> myMSG;
};


#endif	/* INBOX_H */


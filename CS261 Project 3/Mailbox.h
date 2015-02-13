/* 
 * File:   inbox.h
 * Author: brandan
 *
 * Created on February 5, 2015, 10:19 AM
 */

#ifndef INBOX_H
#define	INBOX_H

#include "Text.h"
#include "Email.h"
#include "Facebook.h"
#include "Message.h"
#include <vector>

using namespace std;

class Mailbox {
public:
	enum Type {
		Text,
		Email,
		Facebook
	};
    Mailbox();
    Mailbox(const Mailbox& orig);
	virtual ~Mailbox();
    int displayMessages();
    int writeMessage(char *);
private:
    vector <Message*> myMSG;
};


#endif	/* INBOX_H */


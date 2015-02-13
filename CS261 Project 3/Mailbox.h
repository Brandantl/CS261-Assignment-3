/*
 * File:   inbox.h
 * Author: brandan
 *
 * Created on February 5, 2015, 10:19 AM
 */

#ifndef INBOX_H
#define	INBOX_H

#include "Linklist.h"
#include "Text.h"
#include "Email.h"
#include "Facebook.h"

using namespace std;

class Mailbox {
public:
	enum Type {
		TextMsg = 1,
		EmailMsg = 2,
		FacebookMsg = 3 
	};
	Mailbox();
	Mailbox(const Mailbox& orig);
	virtual ~Mailbox();
	void displayMessages();
	void writeMessage(char *, char *, char*, char*, Type thing);
private:
	Linklist <Message> myMSG;
};


#endif	/* INBOX_H */


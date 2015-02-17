/* 
 * File:   email.h
 * Author: brandan
 *
 * Created on February 3, 2015, 11:57 AM
 */

#ifndef EMAIL_H
#define	EMAIL_H

#include "Message.h"
#include <cstring>

class Email : public Message {
public:
	Email(char * _subject, char * _to, char * _from, char * _message);
	Email(const Email&);// <============================== TODO
    virtual ~Email();
    virtual void print();
    virtual void compose(char * aMessage);
	virtual char* getEmailAddress() const;
	virtual char* getEmailSubject() const;
	virtual void setEmailAddress(char *);
	virtual void setEmailSubject(char *);
	virtual const Email& operator=(const Email& e);
	virtual bool operator==(const Email& obj) const;
private:
    char* emailAddress;
    char* emailSubject;
};

#endif	/* EMAIL_H */


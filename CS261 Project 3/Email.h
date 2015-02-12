/* 
 * File:   email.h
 * Author: brandan
 *
 * Created on February 3, 2015, 11:57 AM
 */

#ifndef EMAIL_H
#define	EMAIL_H

#include "Message.h"

class Email : public Message {
public:
  //  Email(string to, string from, int num, string emailAddress, string subjectLine);
  // Email(const Email& orig);
	Email();
    virtual ~Email();
    virtual void print();
    virtual void compose(char * aMessage);
	virtual const Email& operator=(const Email& e);
	bool operator==(const Email& obj) const;
private:
    string emailAddress;
    string emailSubject;
};

#endif	/* EMAIL_H */


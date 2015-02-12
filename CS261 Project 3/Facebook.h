/* 
 * File:   facebook.h
 * Author: brandan
 *
 * Created on February 3, 2015, 11:57 AM
 */

#ifndef FACEBOOK_H
#define	FACEBOOK_H
#include <string>
#include "Message.h"
using namespace std;

class Facebook : public Message {
public:
	Facebook(char * _to, char * _from, char * _message);
    virtual ~Facebook();
    virtual void print();
    virtual void compose(char * aMessage);
	virtual char * getUsername() const;
	virtual void setUsername(char*);
    virtual Facebook operator=(const Facebook & f);
private:
    char* userName;
    int userID;
};

#endif	/* FACEBOOK_H */


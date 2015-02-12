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
    //Facebook(string to, string from, int num, string aUserName);
   // Facebook(const Facebook& orig);
	Facebook();
    virtual ~Facebook();
    virtual void print();
    virtual void compose(char * aMessage);
    virtual Facebook operator=(const Facebook & f);
	virtual bool operator==(const Facebook& obj) const;
private:
    string userName;
    int userID;
};

#endif	/* FACEBOOK_H */


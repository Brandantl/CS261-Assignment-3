/* 
 * File:   text.h
 * Author: brandan
 *
 * Created on February 3, 2015, 11:57 AM
 */

#ifndef TEXT_H
#define	TEXT_H

#include "Message.h"

class Text : public Message {
public:
    //Text(string to, string from, int num, int numTo, int numFrom);
   //Text(const Text& orig);
	Text();
    virtual ~Text();
    virtual void print();
    virtual void compose(char * aMessage);
	virtual void setPhoneNumberTo(long long);
	virtual void setPhoneNumberFrom(long long);
	virtual long long getPhoneNumberTo() const;
	virtual long long getPhoneNumberFrom() const;

    virtual const Text& operator=(const Text& obj);
	virtual bool operator==(const Text& obj) const;
private:
    long long phoneNumberTo;
	long long phoneNumberFrom;
};

#endif	/* TEXT_H */


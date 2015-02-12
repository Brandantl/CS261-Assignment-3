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
	Text(char * numTo, char * numFrom, char * msg);
	Text(const Text& orig);
    virtual ~Text();
    virtual void print();
    virtual void compose(char * aMessage);
	virtual void setPhoneNumberTo(char *);
	virtual void setPhoneNumberFrom(char *);
	virtual char *  getPhoneNumberTo() const;
	virtual char *  getPhoneNumberFrom() const;

    virtual const Text& operator=(const Text& obj);
	virtual bool operator==(const Text& obj) const;
private:
    char * phoneNumberTo;
	char *  phoneNumberFrom;
};

#endif	/* TEXT_H */


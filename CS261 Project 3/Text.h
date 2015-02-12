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
    Text(string to, string from, int num, int numTo, int numFrom);
    Text(const Text& orig);
    virtual ~Text();
    virtual int print();
    virtual int compose(string aMessage);
    virtual const Text& operator=(const Text& obj);
	virtual bool operator==(const Text& obj) const;
private:
    int phoneNumberTo;
    int phoneNumberFrom;
};

#endif	/* TEXT_H */


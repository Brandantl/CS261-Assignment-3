/* 
 * File:   message.h
 * Author: brandan
 *
 * Created on February 3, 2015, 11:56 AM
 */

#ifndef MESSAGE_H
#define	MESSAGE_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Message {
public:
    Message(const Message& orig);
	Message();
    virtual ~Message();
    virtual void print();
	virtual char * getFrom() const;
	virtual char * getTo() const;
	virtual char * getContent() const;
	virtual void setFrom(char * _from);
	virtual void setTo(char * _to);
    virtual void compose(char *);


	// Operator overloads 
	virtual const Message& operator=(const Message& obj);
	virtual bool operator==(const Message& obj) const;
	virtual bool operator!=(const Message& obj) const;
	virtual bool operator<(const Message& obj) const;
	virtual bool operator>(const Message& obj) const;
	virtual Message operator+(const Message&);
	virtual Message operator+=(const Message&);
private:
    char * nameFrom;
	char * nameTo;
	char * content;
    int index;
    time_t timeStamp;
};


#endif	/* MESSAGE_H */


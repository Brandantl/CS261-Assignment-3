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
    Message(string to, string from, int num);
    Message(const Message& orig);
    virtual ~Message();
    virtual int print();
    virtual int compose(string);
    virtual Message operator=(const Message & m);
private:
    string nameFrom;
    string nameTo;
    string content;
    int index;
    time_t timeStamp;
};


#endif	/* MESSAGE_H */


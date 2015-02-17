//
//  inbox.cpp
//  
//
//  Created by Kaleb Striplin on 2/5/15.
//
//

#include "Mailbox.h"

Mailbox::Mailbox() {
}

Mailbox::Mailbox(const Mailbox& orig) {
}

Mailbox::~Mailbox() {
}

void Mailbox::displayMessages(){
	myMSG.display();
}

void Mailbox::writeMessage(char * _msg, char * _subject, char* _from, char* _to, Type  thing) {
	if (thing == Mailbox::TextMsg) {
		Text * newMsg = new Text(_to, _from, _msg);
		myMSG.insert(newMsg);
	}
	else if (thing == Mailbox::EmailMsg) {
		Email * newMsg = new Email(_subject, _to, _from, _msg);
		myMSG.insert(newMsg);
	}
	else if (thing == Mailbox::FacebookMsg) {
		Facebook * newMsg = new Facebook(_to, _from, _msg);
		myMSG.insert(newMsg);
	}
	else {
		cout << "Invalid Command";
	}
}
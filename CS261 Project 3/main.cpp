/*
 * File:   main.cpp
 * Author: brandan
 *
 * Created on February 3, 2015, 11:56 AM
 */

#include "User.h"
#include <string>
#include <iostream>
using namespace std;
char getChar(char * prompt);
void getString(char * prompt, char * input);
void displayMenu();
char getCommand();
int getInt(char * prompt);
void createMessages(User & obj);
const int MAX_LEN = 100;

int main(int argc, char** argv) {
	char  _emailAddress[MAX_LEN];
	char  _PhoneNumer[MAX_LEN];
	char  _FBUserName[MAX_LEN];
	getString("Please Enter Email: ", _emailAddress);
	getString("Please Enter phone numer: ", _PhoneNumer);
	getString("Please Enter phone Facebook Username: ", _FBUserName);

	User MyUser(_emailAddress, _PhoneNumer, _FBUserName);
	createMessages(MyUser);

	char command = '?';
	displayMenu();
	command = getCommand();
	while (command != 'q') {
		char tmpOne[MAX_LEN];
		char tmpTwo[MAX_LEN];
		char tmpThree[MAX_LEN];
		int tmp = 0;
		switch (command) {
		case 'c':
			MyUser.checkMessages();
			break;
		case 'w':
			while ((tmp <= 0) || (tmp > 3)) {
				tmp = getInt("Please enter message type (1 = Text, 2 = Email, 3 = Facebook): ");
			}
			getString("Address: ", tmpThree);
			getString("Message: ", tmpTwo);
			if ((Mailbox::Type)(tmp) == Mailbox::EmailMsg) {
				getString("Subject: ", tmpOne);
				MyUser.writeMessage(tmpOne, tmpTwo, tmpThree, (Mailbox::Type)(tmp));
			}
			else {
				MyUser.writeMessage(tmpOne, tmpTwo, tmpThree, (Mailbox::Type)(tmp));
			}
			break;
		case 'a':
			while ((tmp <= 0) || (tmp > 3)) {
				tmp = getInt("Please enter a contact type (1 = Text, 2 = Email, 3 = Facebook): ");
			}
			getString("Name: ", tmpOne);
			getString("Address/#: ", tmpTwo);
			MyUser.addContact(tmpOne, tmpTwo, (AddressBook::Type)(tmp));
			break;
		case 'd':
			MyUser.displayAddressBook();
			break;
		default:
			cout << " Command not found " << endl;
		}
		command = getCommand();
	}
	return 0;
}


char getChar(char * prompt) {
	char cmd;
	cout << prompt;
	cin >> cmd;
	cin.ignore(100, '\n');

	return tolower(cmd);

}

void getString(char * prompt, char * input) {
	cout << prompt;
	cin.get(input, MAX_LEN, '\n');
	cin.ignore(100, '\n');
}

void displayMenu() {
	cout << "\nImplemented by: Brandan Lasley" << endl;
	cout << "\nWelcome to Contact/Message Management System! " << endl;
	cout << "\tc> Check Messages" << endl
		<< "\tw> Write Message " << endl
		<< "\ta> Add Contact" << endl
		<< "\td> Display Address book" << endl
		<< "\tq> quit the application" << endl << endl;
}

char getCommand() {
	char cmd;
	cout << "Please enter your choice (c, w, a, d, or q):";
	cin >> cmd;
	cin.ignore(100, '\n');
	return tolower(cmd);
}

int getInt(char * prompt) {
	int temp;
	cout << prompt;
	cin >> temp;
	while (!cin) {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Illegal input -- try again: ";
		cin >> temp;
	}
	cin.ignore(100, '\n');
	return temp;
}

void createMessages(User & obj) {
	// void writeMessage(char * subject, char * message, char * to, Mailbox::Type thing);
	obj.writeMessage(NULL, "Sup", "Brandan", Mailbox::TextMsg);
	obj.writeMessage(NULL, "Hows your wife", "Josh", Mailbox::FacebookMsg);
	obj.writeMessage("Puppies", "Whats your dogs name", "bob", Mailbox::EmailMsg);
//	void addContact(char * _name, char * _address, Type  thing);
	obj.addContact("Rob", "sexyman@hotmail.com", AddressBook::EmailCont);
	obj.addContact("Joe", "joe.smith", AddressBook::FacebookCont);
	obj.addContact("Pi", "3141592659", AddressBook::TextCont);
}
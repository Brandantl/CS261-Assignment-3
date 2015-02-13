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
const int MAX_LEN = 100;

int main(int argc, char** argv) {
	char  _emailAddress[MAX_LEN];
	char  _PhoneNumer[MAX_LEN];
	char  _FBUserName[MAX_LEN];
	getString("Please Enter Email: ", _emailAddress);
	getString("Please Enter phone numer: ", _PhoneNumer);
	getString("Please Enter phone Facebook Username: ", _FBUserName);

	User MyUser(_emailAddress, _PhoneNumer, _FBUserName);

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
			cout << " Command not found ";
		}
		command = getCommand();
	}
	/*Mailbox asdf;
	asdf.writeMessage("1", "2", "3", "4", Mailbox::EmailMsg);
	asdf.displayMessages();
	*/

	//Linklist<TxtContact> asdf;
	//TxtContact TextContactTest("Brandan Lasley", "5039293771");
	//asdf.insert(&TextContactTest);
	//asdf.display();

	/*cout << "Type: Text Message" << endl;
	Text	TextMessageTest("5039958473", "5039293771", "Hello My Name Is Brandan!");
	TextMessageTest.print();*/

	/*cout << "Type: Email Message" << endl;
	Email EmailMessageTest("Project 3", "ceo@brandanlasley.com", "admin@brandanlasley.com", "You're Fired!");
	EmailMessageTest.print();

	cout << "Type: FaceBook Message" << endl;
	Facebook FBMessage("david.platt", "brandan.lasley", "This seems to work OK.");
	FBMessage.print();

	cout << endl << "========== CONTACT ==========" << endl;

	cout << "Type: Text Contact" << endl;
	TxtContact TextContactTest("Brandan Lasley", "5039293771");
	TextContactTest.print();

	cout << endl << "Type: Email Contact" << endl;
	EmailContact EmailContactTest("Brandan Lasley", "admin@brandanlasley.com");
	EmailContactTest.print();

	cout << endl << "Type: FaceBook Contact" << endl;
	FBContact FaceBookContactTest("Brandan Lasley", "brandan.lasley");
	FaceBookContactTest.print();*/
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
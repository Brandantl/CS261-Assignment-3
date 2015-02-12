//
//  TxtContact.cpp
//  
//
//  Author:David P
//
//
#include "TxtContact.h"
/*TxtContact::TxtContact():Contact("i", 0, 0), phone(0){
	
}*/
TxtContact::TxtContact(string & aName, int & index, int & ph, Type & pref) : Contact(aName, index, pref){
	phone = ph;
}

TxtContact::TxtContact(TxtContact & tContact) : Contact(tContact){

	phone = tContact.phone;
}

TxtContact::~TxtContact(){

}

int TxtContact::getPhNumber()const{
	return phone; 
}


void TxtContact::setPhNumber(const int ph){
		phone = ph;
}
void TxtContact::print(){
	Contact::print();
	cout << "phone#: " << phone << endl;
}




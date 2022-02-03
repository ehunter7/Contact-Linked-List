#include <iostream>
#include <string>
#include <vector>

#include "ContactNode.h"

using namespace std;

//Function declaration
void GetUserInput(string& name, string& phoneNumber);

int main() {

	//Objects declared
	ContactNode* contact1 = nullptr;
	ContactNode* contact2 = nullptr;
	ContactNode* contact3 = nullptr;

	//Used to iterate through the linked list
	ContactNode* currContact = nullptr;
	
	//Used to hold the users input
	string name, phoneNumber;

	//Function call to get the users input
	GetUserInput(name, phoneNumber);

	//Sets the contact1 object with the users input
	contact1 = new ContactNode(name, phoneNumber);

	//New line for readability
	cout << endl;

	//Used to clear the stream for the users next input
	cin.ignore(1000, '\n');

	//Function call to get the users input
	GetUserInput(name, phoneNumber);

	//Sets the contact2 object with the users input
	contact2 = new ContactNode(name, phoneNumber);

	//Insert after method used to add contact2 after contact1 in the linked list
	contact1->InsertAfter(contact2);

	//New line for readability
	cout << endl;

	//Used to clear the stream for the users next input
	cin.ignore(1000, '\n');

	//Function call to get the users input
	GetUserInput(name, phoneNumber);

	//Sets the contact3 object with the users input
	contact3 = new ContactNode(name, phoneNumber);

	//Insert after method used to add contact2 after contact1 in the linked list
	contact2->InsertAfter(contact3);
	
	//New line for readability
	cout << endl;

	//Sets the currContact object to the first object in the linked list
	currContact = contact1;

	cout << "CONTACT LIST" << endl;

	//While loop prints the current contacts info 
	//then sets currcontact to the next by using the GetNext method
	while (currContact != nullptr) {

		currContact->PrintContactNode();

		currContact = currContact->GetNext();
	}

	return 0;
}

//Overloaded constructor
// ################################################################
// @par Name
// GetUserInput
// @purpose
// Used to request data from the user. A
// @param [in]:
// string name of the contact passed by reference
// @param [in]:
// string phone number of the contact passed by reference
// @return
// void
// @par References
// None
// @par Notes
// None
// ################################################################
void GetUserInput(string& name, string& phoneNumber) {

	cout << "Enter name:" << endl;
	getline(cin, name);

	cout << "Enter phone number:" << endl;
	cin >> phoneNumber;

	cout << "You entered: ";
	cout << name << ", " << phoneNumber << endl;
}
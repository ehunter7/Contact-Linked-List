// ##################################################
// File: ContactNode.h
// Author: Eric Hunter
// Date: Febuary 2, 2022
// Description: class consisting of linked Nodes. Node holds data and
//              a pointer to the next node in list.
// ##################################################

#pragma once

#include <iostream>
#include <string>

using namespace std;

/**
 * @brief 
 *	Class used as a linked list of contacts
 */
class ContactNode{

public:

	//default constructor
	ContactNode();

	//Overloaded constructor
	// ################################################################
	// @par Name
	// ContactNode
	// @purpose
	// Used to set the class members
	// @param [in]:
	// string name of the contact
	// @param [in]:
	// string phone number of the contact
	// @return
	// void
	// @par References
	// None
	// @par Notes
	// None
	// ################################################################
	ContactNode(string name, string phoneNumber);

	//Modifiers
	
	// ################################################################
	// @par Name
	// InsertAfter
	// @purpose
	// Inserts the passed argument after the object calling the method
	// @param [in]:
	// ContactNode object
	// @return
	// void
	// @par References
	// None
	// @par Notes
	// None
	// ################################################################
	void InsertAfter(ContactNode* contact);

	//Accessors

	// ################################################################
	// @par Name
	// GetName
	// @purpose
	// Gets the name of the current contact
	// @param [in]:
	// none
	// @return
	// string name of contact
	// @par References
	// None
	// @par Notes
	// None
	// ################################################################
	string GetName();

	// ################################################################
	// @par Name
	// GetPhoneNumber
	// @purpose
	// Gets the phone number of the current contact
	// @param [in]:
	// none
	// @return
	// string phone number of contact
	// @par References
	// None
	// @par Notes
	// None
	// ################################################################
	string GetPhoneNumber();

	// ################################################################
	// @par Name
	// GetNext
	// @purpose
	// Gets the next node by returning a pointer to the next contact node
	// @param [in]:
	// none
	// @return
	// Pointer to the next contact node
	// @par References
	// None
	// @par Notes
	// None
	// ################################################################
	ContactNode* GetNext();

	// ################################################################
	// @par Name
	// PrintContactNode
	// @purpose
	// Prints the current contact 
	// @param [in]:
	// none
	// @return
	// void
	// @par References
	// None
	// @par Notes
	// None
	// ################################################################
	void PrintContactNode();

private:

	//Class Members
	string contactName;
	string contactPhoneNum;

	//nextNodePtr points to the next node in the list
	ContactNode* nextNodePtr;

};


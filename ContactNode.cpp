#include "ContactNode.h"

//nextNodePtr set to nullptr indicating end of list
ContactNode::ContactNode()
	: contactName(""), contactPhoneNum(""), nextNodePtr(nullptr){}

//nextNodePtr set to nullptr indicating end of list
ContactNode::ContactNode(string name, string phoneNumber)
	: contactName(name), contactPhoneNum(phoneNumber), nextNodePtr(nullptr) {}


void ContactNode::InsertAfter(ContactNode* contact){

	//Temperary object used to hold data
	ContactNode* tmpNode = nullptr;
	
	//Get the next node if one exists, otherwise assigns tmpNode null
	tmpNode = this->nextNodePtr; 

	//Sets the node pointer to the incoming node.
	this->nextNodePtr = contact;

	//Sets the incoming nodes pointer to the next node in the list. 
	contact->nextNodePtr = tmpNode;
}

string ContactNode::GetName(){
	return this->contactName;
}

string ContactNode::GetPhoneNumber(){
	return this->contactPhoneNum;
}

ContactNode* ContactNode::GetNext(){
	return this->nextNodePtr;
}

void ContactNode::PrintContactNode(){
	cout << "Name: " << this->contactName << endl;
	cout << "Phone number: " << this->contactPhoneNum << endl;
}

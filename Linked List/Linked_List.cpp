#include <iostream>
#include "LinkedList.h"
#include "string"
using namespace std;

void Reminder::appendNode(string num)
{
	ListNode *newNode; // To point to a new node
	ListNode *nodePtr; // To move through the list
					   // Allocate a new node and store num there.
	newNode = new ListNode;
	newNode->value = num;
	newNode->next = nullptr;
	// If there are no nodes in the list
	// make newNode the first node.
	if (!head)
		head = newNode;
	else // Otherwise, insert newNode at end.
	{
		// Initialize nodePtr to head of list.
		nodePtr = head;
		// Find the last node in the list.
		while (nodePtr->next)
			nodePtr = nodePtr->next;
		// Insert newNode as the last node.
		nodePtr->next = newNode;
	}
}
void Reminder::displayList() const
{
	ListNode *nodePtr; // To move through the list
					   // Position nodePtr at the head of the list.
	nodePtr = head;
	// While nodePtr points to a node, traverse
	// the list.
	while (nodePtr)
	{
		// Display the value in this node.
		cout << nodePtr->value << endl;
		// Move to the next node.
		nodePtr = nodePtr->next;
	}
}
void Reminder::insertNode(string num)
{
	ListNode *newNode;               // A new node
	ListNode *nodePtr;               // To traverse the list
	ListNode *previousNode = nullptr; // The previous node
									  // Allocate a new node and store num there.
	newNode = new ListNode;
	newNode->value = num;
	// If there are no nodes in the list
	// make newNode the first node
	if (!head)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else // Otherwise, insert newNode
	{
		// Position nodePtr at the head of list.
		nodePtr = head;
		// Initialize previousNode to nullptr.
		previousNode = nullptr;
		// Skip all nodes whose value is less than num.
		while (nodePtr != nullptr && nodePtr->value < num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		// If the new node is to be the 1st in the list,
		// insert it before all other nodes.
		if (previousNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else // Otherwise insert after the previous node.
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}
void Reminder::deleteNode(string num)
{
	ListNode *nodePtr;      // To traverse the list
	ListNode *previousNode = NULL; // To point to the previous node
							// If the list is empty, do nothing.
	if (!head)
		return;
	// Determine if the first node is the one.
	if (head->value == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		// Initialize nodePtr to head of list
		nodePtr = head;
		// Skip all nodes whose value member is
		// not equal to num.
		while (nodePtr != nullptr && nodePtr->value != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		// If nodePtr is not at the end of the list,
		// link the previous node to the node after
		// nodePtr, then delete nodePtr.
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}
Reminder::~Reminder()
{
	ListNode *nodePtr;   // To traverse the list
	ListNode *nextNode;  // To point to the next node
						 // Position nodePtr at the head of the list.
	nodePtr = head;
	// While nodePtr is not at the end of the list...
	while (nodePtr != nullptr)
	{
		// Save a pointer to the next node.
		nextNode = nodePtr->next;
		// Delete the current node.
		delete nodePtr;
		// Position nodePtr at the next node.
		nodePtr = nextNode;
	}
}
/*
bool Reminder::comesAfter(Reminder & other)
{
	if(month < month)
	{
		return true;
	}
	else if (day < day)
	{
		return true;
	}
	else
	{
		return false;
	}
}
*/
string Reminder::toString()
{
	return description;
}
void addInOrder(int mo, int dy, string desc)
{
	cout << "Please enter month(1 - 12) of task : ";
	cin >> mo;
	cout << "Please enter day(1 - 31) of task : ";
	cin >> dy;
	cout << "Please enter task description : ";
	cin >> desc;
}

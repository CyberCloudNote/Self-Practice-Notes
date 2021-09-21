// Specification file for the NumberList class
#ifndef REMINDER_H
#define REMINDER_H

#include "string"
using namespace std;
class Reminder
{
private:
	// Declare a structure for the list
	struct ListNode
	{
		string value;          // The value in this node
		struct ListNode *next;  // To point to the next node
	};
	ListNode *head;           // List head pointer
	int month;
	int day;
	string description;
public:
	// Constructor
	Reminder()
	{
		head = nullptr;
	}
	// Destructor
	~Reminder();
	// Linked list operations
	void appendNode(string);
	void insertNode(string);
	void deleteNode(string);
	void displayList() const;
	//bool comesAfter(Reminder & other);
	string toString();
	void addInOrder(int mo, int dy, string desc);
	void allData();
};
#endif

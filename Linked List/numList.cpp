#include "numList.h"
#include "iostream"

using namespace std;

  NumList::NumList()
  {
    head = nullptr;
  }
  NumList::~NumList()
  {

  }
  void NumList:: appendNode(double newVal)
  {
    //check if list is empty
    if(head == nullptr)
    {
      head = new Node;
      head->data = newVal;
      head->next = nullptr;
    }
    else
    {
    // create new nodeNode 
    Node *newNode = new Node;
    newNode->data = newVal;
    newNode->next = nullptr;
    // Travel to end of list and append node
    Node * nodePtr = head;
    while(true)
    {
      //are we at the end of the list
      if(nodePtr->next == nullptr)
      {
        // yes we are
        nodePtr->next = newNode;
        break;
      }
      nodePtr = nodePtr->next;
    }
    }  
  }
  void NumList::insertNode(double newVal)
  {
    if(head == nullptr)
    {
      appendNode(newVal);
      return;
    }

    Node *nodePtr = head;
	  Node *newNode = new Node;
	  Node *prevPtr = nullptr;

	  newNode->data = newVal;
	  newNode->next = nullptr;

    

    while (true)
    {
      if(nodePtr->data > newVal)
      {
        break;
      }
      prevPtr = nodePtr;
      nodePtr = nodePtr->next;
    }
    
    prevPtr->next = newNode;
    newNode->next = nodePtr;
  }
  void NumList::deleteNode(double delVal) //delete node
  {
    //if the list is empty just return
    if (head == nullptr)
      return;

      Node* prevPtr = nullptr; //prevPtr = null
      Node* currPtr = head;
      // Find the element deleteVal
      while(currPtr != nullptr)
      {
        if (currPtr->data == delVal)
        {
          break;
        }
        prevPtr = currPtr;
        currPtr = currPtr->next;
      }

      //did not find the element
      if(currPtr == nullptr)
        return;
      //check if it is the head
      if (prevPtr != nullptr)
      {
        prevPtr->next = currPtr->next;
        delete currPtr;
      }
      else
      {
        head = currPtr->next;
        delete currPtr;
      }
  }

  void NumList::printList() const
  {
    Node* currPtr = head;
    while(currPtr != nullptr)
    {
      cout << currPtr->data << endl;
      currPtr = currPtr->next;
    }
  }

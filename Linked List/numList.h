#include <iostream>

using namespace std;

class NumList
{
  private:
    struct Node
    {
     double data;
     Node* next;
    };
    Node *head;
  public:
    NumList();
    ~NumList(); //destroy the list

    void appendNode(double newVal);
    void insertNode(double newVal);
    void deleteNode(double delVal); //delete node
    void printList() const;
};

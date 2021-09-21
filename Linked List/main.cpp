#include <iostream>
#include <string>
#include "numList.h"

using namespace std;

int main() 
{
  NumList list;
  list.appendNode(1);
  list.appendNode(2);
  list.appendNode(4);
  list.appendNode(3);
  list.appendNode(5);
  list.appendNode(6);
  list.insertNode(4);
  list.printList();
  return 0;
}

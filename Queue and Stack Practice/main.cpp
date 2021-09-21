#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

int main() {
  //queues
  string stuff, stuff2;
  queue<string> names;
  cout << "name" << endl;
  cin >> stuff;
  cin >> stuff2;
  names.push(stuff);
  names.push(stuff2);
  cout << names.front();
  names.pop();


  //replace
  /*
  string a, b, c;
  cout << "give a" << endl;
  cin >> a;
   cout << "give b" << endl;
  cin >> b;
  c = a + "_" + b;
  cout << c << endl;

  //remove a char
  //c.erase(remove(c.begin(), c.end(), '_'), c.end());

  //replace a char
  replace( c.begin(), c.end(), '_', ' ');
  cout << c << endl;
  */
/*
vector <string> myString;
string line;
for(int i = 0; i < 4; i++)
{
  cin >> line;
  myString.push_back(line);
}
*/

//update list
/*
string stuff;
ofstream myFile;
myFile.open("test.txt", ios_base::app);
for(int i = 0; i < 2; i++)
{
  cout << "what stuff? " << endl;
  cin >> stuff;
  myFile << stuff << endl;
}
myFile.close();

string stuffA;
ofstream myFileA;
myFileA.open("test.txt", ios_base::app);
for(int i = 0; i < 2; i++)
{
  cout << "what stuffA? " << endl;
  cin >> stuffA;
  myFile << stuffA << endl;
}
myFileA.close();
*/

/*
vector<string> allStuff;
ifstream mystuff;
string nameData;
int i = 0;
mystuff.open("abc.txt");
do
{
  mystuff >> nameData;
  cout<< nameData;
  if(nameData != "A")
  {
    allStuff.push_back(nameData);
  }
  
}while(!mystuff.eof());

cout << allStuff[0];
return 0;
*/
}

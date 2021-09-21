#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;
void test();
int main()
{
  /*
  string fileLine;
  string word;
  int count = 0;
  ifstream inFile;
  inFile.open("quotes.txt");
 // while(inFile.good())
 // {
    getline(inFile,fileLine);
    //cout << fileLine << endl;

    istringstream is(fileLine);

    while ( is >> word )
    {
      cout << word << endl;
      cout << count;
      count++;
    }
 // }
 */
 test();
 return 0;
}
void test()
{
  string fileLine;
  string word;
  int count = 0;
  ifstream inFile;
  inFile.open("quotes.txt");
 // while(inFile.good())
 // {
    getline(inFile,fileLine);
    //cout << fileLine << endl;

    istringstream is(fileLine);

    while ( is >> word )
    {
      cout << word << endl;
      cout << count;
    }
       getline(inFile,fileLine);
    //cout << fileLine << endl;

    istringstream ia(fileLine);

    while ( ia >> word )
    {
      cout << word << endl;
      cout << count;
      count++;
    }
}

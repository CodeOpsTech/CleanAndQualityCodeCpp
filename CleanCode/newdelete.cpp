#include <iostream>
#include <cstdlib>
using namespace std;

class String { 
public: 
	String() { cout << "String::String()" << endl; } 
	~String() { cout << "String::~String()" << endl; } 
};

int main()
{
  String *stringArray = new String[10]; 
  
  delete stringArray;
}


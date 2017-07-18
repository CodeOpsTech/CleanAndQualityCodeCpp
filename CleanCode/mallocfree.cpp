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
  String *stringArray = static_cast<String*>(malloc(10 * sizeof(String)));
  
  free(stringArray);
}


#include <iostream>
#include <cstdlib>
using namespace std;

class String { 
	int len;
	const char * data; 
public: 
	String() {  len = 0; data = 0; } 
	~String() { } 
	String(const char *str) : data(str), len(strlen(data)) { } 
	friend ostream& operator<<(ostream& s, const String& aString); 
};

ostream& operator<<(ostream& s, const String& aString)
{
  	s << aString.data << " of length " << aString.len; 
  	return s;
}

int main()
{
	String aString("Hello"); 
	cout << aString << endl; 	
}


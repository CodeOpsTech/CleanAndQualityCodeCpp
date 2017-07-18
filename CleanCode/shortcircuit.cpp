#include <iostream> 
using namespace std; 

bool foo() { cout << "foo" << endl; return true; }  
bool bar() { cout << "bar" << endl; return false; }  

int main() { 
	bool b1 = foo() ||  bar();
	bool b2 = foo() | bar();
	cout << std::boolalpha <<  b1; 
	cout << std::boolalpha << b2; 
} 



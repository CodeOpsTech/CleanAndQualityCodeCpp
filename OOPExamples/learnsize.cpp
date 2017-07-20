#include <iostream>
using namespace std; 

class Something { 
public: 
	static void staticMethod() { cout << "static method" << endl; } 
	void aMethod() { cout << "aMethod called" << endl; } 
};

int main() {
	Something something; 
	Something::staticMethod(); 
	something.aMethod(); 
	cout << sizeof(something) << endl;
} 


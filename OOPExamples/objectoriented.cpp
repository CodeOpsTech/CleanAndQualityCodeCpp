#include <string> 
#include <iostream> 
using namespace std; 

class Animal { 
public: 
	virtual string talk() = 0;
}; 

class Rat : public Animal { 
public: 
	string talk() override { return "squeak"; } 
}; 

class Pig : public Animal { 
public: 
	string talk() override { return "oink"; } 
}; 

class Frog : public Animal {
public: 
	string talk() override { return "ribbit"; } 
}; 

int main() { 
	Pig pig; 
	Animal &animal = pig;
	cout << animal.talk() << endl; 
}


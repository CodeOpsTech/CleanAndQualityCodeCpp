#include <string> 
#include <iostream> 
using namespace std; 

enum Animal { rat, pig, frog }; 

string talk(enum Animal animal) {
	switch(animal) {
	case rat: return "squeak"; 
	case pig: return "oink"; 
	case frog: return "ribbit"; 
	default: return "unrecognized case value"; 
	}
}

int main() {
	enum Animal animal = pig;
	cout << talk(animal) << endl; 
}


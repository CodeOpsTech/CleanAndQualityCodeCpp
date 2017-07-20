#include <string> 
#include <iostream> 
using namespace std; 

string rat_talk() { return "squeak"; } 
string pig_talk() { return "oink"; } 
string frog_talk() { return "ribbit"; } 

int main() {
	string (*talk)() = &pig_talk; 
	cout << talk() << endl; 
}


#include <iostream>
using namespace std; 

int main() {
	auto rat = []() { return "squeak"; }; 
	auto pig = []() { return "oink"; }; 
	auto frog = []() { return "ribbit"; }; 
	auto animaltalk = pig; 
	cout << animaltalk() << endl; 
}

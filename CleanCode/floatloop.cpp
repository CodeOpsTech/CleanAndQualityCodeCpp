#include <iostream> 
using namespace std; 

int main() {
	cout << "start" << endl;
	for (float f = 0.0; f < 20000000.0; f++)
		; // just loop over, do nothing
	cout << "done" << endl;
}


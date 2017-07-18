#include <iostream> 
using namespace std; 

int factorial(int x) {
	if(x <= 1)
		return x;
	else
		return factorial(--x) * x;
} 

int main() {
	cout << "factorial(4): " << factorial(4) << endl;
} 

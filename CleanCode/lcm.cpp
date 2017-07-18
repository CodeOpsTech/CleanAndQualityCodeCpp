#include <iostream> 
using namespace std; 

int LCM(int a, int b) {
	int result;
	for(int i = 1; i <= b; i++) {
		if( (a * i) % b == 0) {
			result = a * i;
			break; 
		}
	}		
	return result; 
}

int main() {
	cout << LCM(10, 0) << endl;
} 

#include <iostream> 
using namespace std;

extern int j;

int i = j + 20;

int main() {
	cout << "i = " << i << " j = " << j << endl;
} 

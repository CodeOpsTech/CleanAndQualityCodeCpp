#include <iostream> 
using namespace std; 

int main() {
	const char *likes[] = { "cooking" 
			  	"cats",
			  	"singing"
			      };
	for(auto &like : likes) { 
		cout << like <<endl;
	}  
}


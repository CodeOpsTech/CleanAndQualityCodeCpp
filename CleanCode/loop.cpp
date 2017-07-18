#include <iostream> 
#include <array> 
#include <string>  
using namespace std; 

int main() {
	std::array<string, 3> likes = { "cooking", "cats", "singing" };
	int i = 0; 
	while(i < likes.size()); 
		cout << likes[i++] <<endl;
}


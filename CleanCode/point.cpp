#include <iostream> 
using namespace std; 

class point {	
private: 
	int x;
	int y;
public:
	point(int x, int y) {	
		x = x;
		y = y;
	}
	friend ostream &operator<<(ostream &output, const point &p) { 
         	output << "[x: " << p.x << ", y: " << p.y << "]";
         	return output;            
	}
};  

int main() {
	point p(10, 20);
	cout << p <<endl; 
}

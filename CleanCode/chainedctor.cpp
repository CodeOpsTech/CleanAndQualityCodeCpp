#include <iostream> 
using namespace std; 

class point {	
private: 
	int x;
	int y;
public:
	point() {
		// chain the constructors ... 
		// pass -1 to indicate default invalid x and y values 
		// point(-1, -1); 
	} 
	point(int x, int y) {	
		this->x = x;
		this->y = y;
	}
	friend ostream &operator<<(ostream &output, const point &p) { 
         	output << "[x: " << p.x << ", y: " << p.y << "]";
         	return output;            
	}
};  

int main() {
	point p;
	cout << p << endl; 
}

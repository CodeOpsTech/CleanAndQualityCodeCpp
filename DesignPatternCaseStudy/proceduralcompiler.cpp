// This code works, but follows procedural approach
// Task: Convert it to Object Oriented approach and apply Composite pattern

#include <iostream>
#include <string> 
using namespace std; 

class Expr {
private:
	Expr* _left;
	string _value;
	Expr* _right;
public: 
	Expr(Expr* left, string value, Expr* right) {
		_left = left;
		_value = value;
		_right = right; 
	} 

	void GenCode() {
		if((_left == nullptr) && (_right == nullptr)) {
			cout<< "bipush " << _value << endl; 
		} 
		else { 	// its an intermediate node 
			_left->GenCode();
			_right->GenCode(); 
			if(_value == "+") {
				cout << "add" << endl; 
			} 
			else if(_value == "-") { 
				cout << "sub" << endl;  
			} 
			else if(_value == "*") { 
				cout << "mul" << endl;  
			} 
			else if(_value == "/") { 
				cout << "div" << endl; 
			} 
			else { 
				cout << "Internal Error: Not implemented yet!";
			} 
		} 
	}
}; 

int main() {
	// ((10 * 20) + 30)  
	Expr* expr = new Expr(
			new Expr(
				new Expr(nullptr, "10", nullptr), "*", new Expr(nullptr, "20", nullptr)), 
				"+", 
				new Expr(nullptr, "30", nullptr)); 
	expr->GenCode(); 
}


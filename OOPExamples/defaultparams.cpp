#include <iostream> 
#include <memory> 
using namespace std;

class Base {
public:
	virtual void call(int val = 10) { 
		cout << "The default value is :" << val << endl; 
	}
}; 

class Derived : public Base {
public:
	virtual void call(int val = 20) { 
		cout << "The default value is :" << val << endl; 
	}
}; 

int main() { 	 
	unique_ptr<Base> b = make_unique<Derived>(); 
	b->call();
} 

#include <iostream> 
#include <memory> 
using namespace std;

class Base {
public:
	void call() { 
		cout << "In Base::call" << endl; 
	}
}; 

class Derived : public Base {
public:
	virtual void call() { 
		cout << "In Derived::call" << endl; 
	}
}; 

int main() { 	 
	unique_ptr<Base> b = make_unique<Derived>(); 
	b->call();
} 

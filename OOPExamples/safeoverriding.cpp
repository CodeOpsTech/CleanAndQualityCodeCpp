#include <iostream> 
#include <memory> 
using namespace std;

class Base {
public:
	virtual void call() { 
		cout << "in Base::call" << endl; 
	}
}; 

class Derived : public Base {
public:
	virtual void call() const { 
		cout << "in Derived::call" << endl; 
	}
}; 

int main() { 	 
	unique_ptr<Base> b = make_unique<Derived>(); 
	b->call();
} 

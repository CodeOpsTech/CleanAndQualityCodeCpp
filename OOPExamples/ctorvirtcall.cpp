#include <iostream> 
using namespace std; 

struct base {
	base() { 
        	vfun(); 
    	}
    	virtual void vfun() { 
		cout << "Inside base::vfun\n"; 
	}
};
struct deri : base {
    	virtual void vfun() { 
		cout << "Inside deri::vfun\n"; 
	}
};
int main(){
   	deri d;
}


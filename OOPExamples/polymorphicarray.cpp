#include <iostream> 
using namespace std; 

class base {
    int basemem;
public:
    base() : basemem(10) {}
    int getint() {
        return basemem;
    }
    // other members
};

class derived : public base {
    float derivedmem;
public:
    derived() : base(), derivedmem(20.0f) {}
    // other members
};

void print(base *bPtr, int size) {
    for(int i = 0; i < size; i++, bPtr++)
        cout<< bPtr->getint() << endl;
}

int main() {
    base b[5];
    // prints five 10's correctly
    print(b, 5);
    derived d[5];
    // does not print five 10's correctly
    print(d, 5);
}

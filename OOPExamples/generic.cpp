#include <string> 
#include <iostream> 
using namespace std; 

enum Animal { 
	rat, pig, frog 
}; 

typedef const char * cstring;  

template <enum Animal animal>
struct talk  {
    static constexpr cstring value = "undefined"; 
};

template <>
struct talk<rat> {
    static constexpr cstring value = "squeak"; 
};

template <>
struct talk<pig> {
    static constexpr cstring value = "oink"; 
};

template <>
struct talk<frog> {
    static constexpr cstring value = "ribbit"; 
};

int main() {
	cout << talk<pig>::value << endl; 
}


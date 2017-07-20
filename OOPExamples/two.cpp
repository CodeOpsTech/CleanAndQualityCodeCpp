#include <iostream> 
using namespace std; 

class color {
	unsigned char green;
	unsigned char red;
	unsigned char blue;
	color(unsigned char green, unsigned char red, unsigned char blue) {
		this->green = green;
		this->red = red;
		this->blue = blue;
	}
public: 
	static color* createColor(unsigned char green, unsigned char red, unsigned char blue) {
		if(color exists locally)
			return that color object
		else
			create a color object, put it locally, and then return the pointer 
		return new color(green, red, blue); 
	} 
	void printColor() {
		cout << "g = " << green << " r = " << red << " b = " << blue << endl; 
	} 
}; 

int main() {
	color *black = new color; // color::createColor(255, 255, 255); 
	color *anotherblack = new color // color::createColor(255, 255, 255); 
	black->printColor(); 
}


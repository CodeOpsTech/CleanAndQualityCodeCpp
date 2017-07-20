#include <stdio.h> 

struct color {
	unsigned char red;
	unsigned char green;
	unsigned char blue;
}; 


extern "C" void print_color(struct color *color) { 
	printf("%d %d %d\n", color->red, color->green, color->blue); 
} 


#include <stdio.h> 

struct bits {
	int b : 1;
} bits;

int main() {
	bits.b = 1;
	printf("%d", bits.b); 
} 	

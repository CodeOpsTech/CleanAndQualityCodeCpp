#include <stdio.h>

int main() {
	int c = 0, r = 0;
   	do {
       		if(c >= r) 
           		printf(" %c", (~c & r) ? '.' : '+');
       		
	   	c++;
	   	if (c >= 32) {
           		c = 0;  
	           	r++; 
           		printf("\n");
       		}
   	} while (r != 32); 
}

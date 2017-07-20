#include <stdio.h>
#include <string.h> 

int main() {
	char str[] = "Mon Jul 17 17:56:41 IST 2017"; 
	char *token = strtok(str, ". -,;:"); 
	do { 
		printf("%s \n", token); 
	}
	while(token = strtok(0, ". -,;:")); 
}

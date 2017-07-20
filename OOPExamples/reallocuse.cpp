#include <cstdlib>
using namespace std; 

// demonstrates how malloc acts as a "complete memory manager!" 
int main()
{                                
   int* ip = (int*) realloc(NULL, sizeof(int) * 100);  
	// allocate 100 4-byte ints - equivalent to malloc(sizeof(int) * 100) 

   ip = (int*) realloc(ip, sizeof(int) * 200);  // expand the memory area twice 

   ip = (int*) realloc(ip, sizeof(int) * 50);   // shrink to half the memory area 

   ip = (int*) realloc(ip, 0);            // equivalent to free(ip)
}


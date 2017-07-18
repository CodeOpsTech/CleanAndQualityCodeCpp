#include <iostream> 
#include <cmath> 
#include <cassert> 

int main() {
	double two = 2.0;
	double sqrt_of_two = sqrt(two);
	assert((sqrt_of_two * sqrt_of_two) == two);
} 


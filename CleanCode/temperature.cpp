#include <iostream> 
using namespace std;

bool validateWaterTemperature(int temperature) {
	return (0 <= temperature <= 100); 
} 

int main() {
	cout << std::boolalpha << validateWaterTemperature(250);
}
